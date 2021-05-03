#ifndef CLAP_TRAP
# define CLAP_TRAP

#include <iostream>

class ClapTrap {
protected:
    unsigned int _hit_points;
    unsigned int _max_hit_points;
    unsigned int _energy_points;
    unsigned int _max_energy_points;
    unsigned int _level;
    char const  *_name;
    unsigned int _melee_attack_dmg;
    unsigned int _ranged_attack_dmg;
    unsigned int _armor_dmg_reduction;
    unsigned int _initial_armor;

public:
    ClapTrap();
    ClapTrap(unsigned int hit_points, \
            unsigned int max_hit_points, \
            unsigned int energy_points, \
            unsigned int max_energy_points, \
            unsigned int level, \
            char const * name, \
            unsigned int melee_attack_dmg, \
            unsigned int ranged_attack_dmg, \
            unsigned int armor_dmg_reduction, \
            unsigned int initial_armor);
    ~ClapTrap();
    ClapTrap(ClapTrap const &src);

    ClapTrap &operator=(ClapTrap const &src);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount); // take armor damage reduction into account.
    void beRepaired(unsigned int amount);
};
#endif