#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#define ARMOR_FRAG 5

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
private:
    FragTrap();

public:
    FragTrap(char const *name);
    ~FragTrap();
    FragTrap(FragTrap const &src);

    FragTrap &operator=(FragTrap const &src);
    
    void vaulthunter_dot_exe(std::string const & target);
};

#endif