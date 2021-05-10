#include "Header.hpp"

char const * getRandomString(int increaseRandom)
{
    char            *ret = new char(11);
    unsigned int    random;

    char const *array = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
    for (int i = 0; i <= 10; i++)
    {
        random = (rand() + increaseRandom) % 52; // 52 the total number of alphabets
        ret[i] = array[random];
    }
    ret[10] = '\0';
    return (ret);
}
