#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <stdlib.h>
#include <time.h>

std::string ft_get_random_name(void)
{
    std::string names[10] = {"Abro", "Optus", "Kletu", "Huko", "Mera", \
                            "Hoya", "Kiko", "Lays", "Ugo", "Kora"};
    int r;
    srand(time(NULL));
    r = rand() % 10;
    return (names[r % 10]);
}

std::string ft_get_random_type(void)
{
    std::string types[10] = {"big", "small", "medium", "fat", "super", \
                            "great", "undefeated", "invisible", "noob", "profi"};
    int r;
    srand(time(NULL));
    r = rand() % 10;
    return (types[r]);
}

void    randomChump(void)
{
    Zombie  new_zombie;

    new_zombie.setType(ft_get_random_type());
    new_zombie.setName(ft_get_random_name());
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

    std::cout << "----------------------------------" << std::endl;
    randomChump();
    std::cout << "----------------------------------" << std::endl;
    // while (1)
    //     ;
    return (0);
}