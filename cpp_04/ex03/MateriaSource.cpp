#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    this->_materias = NULL;
};

MateriaSource::MateriaSource(AMateria *m) {
    this->_materias = new t_materias;
    this->_materias->_materia = m->clone();
    this->_materias->next = NULL;
};

MateriaSource::~MateriaSource() {
    t_materias *tmp;
    
    while (this->_materias)
    {
        tmp = this->_materias;
        this->_materias = this->_materias->next;
        delete tmp->_materia;
        delete tmp;
    }
};

MateriaSource::MateriaSource(MateriaSource const & src) {
    this->_materias = NULL;
    *this = src;
};

MateriaSource &MateriaSource::operator=(MateriaSource const & src) {
    t_materias *origin;
    t_materias *tmp = src._materias;
    t_materias *tmp_free;

    if (this == &src)
        return (*this);
    else if (this->_materias != NULL)
    {
        while (this->_materias)
        {
            tmp_free = this->_materias;
            this->_materias = this->_materias->next;
            delete tmp->_materia;
            delete tmp;
        }
    }
    this->_materias = new t_materias;
    origin = this->_materias;
    while (tmp)
    {
        origin->_materia = tmp->_materia->clone();
        if (tmp->next)
            origin->next = new t_materias;
        else
            origin->next = NULL;
        tmp = tmp->next;
        origin = origin->next;
    }
    return (*this);
};

void MateriaSource::learnMateria(AMateria *m) {
    unsigned int total;
    t_materias *tmp;
    t_materias *tmp_free;

    total = 0;
    tmp = this->_materias;
    if (this->_materias == NULL)
    {
        this->_materias = new t_materias;
        this->_materias->_materia = m;
        this->_materias->next = NULL;
        return ;
    }
    while (tmp)
    {
        total++;
        if (tmp->next == NULL)
            break ;
        tmp = tmp->next;
    }
    tmp_free = this->_materias;
    tmp->next = new t_materias;
    tmp->next->_materia = m;
    tmp->next->next = NULL;
    if (total > 3)
    {
        this->_materias = this->_materias->next;
        delete tmp_free->_materia;
        delete tmp;
    }
};

AMateria *MateriaSource::createMateria(std::string const & type) {
    t_materias *tmp;

    tmp = this->_materias;
    while (tmp)
    {
        if (tmp->_materia->getType() == type)
            return (tmp->_materia->clone());
        tmp = tmp->next;
    }
    return (0);
};