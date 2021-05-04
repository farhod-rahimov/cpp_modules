#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Dog.hpp"

void main_subj(void)
{
    Sorcerer robert("Robert", "the Magnificent");
    
    Victim jim("Jimmy");
    Peon joe("Joe");
    
    std::cout << robert << jim << joe;
    
    robert.polymorph(jim);
    robert.polymorph(joe);
}

void main_my(void)
{
    Sorcerer mark("Mark", "the Dreadful");
    
    Victim jack("Jack");
    Peon alice("Alice");
    Dog tarzan("Tarzan");
    
    std::cout << "VICTIMS ARE CREATED" << std::endl << std::endl;

    std::cout << mark << jack << alice << tarzan;
    std::cout << "ALL OBJECTS INTRODUCED THEMSEVES" << std::endl << std::endl;
    
    mark.polymorph(jack);
    mark.polymorph(alice);
    mark.polymorph(tarzan);
    std::cout << "MARK POLYMORPHED ALL VICTIMS" << std::endl << std::endl;
}

int main()
{
    main_subj();
    // main_my();
    return 0;
}