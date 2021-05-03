#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    FragTrap f("Kugo"); std::cout << std::endl;
    ScavTrap s("Soli"); std::cout << std::endl;
    std::string const target = "Enemy";

    f.meleeAttack(target);
    s.meleeAttack(target);
    std::cout << std::endl;
}