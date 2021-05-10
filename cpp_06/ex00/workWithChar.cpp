#include "Functions.hpp"

int workWithChar(char **argv, Functions & funcs)
{
    char c;
    
    c = argv[1][0];
    if (!funcs.isPrintable(c))
        std::cout << "char: not displayable" << std::endl;
    else
        std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;        
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
    return (0);
}