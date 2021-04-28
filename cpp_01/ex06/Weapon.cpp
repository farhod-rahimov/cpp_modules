#include "Weapon.hpp"

Weapon::Weapon() {
};

Weapon::Weapon(const char *type) {
    Weapon::_type = type;
};

void Weapon::setType(std::string type) {
    Weapon::_type = type;
};

std::string Weapon::getType(void) {
    return (Weapon::_type);
};