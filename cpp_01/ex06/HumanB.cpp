#include "HumanB.hpp"

HumanB::HumanB() {
};

HumanB::HumanB(std::string name) {
    HumanB::_name = name;
};

void HumanB::setWeapon(Weapon &weapon) {
    HumanB::_weapon = &weapon;
};

void HumanB::attack() {
    std::cout << HumanB::_name << "  attacks with his " << HumanB::_weapon->getType() << std::endl;
};