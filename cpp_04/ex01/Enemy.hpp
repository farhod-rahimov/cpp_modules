#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy {
protected:
    std::string _type;
    int _hp;
    Enemy();

public:
    Enemy(int hp, std::string const & type);
    virtual ~Enemy();
    Enemy(Enemy const &src);
    
    Enemy &operator=(Enemy const &src);

    std::string getType() const; //std::string [...] getType() const
    int         getHP() const;
    virtual void takeDamage(int);
};

#endif