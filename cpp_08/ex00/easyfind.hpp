#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template<typename T>
bool easyfind(T array, int k)
{
    if (std::find(array.begin(), array.end(), k) != array.end())
        return (true);
    return (false);
}

#endif