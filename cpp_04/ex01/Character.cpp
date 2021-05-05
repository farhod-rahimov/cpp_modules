#include "Character.hpp"

Character::Character() {
};

Character::Character(std::string const & name) {
    this->_name = name.data();
    this->_ap = 40;
    this->w = NULL;
};

Character::~Character() {
};

Character::Character(Character const &src) {
    *this = src;
}

Character &Character::operator=(Character const &src) {
    if (this != &src)
    {
        this->_name = src._name;
        this->_ap = src._ap;
        this->w = src.w;
    }
    return (*this);
};

void Character::recoverAP() {
    if (this->_ap == 40)
        return ;
    this->_ap += 10;
    if (this->_ap > 40)
        this->_ap = 40;
};

void Character::attack(Enemy *enemy) {
    if (enemy == NULL || enemy->getHP() < 0 || this->w == NULL)
        return ;
    if (this->_ap < this->w->getAPCost())
        return ;
    else
        this->_ap -= this->w->getAPCost();
    std::cout << this->getName() << " attacks " << enemy->getType() << " with a " \
    << this->w->getName() << std::endl;
    w->attack();
    enemy->takeDamage(this->w->getDamage());
    if (enemy->getHP() <= 0)
        delete enemy;
};

void Character::equip(AWeapon *weapon) {
    this->w = weapon;
};

std::string  Character::getName() const {
    return(this->_name);
};

int Character::getAP() const {
    return (this->_ap);
};

std::string Character::getWeaponName() const {
    if (this->w == NULL)
        return ("");
    return (this->w->getName());
};

std::ostream &operator<<(std::ostream &o, Character const &src) {
    o << src.getName() << " has " << src.getAP() << " AP and ";
    if (src.getWeaponName().length() == 0)
        o << "is unarmed" << std::endl;
    else
        o << "wields a " << src.getWeaponName() << std::endl;
    return (o);
};