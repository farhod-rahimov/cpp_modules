#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
};

Cure::~Cure() {
};

Cure::Cure(Cure const & src) : AMateria("cure") {
    *this = src;
};

Cure & Cure::operator=(Cure const & src) {
    if (this != &src)
        this->_xp = src._xp;
    return (*this);
};

AMateria *Cure::clone() const {
    return (new Cure(*this));
};

void Cure::use(ICharacter & target) {
    this->_xp += 10;
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
};