#include "Zombie.hpp"
#include "ZombieHorde.hpp"

void ft_test(int n)
{
    ZombieHorde z(n);
    z.announce();
}

int main(void)
{
    ZombieHorde z(2);

    z.announce();

    ft_test(8);
    
    // while (1)
    //     ;
    return (0);
}