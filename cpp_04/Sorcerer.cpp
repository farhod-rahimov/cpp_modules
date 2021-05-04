#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {
};

Sorcerer::Sorcerer(char const *name, char const *title) {
    this->_name = name;
    this->_title = title;
    std::cout << name << ", " << title << ", is born!" << std::endl;
};

Sorcerer::~Sorcerer() {
     std::cout << this->getName() << ", " \
        << this->getTitle() \
            << ", is dead. Consequences will never be the same!" << std::endl;
};

Sorcerer::Sorcerer(Sorcerer const &src) {
    *this = src;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &src) {
    if (this != &src)
    {
        this->_name = src._name;
        this->_title = src._title;
    }
    return (*this);
};

void Sorcerer::setName(char const *name) {
    this->_name = name;
};

void Sorcerer::setTitle(char const *title) {
    this->_title = title;
};

char const *Sorcerer::getName(void) const {
    return (this->_name);
};

char const *Sorcerer::getTitle(void) const {
    return (this->_title);
};

void Sorcerer::polymorph(Victim const &v) const {
    v.getPolymorphed();
};

std::ostream &operator<<(std::ostream &o, Sorcerer const &src) {
    o << "I am " << src.getName() << ", " \
        << src.getTitle() << ", and I like ponies!" << std::endl;
    return (o);
};