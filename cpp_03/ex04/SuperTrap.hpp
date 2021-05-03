#ifndef SUPER_TRAP_HPP
#define SUPER_TRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
private:
    SuperTrap();

public:
    SuperTrap(char const *name);
    ~SuperTrap();
    SuperTrap(SuperTrap const &src);

    SuperTrap &operator=(SuperTrap const &src);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
};

#endif