#ifndef HEADER_HPP
# define HEADER_HPP

#include <iostream>
#include <time.h>

struct Data;

std::string getRandomString(int increaseRandom);
void * serialize(void);
Data * deserialize(void * raw);

struct Data
{
    int         i;
    std::string s1;
    std::string s2;
};

#endif