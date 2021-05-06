#include "AMateria.hpp"

AMateria::AMateria() {
};

AMateria::AMateria(std::string const & type) {
    this->_xp = 0;
    this->_type = type;
};

AMateria::~AMateria() {
};

AMateria::AMateria(AMateria const & src) {
    *this = src;
};

AMateria &AMateria::operator=(AMateria const & src) {
    if (this != &src)
        this->_xp = src._xp;
    return (*this);
};

std::string const & AMateria::getType() const {
    return (this->_type);
};

unsigned int AMateria::getXP() const {
    return (this->_xp);
};

void AMateria::use(ICharacter & target) {
    this->_xp += 10;
};