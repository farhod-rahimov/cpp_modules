#include "Pony.hpp"
#include <iostream>

void ponyOnTheStack(void)
{
    Pony        new_pony;
    const char  *color = "white";

    new_pony.setColor(color);
    new_pony.setWeight(21);

    std::cout << "This is Pony_on_the_STACK" << std::endl;
    std::cout << "Color: " << new_pony.getColor() << std::endl;
    std::cout << "Weight: " << new_pony.getWeight() << "kg" << std::endl;
}

void ponyOnTheHeap(void)
{
    Pony *new_pony = new Pony;
    const char  *color = "black";

    new_pony->setColor(color);
    new_pony->setWeight(42);

    std::cout << "This is Pony_on_the_HEAP " << std::endl;
    std::cout << "Color: " << new_pony->getColor() << std::endl;
    std::cout << "Weight: " << new_pony->getWeight() << "kg" << std::endl;
    delete new_pony;
}

int main(void)
{
    std::cout << "-------------------------" << std::endl;
    ponyOnTheStack();
    std::cout << "-------------------------" << std::endl;
    ponyOnTheHeap();

    return (0);
}