#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
    std::string _type;
    std::string _name;

public:
    Zombie();
    Zombie(std::string type, std::string name);
    void        announce(void);
    void        setType(std::string type);
    void        setName(std::string name);
    std::string getType(void);
    std::string getName(void);
};

#endif