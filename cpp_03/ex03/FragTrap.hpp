#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
private:
    FragTrap();

public:
    FragTrap(char const *name);
    ~FragTrap();
    FragTrap(FragTrap const &src);

    FragTrap &operator=(FragTrap const &src);
    
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void vaulthunter_dot_exe(std::string const & target);
};

#endif