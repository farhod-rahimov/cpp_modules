#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
};

ScavTrap::ScavTrap(char const *name) {
    std::cout << "ScavTrap: Hi there! <constructor>" << std::endl;
    this->_hit_points = 100;
    this->_max_hit_points = 100;
    this->_energy_points = 50;
    this->_max_energy_points = 50;
    this->_level = 1;
    this->_name = name;
    this->_melee_attack_dmg = 20;
    this->_ranged_attack_dmg = 15;
    this->_armor_dmg_reduction = ARMOR_SCAV;
};

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap: Bye Bye! <destructor>" << std::endl;
};

ScavTrap::ScavTrap(ScavTrap const &src) {
    std::cout << "ScavTrap: <copy constructor> " << std::endl; 
    *this = src;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src) {
    std::cout << "ScavTrap: <assignation operator called>" << std::endl; 
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
    }
    return (*this);
};

void ScavTrap::rangedAttack(std::string const & target) {
    if (this->_hit_points <= 0)
    {
        std::cout << "ScavTrap: Cannot do RANGED ATTACK attack because ScavTrap IS DEAD! <rangedAttack>"<< std::endl;
        return ;
    }
    std::cout << "ScavTrap: Babakh...! ScavTrap <" << this->_name << "> attacks <" \
    << target << "> at RANGE, causing <" << this->_ranged_attack_dmg << "> points of damage! <rangedAttack>" << std::endl;
};

void ScavTrap::meleeAttack(std::string const & target) {
    if (this->_hit_points <= 0)
    {
        std::cout << "ScavTrap: Cannot do MELEE attack because ScavTrap IS DEAD! <melleAttack>"<< std::endl;
        return ;
    }
    std::cout << "ScavTrap: Baauumm...! ScavTrap <" << this->_name << "> attacks <" \
    << target << "> at MELEE, causing <" << this->_melee_attack_dmg << "> points of damage! <meleeAttack>" << std::endl;
};

void  ScavTrap::takeDamage(unsigned int amount) {
    int flag = 0;
    if (this->_hit_points <=0)
    {
        std::cout << "ScavTrap: ScavTrap IS DEAD! <takeDamage>"<< std::endl;
        return ;
    }
    std::cout << "ScavTrap: Aaaaa...!!! " << "<ScavTrap takes " << amount << " damage!>";
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
    if (this->_hit_points >= amount - ARMOR_SCAV && flag)
        this->_hit_points -= amount - ARMOR_SCAV;
    else if (this->_hit_points < amount - ARMOR_SCAV && flag)
        this->_hit_points = 0;
    else if (this->_hit_points >= amount && !flag)
        this->_hit_points -= amount;
    else if (this->_hit_points < amount && !flag)
        this->_hit_points = 0;
    if (this->_hit_points <= 0)
        std::cout << "ScavTrap: ScavTrap DYIED! <takeDamage>"<< std::endl;
};

void  ScavTrap::beRepaired(unsigned int amount) {
    if (this->_hit_points == this->_max_energy_points)
    {
        std::cout << "ScavTrap: ScavTrap HAS ALREADY BEEN FULLY REPAIRED! <beRepaired>"<< std::endl;
        return ;
    }
    if (this->_hit_points + amount >= this->_max_energy_points)
        this->_hit_points = this->_max_energy_points;
    else
        this->_hit_points += amount;
    std::cout << "ScavTrap: Yeahhh boy...!!! <ScavTrap HAS BEEN REPAIRED to " << amount << " HPs!>";
    std::cout << " | HP = " << this->_hit_points << ". Armor = " << this->_armor_dmg_reduction << " <beRepaired>"<< std::endl;

};

void ScavTrap::challengeNewcomer(std::string const & target) {
    char const      argv[5][26] = {"Can you beat me?", "Come on boy!", "Can you hit it?", \
                                    "Say goodbye to yourself!", "Men, you are very weak..."};
    unsigned int    r;
    static int      i;
    srand(time(NULL));

    if (this->_hit_points <= 0)
    {
        std::cout << "ScavTrap: Cannot CHALLENGE newcomer because ScavTrap IS DEAD! <challengeNewcomer>"<< std::endl;
        return ;
    }
    else if (this->_energy_points < 25)
    {
        std::cout << "ScavTrap: Cannot CHALLENGE newcomer. Don't have enough ENERGY POINTS <challengeNewcomer>" << std::endl;
        return ;
    }
    r = (rand() + i++) % 5;
    this->_energy_points -= 25;
    std::cout << "ScavTrap: ScavTrap <" << this->_name << "> challenges <" << target << ">. " << argv[r] \
    << " | Energy Points = " << this->_energy_points << " <challengeNewcomer>" << std::endl;
};
