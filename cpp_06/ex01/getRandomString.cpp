#include "Header.hpp"

std::string getRandomString(int increaseRandom)
{
    std::string     ret;
    unsigned int    random;

    char const *array = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
    for (int i = 0; i <= 10; i++)
    {
        random = (rand() + increaseRandom) % 52; // 52 the total number of chars in 'array'
        ret += array[random];
    }
    return (ret);
}
