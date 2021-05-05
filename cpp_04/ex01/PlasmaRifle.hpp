#ifndef PLASMA_RIFLE_HPP
#define PLASMA_RIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
public:
    PlasmaRifle();
    virtual ~PlasmaRifle();
    PlasmaRifle(PlasmaRifle const &src);
    
    PlasmaRifle &operator=(PlasmaRifle const &src);

    virtual void attack() const;
};

#endif