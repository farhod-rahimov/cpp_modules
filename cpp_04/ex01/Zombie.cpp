#include "Zombie.hpp"

Zombie::Zombie() : Enemy(99, "Zombie") { 
    std::cout <<  "Braaaiiinnnsssss..." << std::endl;
};

Zombie::~Zombie() {
    std::cout << "I'll be back..." << std::endl;
};

Zombie::Zombie(Zombie const &src) {
    *this = src;
};

Zombie &Zombie::operator=(Zombie const &src) {
    if (this != &src)
    {
        this->_hp = src._hp;
        this->_type = src._type;
    }
    return (*this);
};
