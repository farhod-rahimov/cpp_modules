#include "Character.hpp"

Character::Character() {
};

Character::Character(std::string name) {
    this->_name = name;
    this->_materias = NULL;
};

Character::~Character() {
        t_materia *tmp;
        
        while (this->_materias)
        {
            tmp = this->_materias;
            this->_materias = this->_materias->next;
            delete tmp->_materia;
            delete tmp;
        }
};

Character::Character(Character const & src) {
    this->_materias = NULL;
    *this = src;
};

Character &Character::operator=(Character const & src)
{
    t_materia *origin;
    t_materia *tmp = src._materias;
    t_materia *tmp_free;
    int index = 0;

    if (this == &src)
        return (*this);
    else if (this->_materias != NULL)
    {
        while (this->_materias)
        {
            tmp_free = this->_materias;
            this->_materias = this->_materias->next;
            delete tmp_free->_materia;
            delete tmp_free;
        }
    }
    this->_name = src._name;
    this->_materias = new t_materia;
    origin = this->_materias;
    while (tmp)
    {
        origin->_materia = tmp->_materia->clone();
        origin->_idx = index++;
        if (tmp->next)
            origin->next = new t_materia;
        else
            origin->next = NULL;
        tmp = tmp->next;
        origin = origin->next;
    }
    return (*this);
};

std::string const & Character::getName() const {
    return(this->_name);
};

void Character::equip(AMateria *m) {
    unsigned int    total;
    t_materia       *origin;

    origin = this->_materias;
    total = 0;
    if (!origin && m != NULL)
    {
        this->_materias = new t_materia;
        this->_materias->_materia = m;
        this->_materias->_idx = 0;
        this->_materias->next = NULL;
        return ;
    }
    while (origin)
    {
        if (origin->_idx >= 0)
            total++;
        if (origin->next == NULL && total <= 3 && m != NULL)
        {
            origin->next = new t_materia;
            origin->next->_materia = m;
            origin->next->next = NULL;
            origin->next->_idx = total;
            return ;
        }
        origin = origin->next;
    }
    if (total > 3)
        delete m;
};

void Character::unequip(int idx) {
    t_materia       *origin;
    
    origin = this->_materias;
    while (origin)
    {
        if (origin->_idx == idx)
        {
            origin->_idx = -1;
            return ;
        }
        origin = origin->next;
    }
};

void Character::use(int idx, ICharacter & target) {
    t_materia       *origin;

    if (idx < 0)
        return ;
    origin = this->_materias;
    while (origin)
    {
        if (origin->_idx == idx)
        {
            origin->_materia->use(target);
            return ;
        }
        origin = origin->next;
    }
};