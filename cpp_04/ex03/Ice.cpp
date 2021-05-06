#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
};

Ice::~Ice() {
};

Ice::Ice(Ice const & src) : AMateria("ice") {
    *this = src;
};

Ice & Ice::operator=(Ice const & src) {
    if (this != &src)
        this->_xp = src._xp;
    return (*this);
};

AMateria *Ice::clone() const {
    return (new Ice(*this));
};

void Ice::use(ICharacter & target) {
    this->_xp += 10;
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
};