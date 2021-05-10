#include "Header.hpp"

void * serialize(void)
{
    Data *result = new Data;

    srand(time(NULL));

    result->i = rand();
    result->s1 = getRandomString(1);
    result->s2 = getRandomString(6);

    return (reinterpret_cast<void *>(result));
}