#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "FragTrap: Hey everybody! <constructor(DEFAULT)>" << std::endl;
};

FragTrap::FragTrap(char const *name) {
    std::cout << "FragTrap: Hey everybody! <constructor>" << std::endl;
    this->_hit_points = 100;
    this->_max_hit_points = 100;
    this->_energy_points = 100;
    this->_max_energy_points = 100;
    this->_level = 1;
    this->_name = name;
    this->_melee_attack_dmg = 30;
    this->_ranged_attack_dmg = 20;
    this->_armor_dmg_reduction = 5;
    this->_initial_armor = 5;
    
};

FragTrap::~FragTrap() {
    std::cout << "FragTrap: Robot down! <destructor>" << std::endl;
};

FragTrap::FragTrap(FragTrap const &src) {
    std::cout << "FragTrap: <copy constructor> " << std::endl; 
    *this = src;
}

FragTrap &FragTrap::operator=(FragTrap const &src) {
    std::cout << "FragTrap: <assignation operator called>" << std::endl; 
    if (this != &src)
    {
        this->_hit_points = src._hit_points;
        this->_max_hit_points = src._max_hit_points;
        this->_energy_points = src._energy_points;
        this->_max_energy_points = src._max_energy_points;
        this->_level = src._level;
        this->_name = src._name;
        this->_melee_attack_dmg = src._melee_attack_dmg;
        this->_ranged_attack_dmg = src._ranged_attack_dmg;
        this->_armor_dmg_reduction = src._armor_dmg_reduction;
        this->_initial_armor = src._initial_armor;
    }
    return (*this);
};

void FragTrap::rangedAttack(std::string const & target) {
    if (this->_hit_points <= 0)
    {
        std::cout << "FragTrap: Cannot do RANGED attack because FR4G-TP IS DEAD! <rangedAttack>"<< std::endl;
        return ;
    }
    std::cout << "FragTrap: Bdish! FR4G-TP <" << this->_name << "> attacks <" \
    << target << "> at RANGE, causing <" << this->_ranged_attack_dmg << "> points of damage! <rangedAttack>" << std::endl;
};

void FragTrap::meleeAttack(std::string const & target) {
    if (this->_hit_points <= 0)
    {
        std::cout << "FragTrap: Cannot do MELEE attack because FR4G-TP IS DEAD! <melleAttack>"<< std::endl;
        return ;
    }
    std::cout << "FragTrap: Hayaaa! FR4G-TP <" << this->_name << "> attacks <" \
    << target << "> at MELEE, causing <" << this->_melee_attack_dmg << "> points of damage! <meleeAttack>" << std::endl;
};

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
    char const      argv[5][10] = {"CHOPPER", "SMUDGE", "SMASH", "!@#$%^", "LASER"};
    unsigned int    r;
    static int      i;
    srand(time(NULL));

    if (this->_hit_points <= 0)
    {
        std::cout << "FragTrap: Cannot do SUPER ATTACK because FR4G-TP IS DEAD! <vaulthunter_dot_exe>"<< std::endl;
        return ;
    }
    else if (this->_energy_points < 25)
    {
        std::cout << "FragTrap: Cannot do SUPER ATTACK. Don't have enough ENERGY POINTS <vaulthunter_dot_exe>" << std::endl;
        return ;
    }
    r = (rand() + i++) % 5;
    this->_energy_points -= 25;
    std::cout << "FragTrap: Babam...! FR4G-TP <" << this->_name << "> makes his " << argv[r] << " attack to " \
    << target << ", causing <" << 50 << "> points of damage!" << " | Energy Points = " << this->_energy_points << " <vaulthunter_dot_exe>" << std::endl;
};