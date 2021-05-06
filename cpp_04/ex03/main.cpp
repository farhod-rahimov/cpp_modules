#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#include "Character.hpp"

void main_subj(void)
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
}

void main_no_learnt(void)
{
    IMateriaSource* src = new MateriaSource();
    // src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice"); // the Materia shouldn't be created because we didn't learn it
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(1, *bob); // index 1 doesn't exist. Here shouldn't be segfault
    
    delete bob;
    delete me;
    delete src;
}

void check_assign_to_new(void)
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    Character me("me");

    AMateria *tmp;
    tmp = src->createMateria("ice");
    me.equip(tmp);
    tmp = src->createMateria("cure");
    me.equip(tmp);

    ICharacter *target = new Character("target_name");
    Character me_copy("copy_name");   // me_copy has no materias;
    me_copy = me;

    std::cout << "-------ME-------" << std::endl;
    std::cout << "ME NAME " << me.getName() << std::endl;
    me.use(0, *target);
    me.use(1, *target);
    me.use(2, *target);
    std::cout << "----------------" << std::endl << std::endl;

    std::cout << "-------ME_COPY-------" << std::endl;
    std::cout << "ME_COPY NAME " << me_copy.getName() << std::endl;
    me_copy.use(0, *target);
    me_copy.use(1, *target);
    me_copy.use(2, *target);
    std::cout << "---------------------" << std::endl;

    delete src;
    delete target;
}

void check_assign_to_existing(void)
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    Character me("me");
    AMateria *tmp;

    tmp = src->createMateria("ice");
    me.equip(tmp);
    tmp = src->createMateria("cure");
    me.equip(tmp);

    ICharacter *target = new Character("target_name");

    Character me_copy("me_copy");   // me_copy has 4 Materias 
    tmp = src->createMateria("ice");
    me_copy.equip(tmp);
    tmp = src->createMateria("cure");
    me_copy.equip(tmp);
    tmp = src->createMateria("ice");
    me_copy.equip(tmp);
    tmp = src->createMateria("cure");
    me_copy.equip(tmp);
    tmp = src->createMateria("cure"); //  Character can store MAX 4 materias. This materia should be discarded
    me_copy.equip(tmp);

    std::cout << "-------ME_COPY_OLD-------" << std::endl;
    std::cout << "ME_COPY NAME " << me_copy.getName() << std::endl;
    me_copy.use(0, *target);
    me_copy.use(1, *target);
    me_copy.use(2, *target);
    me_copy.use(3, *target);
    me_copy.use(4, *target);
    std::cout << "-------------------------" << std::endl << std::endl;

    me_copy = me;
    std::cout << "-------ME-------" << std::endl;
    std::cout << "ME NAME " << me.getName() << std::endl;
    me.use(0, *target);
    me.use(1, *target);
    me.use(2, *target);
    std::cout << "----------------" << std::endl << std::endl;

    std::cout << "-------ME_COPY_NEW-------" << std::endl;
    std::cout << "ME_COPY NAME " << me_copy.getName() << std::endl;
    me_copy.use(0, *target);
    me_copy.use(1, *target);
    me_copy.use(2, *target);
    me_copy.use(3, *target);
    me_copy.use(4, *target);
    std::cout << "-------------------------" << std::endl;

    delete src;
    delete target;
}

void check_copy_constructor(void)
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    Character me("me");
    AMateria *tmp;

    tmp = src->createMateria("ice");
    me.equip(tmp);
    tmp = src->createMateria("cure");
    me.equip(tmp);

    ICharacter *target = new Character("target_name");

    Character me_copy(me);

    std::cout << "-------ME-------" << std::endl;
    std::cout << "ME NAME " << me.getName() << std::endl;
    me.use(0, *target);
    me.use(1, *target);
    me.use(2, *target);
    me.use(3, *target);
    me.use(4, *target);
    std::cout << "CHECKING UNEQUIP" << std::endl;
    me.unequip(0);
    me.unequip(1);
    me.unequip(2);
    me.unequip(3);
    me.unequip(4);
    me.use(0, *target);
    me.use(1, *target);
    me.use(2, *target);
    me.use(3, *target);
    me.use(4, *target);
    std::cout << "----------------" << std::endl << std::endl;

    std::cout << "-------ME_COPY_NEW-------" << std::endl;
    std::cout << "ME_COPY NAME " << me_copy.getName() << std::endl;
    me_copy.use(0, *target);
    me_copy.use(1, *target);
    me_copy.use(2, *target);
    me_copy.use(3, *target);
    me_copy.use(4, *target);
    std::cout << "CHECKING UNEQUIP" << std::endl;
    me_copy.unequip(0);
    me_copy.unequip(1);
    me_copy.unequip(2);
    me_copy.unequip(3);
    me_copy.unequip(4);
    me_copy.use(0, *target);
    me_copy.use(1, *target);
    me_copy.use(2, *target);
    me_copy.use(3, *target);
    me_copy.use(4, *target);
    std::cout << "-------------------------" << std::endl;

    delete src;
    delete target;
}

int main()
{
    // main_subj();
    // main_no_learnt();
    // check_assign_to_new();
    // check_assign_to_existing();
    check_copy_constructor();

    while (1)
        ;
}