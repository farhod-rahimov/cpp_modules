#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Victim.hpp"

class Dog : public Victim {
private:
    Dog();

public:
    Dog(char const *name);
    virtual ~Dog();
    Dog(Dog const &src);

    Dog &operator=(Dog const &src);

    virtual void    getPolymorphed(void) const;
};

#endif