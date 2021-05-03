#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#define ARMOR_FRAG 5

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
private:

public:
    FragTrap();
    FragTrap(char const *name);
    ~FragTrap();
    FragTrap(FragTrap const &src);

    FragTrap &operator=(FragTrap const &src);
    
    void vaulthunter_dot_exe(std::string const & target);
};

#endif