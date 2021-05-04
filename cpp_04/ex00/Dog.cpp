#include "Dog.hpp"
#include "Sorcerer.hpp"

Dog::Dog() {
};

Dog::Dog(char const *name) : Victim(name) {
    this->_name = name;
    std::cout << "Ghaav... Ghaav..." << std::endl;
};

Dog::~Dog() {
    std::cout << "Aarrrrr...." << std::endl;
};

Dog::Dog(Dog const &src) {
    *this = src;
}

Dog &Dog::operator=(Dog const &src) {
    if (this != &src)
        this->_name = src._name;
    return (*this);
};

void Dog::getPolymorphed(void) const {
    std::cout << this->getName() << " has been turned into a green dragon!" << std::endl;
};
