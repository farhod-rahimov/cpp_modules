#include "Header.hpp"

char const * getRandomString(int increaseRandom)
{
    static char     ret[11];
    unsigned int    random;

    // ret.resize(0);
    char const *array = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
    for (int i = 0; i <= 10; i++)
    {
        random = (rand() + increaseRandom) % 52; // 52 the total number of alphabets
        ret[i] = array[random];
    }
    ret[10] = '\0';
    return (ret);
}

void * serialize(void)
{
    Data *result = new Data;

    srand(time(NULL));

    result->i = rand();
    std::cout << "i  " << result->i << std::endl;
    result->s1 = getRandomString(1);
    std::cout << "s1 " << result->s1 << std::endl;
    result->s2 = getRandomString(6);
    std::cout << "s2 " << result->s2 << std::endl;

    return (reinterpret_cast<void *>(result));
}

Data * deserialize(void * raw)
{
    Data *data;

    data = reinterpret_cast<Data *>(raw);
    // std::cout << "s112 " << data->s1 << std::endl;
    // std::cout << "s212 " << data->s2 << std::endl;
    return (data);
}

int main()
{
    Data *data;
    void *raw;

    raw = serialize();
    data = deserialize(raw);

    std::cout << "random string 1: " << data->s1 << std::endl;
    std::cout << "random int:      " << data->i << std::endl;
    std::cout << "random string 2: " << data->s2 << std::endl;
}