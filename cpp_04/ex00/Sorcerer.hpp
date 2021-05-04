#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer {
private:
    char const * _name;
    char const * _title;
    Sorcerer();

public:
    Sorcerer(char const *name, char const *title);
    ~Sorcerer();
    Sorcerer(Sorcerer const &src);

    Sorcerer &operator=(Sorcerer const &src);

    void setName(char const *name);
    void setTitle(char const *title);
    char const *getName(void) const;
    char const *getTitle(void) const;
    void polymorph(Victim const &) const;
};

std::ostream &operator<<(std::ostream &o, Sorcerer const &src);

#endif