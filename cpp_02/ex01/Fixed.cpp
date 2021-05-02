#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl; 
    Fixed::_fpvalue = 0;

    return ;
};

Fixed::Fixed(int const int_num) {
    std::cout << "Int constructor called" << std::endl; 
    Fixed::_fpvalue = int_num * 256;

    return ;
};

Fixed::Fixed(float const float_num) {
    std::cout << "Float constructor called" << std::endl; 
    Fixed::_fpvalue = roundf((float_num) * 256);

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

float Fixed::toFloat(void) const{
    return ((float)Fixed::_fpvalue / 256);
};

int Fixed::toInt(void) const{
    return ((int)(Fixed::_fpvalue / 256));
};

std::ostream &operator<<(std::ostream &o, Fixed const &src) {
    o << src.toFloat();
    
    return (o);
};