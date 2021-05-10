#include "Functions.hpp"

int workWithDigit(char **argv, Functions & funcs)
{
    int i; char c; float f; double d;

    try {
        i = std::stoi(argv[1], 0, 10);
        c = static_cast<char>(i);
        f = std::stof(argv[1], 0);
        d = std::stod(argv[1], 0);
    }
    catch (std::out_of_range & e) {
        std::cout << e.what() << std::endl; return (1);
    }
    if (!funcs.isPrintable(c))
        std::cout << "char: not displayable" << std::endl;
    else
        std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << i << std::endl;
    if (funcs.getIsDot(argv[1]))
    {
        if (i == f)
        {
            std::cout << "float: " << f << ".0f" << std::endl;
            std::cout << "double: " << d << ".0" << std::endl;
        }
        else
        {
            std::cout << "float: " << f << "f" << std::endl;
            std::cout << "double: " << d << std::endl;
        }
    }
    else
    {
        std::cout << "float: " << f << ".0f" << std::endl;
        std::cout << "double: " << d << ".0" << std::endl;
    }
    return (0);
}