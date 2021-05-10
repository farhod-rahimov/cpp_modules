#ifndef HEADER_HPP
# define HEADER_HPP

#include <iostream>
#include <time.h>

struct Data;

char const * getRandomString(int increaseRandom);
void * serialize(void);
Data * deserialize(void * raw);

struct Data
{
    int         i;
    const char  *s1;
    const char  *s2;
};

#endif