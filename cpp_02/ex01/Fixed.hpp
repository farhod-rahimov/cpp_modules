#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int                 _fpvalue;
    static int const    _fbits = 8;

public:
    Fixed();
    Fixed(int const int_num);
    Fixed(float const float_num);
    ~Fixed();
    Fixed(Fixed const &src);

    Fixed &operator=(Fixed const &src);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &src);

#endif