#include "Classes.hpp"

void identify_from_reference(Base & p)
{
    if (dynamic_cast<A *>(&p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(&p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(&p))
        std::cout << "C" << std::endl;
    else
        std::cerr << "Cannot cast" << std::endl;
}