#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
    ZombieEvent::_type = "default_type";
};

ZombieEvent::ZombieEvent(std::string type) {
    ZombieEvent::_type = type;
};

Zombie* ZombieEvent::newZombie(std::string name) {
    Zombie *new_zombie = new Zombie(this->_type, name);;
    return (new_zombie);
};

void ZombieEvent::setZombieType(std::string type) {
    ZombieEvent::_type = type;
};

std::string ZombieEvent::getZombieType(void) {
    return (ZombieEvent::_type);
};