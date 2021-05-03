#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#define ARMOR_SCAV 3

#include <iostream>

class ScavTrap {
private:
    unsigned int _hit_points;
    unsigned int _max_hit_points;
    unsigned int _energy_points;
    unsigned int _max_energy_points;
    unsigned int _level;
    char const  *_name;
    unsigned int _melee_attack_dmg;
    unsigned int _ranged_attack_dmg;
    unsigned int _armor_dmg_reduction;
    ScavTrap();

public:
    ScavTrap(char const *name);
    ~ScavTrap();
    ScavTrap(ScavTrap const &src);

    ScavTrap &operator=(ScavTrap const &src);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void challengeNewcomer(std::string const & target);    
};

#endif