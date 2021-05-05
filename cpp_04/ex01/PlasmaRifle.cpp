#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
};

PlasmaRifle::~PlasmaRifle() {
};

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src) {
    *this = src;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &src) {
    if (this != &src)
    {
        this->_name = src._name;
        this->_damage = src._damage;
        this->_apcost = src._apcost;
    }
    std::cout << "gere2\n";
    return (*this);
};

void  PlasmaRifle::attack() const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
};
