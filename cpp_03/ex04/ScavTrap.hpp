#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#define ARMOR_SCAV 3

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private:

public:
    ScavTrap();
    ScavTrap(char const *name);
    ~ScavTrap();
    ScavTrap(ScavTrap const &src);

    ScavTrap &operator=(ScavTrap const &src);

    void challengeNewcomer(std::string const & target);
};

#endif