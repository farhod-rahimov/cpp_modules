#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") { 
    std::cout <<  "Gaaah. Me want smash heads!" << std::endl;
};

SuperMutant::~SuperMutant() {
    std::cout << "Aaargh..." << std::endl;
};

SuperMutant::SuperMutant(SuperMutant const &src) {
    *this = src;
};

SuperMutant &SuperMutant::operator=(SuperMutant const &src) {
    if (this != &src)
    {
        this->_hp = src._hp;
        this->_type = src._type;
    }
    return (*this);
};

void SuperMutant::takeDamage(int amount) {
    amount -= 3;
    if (amount < 0)
        return ;
    else
        this->_hp -= amount;
};