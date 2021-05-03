#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap();
    ScavTrap(char const *name);
    ~ScavTrap();
    ScavTrap(ScavTrap const &src);

    ScavTrap &operator=(ScavTrap const &src);

    void challengeNewcomer(std::string const & target);
};

#endif