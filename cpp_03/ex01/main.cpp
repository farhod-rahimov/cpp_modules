#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void main_1_frag(FragTrap & f, std::string const target)
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

void main_2_frag(FragTrap & f, std::string const target)
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

void main_3_frag(FragTrap & f, std::string const target)
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

void main_1_scav(ScavTrap & s, std::string const target)
{
    s.takeDamage(30);
    s.takeDamage(30);
    s.takeDamage(30);
    s.takeDamage(30);
    std::cout << std::endl;
    
    s.challengeNewcomer(target);
    std::cout << std::endl;

    s.beRepaired(100);
    s.beRepaired(120);
    std::cout << std::endl;

    s.challengeNewcomer(target);
    s.challengeNewcomer(target);
    s.challengeNewcomer(target);
    std::cout << std::endl;
}

int main()
{
    FragTrap f("Kugo");
    ScavTrap s("Soli");
    std::string const target = "Enemy";

    std::cout << "\n------------------FRAG_TRAP----------------" << std::endl;
    main_1_frag(f, target);
    // main_2_frag(f, target);
    // main_3_frag(f, target);

    std::cout << "\n------------------SCAV_TRAP----------------" << std::endl;
    // main_1_scav(s, target);
}