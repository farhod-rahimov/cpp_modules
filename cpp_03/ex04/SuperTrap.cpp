#include "SuperTrap.hpp"

SuperTrap::SuperTrap() {
    std::cout << "SuperTrap: Hello, I am SuperTrap! <constructor(DEFAULT)>" << std::endl;
};

SuperTrap::SuperTrap(char const *name) : FragTrap(), NinjaTrap(), \
                                         ClapTrap(100, 100, 120, 120, 1, name, 60, 20, 5, 5) {
    std::cout << "SuperTrap: Hello, I am SuperTrap! <constructor>" << std::endl;
};

SuperTrap::~SuperTrap() {
    std::cout << "SuperTrap: SuperTrap destroyed! <destructor>" << std::endl;
};

SuperTrap::SuperTrap(SuperTrap const &src) {
    std::cout << "SuperTrap: <copy constructor> " << std::endl; 
    *this = src;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &src) {
    std::cout << "SuperTrap: <assignation operator called>" << std::endl; 
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

void SuperTrap::rangedAttack(std::string const & target) {
    return (this->FragTrap::rangedAttack(target));
};

void SuperTrap::meleeAttack(std::string const & target) {
    return (this->NinjaTrap::meleeAttack(target));
};