#include "Classes.hpp"

void identify_from_pointer(Base * p)
{
    if (dynamic_cast<A *>(p) != NULL)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p) != NULL)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p) != NULL)
        std::cout << "C" << std::endl;
    else
        std::cerr << "Cannot cast" << std::endl;
}