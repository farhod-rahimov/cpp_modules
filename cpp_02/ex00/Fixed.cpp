#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl; 
    Fixed::_fpvalue = 0;

    return ;
};

Fixed::~Fixed() {
    std::cout << "Default destructor called" << std::endl; 
};

Fixed::Fixed(Fixed const &src) {
    std::cout << "Copy constructor called" << std::endl; 
    *this = src;

    return ;
};

Fixed &Fixed::operator=(Fixed const &src) {
    std::cout << "Assignation operator called" << std::endl; 

    if (this != &src)
        this->_fpvalue = src.getRawBits();

    return (*this);
};

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl; 

    return (Fixed::_fpvalue);
};

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl; 
    Fixed::_fpvalue = raw;

    return ;
};