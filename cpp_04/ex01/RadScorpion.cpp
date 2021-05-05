#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") { 
    std::cout <<  "* click click click *" << std::endl;
};

RadScorpion::~RadScorpion() {
    std::cout << "* SPROTCH *" << std::endl;
};

RadScorpion::RadScorpion(RadScorpion const &src) {
    *this = src;
};

RadScorpion &RadScorpion::operator=(RadScorpion const &src) {
    if (this != &src)
    {
        this->_hp = src._hp;
        this->_type = src._type;
    }
    return (*this);
};

void RadScorpion::takeDamage(int amount) {
    amount -= 3;
    if (amount < 0)
        return ;
    else
        this->_hp -= amount;
};