#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <time.h>

template <typename T>
void iter(T * array, size_t length, void func(T &))
{
    for (size_t i = 0; i < length; i++)
    {
        func(array[i]);
    }
}

template <typename T>
void print(T &element)
{
    std::cout << element << std::endl;
}

#endif