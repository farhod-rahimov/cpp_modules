#include "Squad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"

void main_subj(void)
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;

    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;
}

void check_getUnit(void)
{
    ISpaceMarine *bob = new TacticalMarine;

    ISquad *squad = new Squad;
    squad->push(bob);

    std::cout << "The number of ISpaceMarines " << squad->getCount() << std::endl;
    std::cout << "The adress of 1st ISpaceMarines " << squad->getUnit(1) << std::endl;
    std::cout << "The adress of 2st ISpaceMarines " << squad->getUnit(2) << std::endl;
    std::cout << "The adress of 3st ISpaceMarines " << squad->getUnit(3) << std::endl;

    delete squad;
}

void check_push(void)
{
    ISpaceMarine *bob = new TacticalMarine;
    ISpaceMarine *jane = new TacticalMarine;

    ISquad *squad = new Squad;
    squad->push(bob);
    squad->push(jane);
    squad->push(bob);
    squad->push(jane);
    squad->push(bob);
    squad->push(jane);
    squad->push(bob);
    squad->push(jane);

    squad->push(NULL);
    squad->push(NULL);
    squad->push(NULL);
    squad->push(NULL);
    squad->push(NULL);
    squad->push(NULL);
    squad->push(NULL);

    std::cout << "The number of ISpaceMarines " << squad->getCount() << std::endl;
    std::cout << "The adress of 1st ISpaceMarines " << squad->getUnit(1) << std::endl;
    std::cout << "The adress of 2st ISpaceMarines " << squad->getUnit(2) << std::endl;
    std::cout << "The adress of 3st ISpaceMarines " << squad->getUnit(3) << std::endl;
    std::cout << "The adress of 4st ISpaceMarines " << squad->getUnit(4) << std::endl;

    delete squad;
}

void check_clone(void)
{
    std::cout << std::endl;
    ISpaceMarine *bob = new TacticalMarine;
    ISpaceMarine *jane = new AssaultTerminator;

    ISpaceMarine *bob_clone = bob->clone();
    ISpaceMarine *jane_clone = jane->clone();

    std::cout << std::endl << "-------ORIGINALS-------" << std::endl;
    bob->battleCry(); bob->rangedAttack(); bob->meleeAttack();
    jane->battleCry(); jane->rangedAttack(); jane->meleeAttack();
    std::cout << "----------------------" << std::endl << std::endl;

    std::cout << "-------CLONES-------" << std::endl;
    bob_clone->battleCry(); bob_clone->rangedAttack(); bob_clone->meleeAttack();
    jane_clone->battleCry(); jane_clone->rangedAttack(); jane_clone->meleeAttack();
    std::cout << "----------------------" << std::endl << std::endl;


    Squad squad;
    squad.push(bob);
    squad.push(bob_clone);
    squad.push(jane);
    squad.push(jane_clone);
    std::cout << "The number of ISpaceMarines = " << squad.getCount() << std::endl;
}

void check_assign(void)
{
    Squad squad_1;

    ISpaceMarine *bob = new TacticalMarine;
    ISpaceMarine *jack = new TacticalMarine;
    
    ISpaceMarine *jane = new AssaultTerminator;
    ISpaceMarine *alice = new AssaultTerminator;

    squad_1.push(bob);
    squad_1.push(jack);
    squad_1.push(jane);
    squad_1.push(alice);

    std::cout << "******SQUAD_1. The number of SPACE MARINES " << squad_1.getCount() << std::endl << std::endl;

    Squad squad_2;
    
    ISpaceMarine *bobus = new TacticalMarine;
    ISpaceMarine *janus = new AssaultTerminator;

    squad_2.push(bobus);
    squad_2.push(janus);
    
    std::cout << "******SQUAD_2. The number of SPACE MARINES " << squad_2.getCount() << std::endl << std::endl;

    squad_2 = squad_1;
    std::cout << "******SQUAD_2 AFTER ASSIGNING TO IT SQUAD_1. The number of SPACE MARINES " << squad_2.getCount() << std::endl << std::endl;

}

void check_copy_constructor(void)
{
    Squad squad_1;

    ISpaceMarine *bob = new TacticalMarine;
    ISpaceMarine *jack = new TacticalMarine;
    
    ISpaceMarine *jane = new AssaultTerminator;
    ISpaceMarine *alice = new AssaultTerminator;

    squad_1.push(bob);
    squad_1.push(jack);
    squad_1.push(jane);
    squad_1.push(alice);

    std::cout << "******SQUAD_1. The number of SPACE MARINES " << squad_1.getCount() << std::endl << std::endl;

    Squad squad_2(squad_1);
    
    std::cout << "******SQUAD_2. The number of SPACE MARINES " << squad_2.getCount() << std::endl << std::endl;
}

#define UNITS 2

void    check_errors()
{
    Squad squad;
    squad.push(new TacticalMarine);
    squad.push(new AssaultTerminator);
    std::cout << squad.getUnit(0) << std::endl;
    std::cout << squad.getUnit(1) << std::endl;
    std::cout << squad.getCount() << std::endl;
    std::cout << squad.getCount() << " -> " << squad.push(NULL) << std::endl;
    std::cout << squad.getCount() << " -> " << squad.push(squad.getUnit(UNITS - 1)) << std::endl;
    std::cout << squad.getCount() << " -> " << squad.push(squad.getUnit(UNITS)) << std::endl;
    std::cout << squad.getCount() << " -> " << squad.push(squad.getUnit(UNITS + 1)) << std::endl;
    std::cout << squad.getUnit(-1) << std::endl;
    std::cout << squad.getUnit(10000) << std::endl;
}

int main()
{
    // main_subj();
    // check_getUnit();
    // check_push();
    // check_clone();
    // check_assign();
    // check_copy_constructor();
    check_errors();

    // while (1)
    //     ;
    return 0;
}