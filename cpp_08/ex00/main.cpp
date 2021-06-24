#include "easyfind.hpp"
#include <vector>

int main ()
{
    std::vector<int> v;

    for (int i = 0; i < 10; i++)
        v.push_back(i);
    
    std::cout << "Given array: " ;
    for (int i = 0; i < 10; i++)
        std::cout << v[i] << " ";
    std::cout << std::endl << std::endl;

    std::cout << "TEST 1, searching 3" << std::endl;
    if (easyfind(v, 3))
        std::cout << "The number 3 found" << std::endl;
    else
        std::cerr << "The number 3 does NOT exist in given vector" << std::endl;

    std::cout << std::endl << "TEST 2, searching 11" << std::endl;
    if (easyfind(v, 11))
        std::cout << "The number 11 found" << std::endl;
    else
       std::cerr << "The number 11 does NOT exist in given array" << std::endl;
}