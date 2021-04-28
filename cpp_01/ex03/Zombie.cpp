#include "Zombie.hpp"

Zombie::Zombie() {
    Zombie::_type = "default_type";
};

Zombie::Zombie(std::string type, std::string name) {
    Zombie::_type = type;
    Zombie::_name = name;
    std::cout << "new Zombie with type '" << type << "' and name '" << name << "' created" << std::endl;
};

void Zombie::announce(void) {
    std::cout << "<" << Zombie::_name << " (" << Zombie::_type << ")> ";
    std::cout << "Braiiiiiiinnnssss..." << std::endl;
};

void Zombie::setType(std::string type) {
    Zombie::_type = type;
};

void Zombie::setName(std::string name) {
    Zombie::_name = name;
};

std::string Zombie::getType(void) {
    return (Zombie::_type);
};

std::string Zombie::getName(void) {
    return (Zombie::_name);
};