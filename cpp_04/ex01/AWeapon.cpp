#include "AWeapon.hpp"

AWeapon::AWeapon() {
};

AWeapon::AWeapon(std::string const & name, int apcost, int damage) {
    this->_name = name;
    this->_apcost = apcost;
    this->_damage = damage;
};

AWeapon::~AWeapon() {
};

AWeapon::AWeapon(AWeapon const &src) {
    *this = src;
}

AWeapon &AWeapon::operator=(AWeapon const &src) {
    if (this != &src)
    {
        this->_name = src._name;
        this->_damage = src._damage;
        this->_apcost = src._apcost;
    }
    return (*this);
};

std::string  AWeapon::getName() const {
    return(this->_name);
};

int  AWeapon::getAPCost() const {
    return(this->_apcost);
};

int  AWeapon::getDamage() const {
    return(this->_damage);
};