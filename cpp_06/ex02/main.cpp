#include "Classes.hpp"

void identify_from_pointer(Base * p);
void identify_from_reference(Base & p);

Base * generate(void) 
{
    int random;

    srand(time(NULL));
    random = rand();
    if (random % 3 == 0)
        return (new A);
    else if (random % 3 == 1)
        return (new B);
    return (new C);
};

int main()
{
    Base *check;

    check = generate();
    std::cout << "Identify from POINTER     ";
    identify_from_pointer(check);
    std::cout << "Identify from REFERENCE   ";
    identify_from_reference(*check);
}