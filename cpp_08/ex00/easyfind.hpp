#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
template<typename T>
bool easyfind(T container, int k)
{
    for (size_t i = 0; i < container.size(); i++)
    {
        if (container[i] == k)
            return (true);
    }
    return (false);
}

#endif