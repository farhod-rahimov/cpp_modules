#include "iter.hpp"

std::string getRandomString(int q)
{
    std::string     ret;
    unsigned int    random;

    char const *array = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
    for (int i = 0; i <= 10; i++)
    {
        random = (rand() + q) % 52; // 52 the total number of chars in 'array'
        ret += array[random];
    }
    return (ret);
}

int main()
{
    int i;
    int array[5];
    std::string strs[5];

    srand(time(NULL));
    
    for (i = 0; i < 5; i++)
        array[i] = rand();
    for (i = 0; i < 5; i++)
        strs[i] = getRandomString(i);

    iter(array, 5, print);
    std::cout << std::endl;
    iter(strs, 5, print);
}
