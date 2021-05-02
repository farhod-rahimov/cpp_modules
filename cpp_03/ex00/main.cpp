#include "FragTrap.hpp"

void main_1(FragTrap & f, std::string const target)
{
    f.rangedAttack(target);
    std::cout << std::endl;
    f.meleeAttack(target);
    std::cout << std::endl;

    f.takeDamage(30);
    f.takeDamage(30);
    f.takeDamage(30);
    f.takeDamage(30);
    std::cout << std::endl;
    
    f.vaulthunter_dot_exe(target);
    std::cout << std::endl;
}

void main_2(FragTrap & f, std::string const target)
{
    f.rangedAttack(target);
    std::cout << std::endl;
    f.meleeAttack(target);
    std::cout << std::endl;

    f.takeDamage(30);
    std::cout << std::endl;
    
    f.vaulthunter_dot_exe(target);
    f.vaulthunter_dot_exe(target);
    f.vaulthunter_dot_exe(target);
    f.vaulthunter_dot_exe(target);
    f.vaulthunter_dot_exe(target);
    std::cout << std::endl;
}

void main_3(FragTrap & f, std::string const target)
{
    f.takeDamage(30);
    f.takeDamage(30);
    f.takeDamage(30);
    f.takeDamage(30);
    std::cout << std::endl;
    
    f.vaulthunter_dot_exe(target);
    std::cout << std::endl;

    f.beRepaired(100);
    f.beRepaired(120);
    std::cout << std::endl;

    f.vaulthunter_dot_exe(target);
    std::cout << std::endl;
}

int main()
{
    FragTrap f("Kugo");
    std::string const target = "Enemy";

    main_1(f, target);
    // main_2(f, target);
    // main_3(f, target);
}