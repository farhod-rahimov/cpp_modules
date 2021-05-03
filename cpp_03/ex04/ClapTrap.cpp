#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "ClapTrap: A new CLAP TRAP created. <constructor(DEFAULT)>" << std::endl;
};

ClapTrap::ClapTrap(unsigned int hit_points, unsigned int max_hit_points, unsigned int energy_points, \
                    unsigned int max_energy_points, unsigned int level, char const * name, unsigned int melee_attack_dmg,
                    unsigned int ranged_attack_dmg, unsigned int armor_dmg_reduction, unsigned int initial_armor) {
    this->_hit_points = hit_points;
    this->_max_hit_points = max_hit_points;
    this->_energy_points = energy_points;
    this->_max_energy_points = max_energy_points;
    this->_level = level;
    this->_name = name;
    this->_melee_attack_dmg = melee_attack_dmg;
    this->_ranged_attack_dmg = ranged_attack_dmg;
    this->_armor_dmg_reduction = armor_dmg_reduction;
    this->_initial_armor = initial_armor;
    std::cout << "ClapTrap: A new CLAP TRAP created. <constructor>" << std::endl;
};

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap: <destructor>" << std::endl;
};

ClapTrap::ClapTrap(ClapTrap const &src) {
    std::cout << "ClapTrap: <copy constructor> " << std::endl; 
    *this = src;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src) {
    std::cout << "ClapTrap: <assignation operator called>" << std::endl; 
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

void  ClapTrap::takeDamage(unsigned int amount) {
    int flag = 0;
    if (this->_hit_points <=0)
    {
        std::cout << "ClapTrap: ClapTrap IS DEAD! <takeDamage>"<< std::endl;
        return ;
    }
    std::cout << "ClapTrap: Aaaaa...!!! " << "<ClapTrap takes " << amount << " damage!>";
    std::cout << " | HP = " << this->_hit_points << ". Armor = " << this->_armor_dmg_reduction << " <takeDamage>" << std::endl;
    if (this->_armor_dmg_reduction > 0)
    {
        if (this->_armor_dmg_reduction >= amount)
        {
            this->_armor_dmg_reduction -= amount;
            return ;
        }
        this->_armor_dmg_reduction = 0;
        flag = 1;
    }
    if (this->_hit_points >= amount - this->_initial_armor && flag)
        this->_hit_points -= amount - this->_initial_armor;
    else if (this->_hit_points < amount - this->_initial_armor && flag)
        this->_hit_points = 0;
    else if (this->_hit_points >= amount && !flag)
        this->_hit_points -= amount;
    else if (this->_hit_points < amount && !flag)
        this->_hit_points = 0;
    if (this->_hit_points <= 0)
        std::cout << "ClapTrap: ClapTrap DYIED! <takeDamage>"<< std::endl;
};

void  ClapTrap::beRepaired(unsigned int amount) {
    if (this->_hit_points == this->_max_energy_points)
    {
        std::cout << "ClapTrap: ClapTrap HAS ALREADY BEEN FULLY REPAIRED! <beRepaired>"<< std::endl;
        return ;
    }
    if (this->_hit_points + amount >= this->_max_energy_points)
        this->_hit_points = this->_max_energy_points;
    else
        this->_hit_points += amount;
    std::cout << "ClapTrap: Yeahhh boy...!!! <ClapTrap HAS BEEN REPAIRED to " << amount << " HPs!>";
    std::cout << " | HP = " << this->_hit_points << ". Armor = " << this->_armor_dmg_reduction << " <beRepaired>"<< std::endl;
};