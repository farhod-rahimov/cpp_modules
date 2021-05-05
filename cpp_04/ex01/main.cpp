#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"

void main_subj()
{
    Character* me = new Character("me");

    std::cout << *me;
    
    Enemy* b = new RadScorpion();
    
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
}

void main_super_mutant()
{
    Character* me = new Character("me");

    std::cout << *me;
    
    Enemy* b = new SuperMutant();
    
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b); me->recoverAP();
    me->attack(b); me->recoverAP();
    me->attack(b); me->recoverAP();
    me->attack(b); me->recoverAP();
    me->attack(b); me->recoverAP();
    me->attack(b); me->recoverAP();
    me->attack(b); me->recoverAP();
    me->attack(b); me->recoverAP();
    me->attack(b); me->recoverAP();
    me->attack(b); me->recoverAP();
    me->attack(b); me->recoverAP();
    std::cout << *me;
}

void main_rad_scorpion()
{
    Character* me = new Character("me");

    std::cout << *me;
    
    Enemy* b = new RadScorpion();
    std::cout << std::endl << "----ENEMY----" << std::endl;
    std::cout << "Enemy's HP " << b->getHP() << " Enemy's TYPE " << b->getType() << std::endl;
    std::cout << "---------------" << std::endl << std::endl;
    
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b); me->recoverAP();
    me->attack(b); me->recoverAP();
    me->attack(b); me->recoverAP();
    me->attack(b); me->recoverAP();
    me->attack(b); me->recoverAP();
    me->attack(b); me->recoverAP();
    me->attack(b); me->recoverAP();
    me->attack(b); me->recoverAP();
    me->attack(b); me->recoverAP();
    me->attack(b); me->recoverAP();
    me->attack(b); me->recoverAP();
    std::cout << *me;
}

int main()
{
    // main_subj();
    // main_super_mutant();
    main_rad_scorpion();
    return 0;
}