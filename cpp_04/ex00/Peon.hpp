#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim {
private:
    Peon();

public:
    Peon(char const *name);
    virtual ~Peon();
    Peon(Peon const &src);

    Peon &operator=(Peon const &src);

    virtual void    getPolymorphed (void) const;
};

#endif