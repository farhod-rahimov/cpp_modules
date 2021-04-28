#include "ZombieHorde.hpp"

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

ZombieHorde::ZombieHorde(int N) {
    ZombieHorde::_n = N;
    ZombieHorde::_zombies = new Zombie[N];
    int i;

    i = 0;
    while (i < N)
    {
        ZombieHorde::_zombies[i].setType(ft_get_random_type(i));
        ZombieHorde::_zombies[i].setName(ft_get_random_name(i));
        i++;
    }
    std::cout << "----------------------------------" << std::endl;
    std::cout << ZombieHorde::_n << " Zombies BORN" << std::endl;
};

ZombieHorde::~ZombieHorde() {
    delete [] ZombieHorde::_zombies;
    std::cout << ZombieHorde::_n << " Zombies DYIED" << std::endl;
    std::cout << "----------------------------------" << std::endl;
};

void ZombieHorde::announce() {
    int i;

    std::cout << "----------------------------------" << std::endl;
    std::cout << "*******-ANNOUNCING ZOMBIES-*******" << std::endl;
    i = 0;
    while (i < ZombieHorde::_n)
        ZombieHorde::_zombies[i++].announce();
    std::cout << "----------------------------------" << std::endl;
};