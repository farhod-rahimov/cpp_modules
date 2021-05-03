#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
    FragTrap f("Kugo"); std::cout << std::endl;
    ScavTrap s("Soli"); std::cout << std::endl;
    NinjaTrap n("Alex"); std::cout << std::endl;
    std::string const target = "Enemy";

    f.meleeAttack(target);
    s.meleeAttack(target);
    n.meleeAttack(target); std::cout << std::endl;
    
    n.ninjaShoebox(f);
    n.ninjaShoebox(s);
    n.ninjaShoebox(n); std::cout << std::endl;
}