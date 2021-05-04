#include "Victim.hpp"
#include "Sorcerer.hpp"

Victim::Victim() {
};

Victim::Victim(char const *name) {
    this->_name = name;
    std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
};

Victim::~Victim() {
    std::cout << "Victim " << getName() << " just died for no apparent reason!" << std::endl;
};

Victim::Victim(Victim const &src) {
    *this = src;
}

Victim &Victim::operator=(Victim const &src) {
    if (this != &src)
        this->_name = src._name;
    return (*this);
};

void Victim::setName(char const *name) {
    this->_name = name;
};

char const *Victim::getName(void) const {
    return (this->_name);
};

void Victim::getPolymorphed(void) const {
    std::cout << this->getName() << " has been turned into a cute little sheep!" << std::endl;
};

std::ostream &operator<<(std::ostream &o, Victim const &src) {
    o << "I am " << src.getName() << " and I like otters!" << std::endl;
    return (o);
};