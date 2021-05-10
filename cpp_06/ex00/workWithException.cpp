#include "Functions.hpp"

int workWithException(char **argv, Functions funcs)
{
    std::string tmp;
    
    tmp = funcs.findException(argv[1]);
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if (tmp[tmp.length() - 1] == 'f' && tmp[tmp.length() - 2] == 'f')
    {
        std::cout << "float: " << tmp << std::endl;
        tmp.resize(tmp.length() - 1);
        std::cout << "double: " << tmp << std::endl;
    }
    else
    {
        std::cout << "float: " << tmp << "f" << std::endl;
        std::cout << "double: " << tmp << std::endl;
    }
    return (0);
}