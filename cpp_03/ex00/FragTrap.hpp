#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#define ARMOR 5

#include <iostream>

class FragTrap {
private:
    unsigned int _hit_points; // > 0 and <= _max_hit_points
    unsigned int _max_hit_points;
    
    unsigned int _energy_points; // > 0 and <= _max_energy_points
    unsigned int _max_energy_points;

    unsigned int _level;
    char const  *_name;
    
    unsigned int _melee_attack_dmg;
    unsigned int _ranged_attack_dmg;

    unsigned int _armor_dmg_reduction;

    FragTrap();

public:
    FragTrap(char const *name);
    ~FragTrap();
    FragTrap(FragTrap const &src);

    FragTrap &operator=(FragTrap const &src);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount); // take armor damage reduction into account.
    void beRepaired(unsigned int amount);
    
    void vaulthunter_dot_exe(std::string const & target); // it takes 25 energy points.
                                                          //if energy poits are less than 25 print relevant message
};

#endif

// "Hey everybody!" constructor
// "This time it'll be awesome, I promise!" vaulthunter_dot_exe
// "Robot down!" destructor