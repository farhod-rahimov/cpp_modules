#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int                 _fpvalue;
    static int const    _fbits = 8;

public:
    Fixed();
    ~Fixed();
    Fixed(Fixed const &src);

    Fixed &operator=(Fixed const &src);

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif