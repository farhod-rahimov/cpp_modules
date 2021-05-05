#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include "Enemy.hpp"

class Zombie : public Enemy {
public:
    Zombie();
    virtual ~Zombie();
    Zombie(Zombie const &src);

    Zombie &operator=(Zombie const &src);
};

#endif