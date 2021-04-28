#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

#include <iostream>

#include "Zombie.hpp"

class ZombieEvent {
private:
    std::string _type;
    std::string _name;

public:
    ZombieEvent();
    ZombieEvent(std::string type);

    Zombie* newZombie(std::string name);

    void        setZombieType(std::string type);
    std::string getZombieType(void);
};

#endif