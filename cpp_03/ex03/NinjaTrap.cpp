#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() {
};

NinjaTrap::NinjaTrap(char const *name) {
    std::cout << "Heellllooo...! <constructor>" << std::endl;
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
    std::cout << "Robot OFF! <destructor>" << std::endl;
};

NinjaTrap::NinjaTrap(NinjaTrap const &src) {
    std::cout << "NINJA TRAP <copy constructor> " << std::endl; 
    *this = src;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &src) {
    std::cout << "NINJA TRAP <assignation operator called>" << std::endl; 
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

void NinjaTrap::ninjaShoebox(ScavTrap const &clap) {
    std::cout << "Param-pam-pam-pam-paaaaammmmmm... <ninjaShoebox(scavTrap)>" << std::endl;
};

void NinjaTrap::ninjaShoebox(FragTrap const &clap) {
    std::cout << "Aaaaarrrr... <ninjaShoebox(fragTrap)>" << std::endl;
};

void NinjaTrap::ninjaShoebox(NinjaTrap const &clap) {
    std::cout << "OOOOooole-ole-ole-oleeeeee... <ninjaShoebox(ninjaTrap)>" << std::endl;
};

void NinjaTrap::ninjaShoebox(ClapTrap const &clap) {
    std::cout << "Huhu... <ninjaShoebox(ClapTrap)>" << std::endl;
};