#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <stdlib.h>
#include <time.h>

std::string ft_get_random_name(int i)
{
    std::string names[10] = {"Abro", "Optus", "Kletu", "Huko", "Mera", \
                            "Hoya", "Kiko", "Lays", "Ugo", "Kora"};
    int r;
    srand(time(NULL));
    r = (rand() + i) % 10;
    return (names[r]);
}

std::string ft_get_random_type(int i)
{
    std::string types[10] = {"big", "small", "medium", "fat", "super", \
                            "great", "undefeated", "invisible", "noob", "profi"};
    int r;
    srand(time(NULL));
    r = (rand() + i) % 10;
    return (types[r]);
}

void    randomChump(void)
{
    Zombie  new_zombie;
    static  int i;

    new_zombie.setType(ft_get_random_type(i));
    new_zombie.setName(ft_get_random_name(i++));
    std::cout << "new Zombie with type '" << new_zombie.getType() << "' and name '" << new_zombie.getName() << "' created" << std::endl;
    new_zombie.announce();
}

int main(void)
{
    ZombieEvent event;
    Zombie *zombie_on_heap;
    
    std::cout << "----------------------------------" << std::endl;
    event.setZombieType("mighty");
    zombie_on_heap = event.newZombie("Hero");
    zombie_on_heap->announce();
    delete zombie_on_heap;

    std::cout << std::endl << "-----------RANDOM_CHUMP-----------" << std::endl;
    randomChump();
    std::cout << std::endl << "-----------RANDOM_CHUMP-----------" << std::endl;
    randomChump();
    std::cout << std::endl << "-----------RANDOM_CHUMP-----------" << std::endl;
    randomChump();
    // while (1)
    //     ;
    return (0);
}