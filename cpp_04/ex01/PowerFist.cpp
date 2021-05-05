#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {
};

PowerFist::~PowerFist() {
};

PowerFist::PowerFist(PowerFist const &src) {
    *this = src;
}

PowerFist &PowerFist::operator=(PowerFist const &src) {
    if (this != &src)
    {
        this->_name = src._name;
        this->_damage = src._damage;
        this->_apcost = src._apcost;
    }
    return (*this);
};

void  PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
};
