#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
private:
    std::string _name;
    AWeapon     *w;
    int         _ap;

    Character();

public:
    Character(std::string const & name);
    ~Character();
    Character(Character const &src);

    Character &operator=(Character const &src);

    void recoverAP();
    void equip(AWeapon*);
    void attack(Enemy*);
    
    std::string getName() const;
    std::string getWeaponName() const;
    int         getAP() const;
};

std::ostream &operator<<(std::ostream &o, Character const &src);

#endif