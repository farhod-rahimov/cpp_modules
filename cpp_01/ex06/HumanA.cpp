#include "HumanA.hpp"

HumanA::HumanA() {
};

HumanA::HumanA(std::string name, Weapon &weapon) {
    HumanA::_name = name;
    HumanA::_weapon = &weapon;
};

void HumanA::setWeapon(Weapon &weapon) {
    HumanA::_weapon = &weapon;
};

void HumanA::attack() {
    std::cout << HumanA::_name << "  attacks with his " << HumanA::_weapon->getType() << std::endl;
};