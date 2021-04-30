#include "Human.hpp"

int main()
{
    Human bob;

    std::cout << bob.identify() << std::endl;
    std::cout << bob.getBrain().identify() << std::endl;
    std::cout << "Bob's brain weight is " << bob.getBrain().getWeight() << "kg" << std::endl;
}