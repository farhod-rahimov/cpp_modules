#ifndef POWER_FIST_HPP
#define POWER_FIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {
public:
    PowerFist();
    virtual ~PowerFist();
    PowerFist(PowerFist const &src);
    
    PowerFist &operator=(PowerFist const &src);

    virtual void attack() const;
};

#endif