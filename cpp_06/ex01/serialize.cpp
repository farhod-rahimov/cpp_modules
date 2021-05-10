#include "Header.hpp"

void * serialize(void)
{
    Data *result = new Data;

    srand(time(NULL));

    result->i = rand();
    result->s1 = getRandomString(1);
    result->s2 = getRandomString(6);
    
    std::cout << "random string 1 BEFORE serialization: " << result->s1 << std::endl;
    std::cout << "random int BEFORE serialization:      " << result->i << std::endl;
    std::cout << "random string 2 BEFORE serialization: " << result->s2 << std::endl;
    std::cout << "------------------------------------" << std::endl;
    return (reinterpret_cast<void *>(result));
}