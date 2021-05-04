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

void main_destr(void)
{
    Dog *child = new Dog("Alex");
    Victim *parent = child;
    delete parent; // если бы деструкторы были не виртуальными,
                   // то в данном случае вызвался бы деструктор только родителя
                   // а ребенок остался бы неуничтоженным
}

int main()
{
    // main_subj();
    // main_my();
    main_destr();
    return 0;
}