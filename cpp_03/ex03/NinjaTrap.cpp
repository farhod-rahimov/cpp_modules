#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() {
    std::cout << "NinjaTrap: Heellllooo...! <constructor(default)>" << std::endl;
};

NinjaTrap::NinjaTrap(char const *name) {
    std::cout << "NinjaTrap: Heellllooo...! <constructor>" << std::endl;
    this->_hit_points = 60;
    this->_max_hit_points = 60;
    this->_energy_points = 120;
    this->_max_energy_points = 120;
    this->_level = 1;
    this->_name = name;
    this->_melee_attack_dmg = 60;
    this->_ranged_attack_dmg = 5;
    this->_armor_dmg_reduction = 0;
    this->_initial_armor = 0;
};

NinjaTrap::~NinjaTrap() {
    std::cout << "NinjaTrap: Robot OFF! <destructor>" << std::endl;
};

NinjaTrap::NinjaTrap(NinjaTrap const &src) {
    std::cout << "NinjaTrap: <copy constructor> " << std::endl; 
    *this = src;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &src) {
    std::cout << "NinjaTrap: <assignation operator called>" << std::endl; 
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

void NinjaTrap::rangedAttack(std::string const & target) {
    if (this->_hit_points <= 0)
    {
        std::cout << "NinjaTrap: Cannot do RANGED ATTACK attack because NinjaTrap IS DEAD! <rangedAttack>"<< std::endl;
        return ;
    }
    std::cout << "NinjaTrap: Babakh...! NinjaTrap <" << this->_name << "> attacks <" \
    << target << "> at RANGE, causing <" << this->_ranged_attack_dmg << "> points of damage! <rangedAttack>" << std::endl;
};

void NinjaTrap::meleeAttack(std::string const & target) {
    if (this->_hit_points <= 0)
    {
        std::cout << "NinjaTrap: Cannot do MELEE attack because NinjaTrap IS DEAD! <melleAttack>"<< std::endl;
        return ;
    }
    std::cout << "NinjaTrap: Baauumm...! NinjaTrap <" << this->_name << "> attacks <" \
    << target << "> at MELEE, causing <" << this->_melee_attack_dmg << "> points of damage! <meleeAttack>" << std::endl;
};

void NinjaTrap::ninjaShoebox(ScavTrap const &clap) {
    std::cout << "NinjaTrap: Param-pam-pam-pam-paaaaammmmmm... <ninjaShoebox(scavTrap)>" << std::endl;
};

void NinjaTrap::ninjaShoebox(FragTrap const &clap) {
    std::cout << "NinjaTrap: Aaaaarrrr... <ninjaShoebox(fragTrap)>" << std::endl;
};

void NinjaTrap::ninjaShoebox(NinjaTrap const &clap) {
    std::cout << "NinjaTrap: OOOOooole-ole-ole-oleeeeee... <ninjaShoebox(ninjaTrap)>" << std::endl;
};

void NinjaTrap::ninjaShoebox(ClapTrap const &clap) {
    std::cout << "NinjaTrap: Huhu... <ninjaShoebox(ClapTrap)>" << std::endl;
};