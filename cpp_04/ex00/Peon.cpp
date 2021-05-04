#include "Peon.hpp"
#include "Sorcerer.hpp"

Peon::Peon() {
};

Peon::Peon(char const *name) : Victim(name) {
    this->_name = name;
    std::cout << "Zog Zog." << std::endl;
};

Peon::~Peon() {
    std::cout << "Bleuark..." << std::endl;
};

Peon::Peon(Peon const &src) {
    *this = src;
}

Peon &Peon::operator=(Peon const &src) {
    if (this != &src)
        this->_name = src._name;
    return (*this);
};

void Peon::getPolymorphed(void) const {
    std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
};
