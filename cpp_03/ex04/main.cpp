#include "SuperTrap.hpp"

void main_1(void)
{
    SuperTrap super("ALEX");
    std::string target = "Enemy";
    super.meleeAttack(target);    
}

void main_2(void)
{
    SuperTrap super("ALEX"); std::cout << "SUPER_TRAP SUPER CREATED\n\n";
    FragTrap f("Niko"); std::cout << "FRAG_TRAP F CREATED\n\n";
    std::string target = "Enemy";

    super.vaulthunter_dot_exe(target);
    super.ninjaShoebox(f);  std::cout << "\nCALLING DESTRUCTORS\n";
}

int main()
{
    main_1();
    // main_2();
}