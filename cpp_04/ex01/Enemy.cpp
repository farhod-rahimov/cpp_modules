#include "Enemy.hpp"

Enemy::Enemy() {
};

Enemy::Enemy(int hp, std::string const & type) {
    this->_hp = hp;
    this->_type = type;
};

Enemy::~Enemy() {
};

Enemy::Enemy(Enemy const &src) {
    *this = src;
};

Enemy &Enemy::operator=(Enemy const &src) {
    if (this != &src)
    {
        this->_hp = src._hp;
        this->_type = src._type;
    }
    return (*this);
};

std::string Enemy::getType() const {
    return (this->_type);
};

int Enemy::getHP() const {
    return (this->_hp);
};

void Enemy::takeDamage(int amount) {
    if (amount < 0)
        return ;
    else
        this->_hp -= amount;
};