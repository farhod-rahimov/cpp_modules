#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon {
protected:
    std::string _name;
    int         _damage;
    int         _apcost;
    AWeapon();

public:
    AWeapon(std::string const & name, int apcost, int damage);
    virtual ~AWeapon();
    AWeapon(AWeapon const &src);
    
    AWeapon &operator=(AWeapon const &src);

    std::string  getName() const;
    int          getAPCost() const;
    int          getDamage() const;
    virtual void attack() const = 0;
};

#endif