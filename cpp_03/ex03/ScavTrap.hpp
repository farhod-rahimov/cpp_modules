#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private:
    ScavTrap();

public:
    ScavTrap(char const *name);
    ~ScavTrap();
    ScavTrap(ScavTrap const &src);

    ScavTrap &operator=(ScavTrap const &src);
    
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void challengeNewcomer(std::string const & target);
};

#endif