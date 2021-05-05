#ifndef MACHINE_GUN_HPP
#define MACHINE_GUN_HPP

#include "AWeapon.hpp"

class MachineGun : public AWeapon {
public:
    MachineGun();
    virtual ~MachineGun();
    MachineGun(MachineGun const &src);
    
    MachineGun &operator=(MachineGun const &src);

    virtual void attack() const;
};

#endif