#include "MachineGun.hpp"

MachineGun::MachineGun() : AWeapon("Machine Gun", 10, 33) {
};

MachineGun::~MachineGun() {
};

MachineGun::MachineGun(MachineGun const &src) {
    *this = src;
}

MachineGun &MachineGun::operator=(MachineGun const &src) {
    if (this != &src)
    {
        this->_name = src._name;
        this->_damage = src._damage;
        this->_apcost = src._apcost;
    }
    return (*this);
};

void  MachineGun::attack() const {
    std::cout << "* ptrrrrr... ptrrrr... ptrrrrr... *" << std::endl;
};
