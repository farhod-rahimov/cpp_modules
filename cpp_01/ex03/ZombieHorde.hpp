#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

#include <time.h>
#include "Zombie.hpp"

class ZombieHorde {
public:
    ZombieHorde();
    Zombie  *_zombies;
    int     _n;

public:
    ZombieHorde(int N);
    ~ZombieHorde();
    Zombie  *getZombies();
    void    announce(void);
};

#endif