#include "Squad.hpp"

Squad::Squad() {
    this->_count = 0;
    this->_units = NULL;
};

Squad::~Squad() {
    t_units *tmp;

    while (this->_units)
    {
        tmp = this->_units;
        this->_units = this->_units->next;
        delete tmp->_unit;
        delete tmp;
    }
};

Squad::Squad(Squad const &src) {
    *this = src;
};

Squad &Squad::operator=(Squad const &src) {
    t_units *origin;
    t_units *tmp = src._units;
    t_units *tmp_free;

    if (this == &src)
        return (*this);
    if (this->_units != NULL)
    {
        while (this->_units)
        {
            tmp_free = this->_units;
            this->_units = this->_units->next;
            delete tmp_free->_unit;
            delete tmp_free;
        }
        this->_count = 0;
    }
    this->_units = new t_units;
    origin = this->_units;
    while (tmp)
    {
        this->_count += 1;
        origin->_unit = tmp->_unit->clone();
        if (tmp->next)
            origin->next = new t_units;
        else
            origin->next = NULL;
        tmp = tmp->next;
        origin = origin->next;
    }
    return (*this);
};


int Squad::getCount() const {
    return (this->_count);
};

ISpaceMarine *Squad::getUnit(int N) const {
    t_units *tmp;
    
    if (N > this->_count)
        return (NULL);
    tmp = this->_units;
    for (int i = 1; i < N; i++)
        tmp = tmp->next;
    return (tmp->_unit);
};

int check_if_unit_in_the_squad(t_units *tmp, ISpaceMarine *unit) {
    while (tmp)
    {
        if (tmp->_unit == unit)
            return (1);
        tmp = tmp->next;
    }
    return (0);
};

int Squad::push(ISpaceMarine *unit) {
    t_units *new_unit;
    t_units *tmp;

    if (unit == NULL || check_if_unit_in_the_squad(this->_units, unit))
        return (this->_count);

    new_unit = new t_units; new_unit->_unit = unit; new_unit->next = NULL;
    this->_count += 1;
    
    if (this->_units == NULL)
    {
        this->_units = new_unit;
        return (this->_count);
    }
    tmp = this->_units;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = new_unit;
    return (this->_count);
};