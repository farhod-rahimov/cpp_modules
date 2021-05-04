#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim {
protected:
    char const * _name;
    Victim();

public:
    Victim(char const *name);
    ~Victim();
    Victim(Victim const &src);

    Victim &operator=(Victim const &src);

    void            setName(char const *name);
    char const      *getName(void) const;
    virtual void    getPolymorphed(void) const;
};

std::ostream &operator<<(std::ostream &o, Victim const &src);

#endif