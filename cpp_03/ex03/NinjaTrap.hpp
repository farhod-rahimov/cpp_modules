#ifndef NINJA_TRAP
# define NINJA_TRAP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {
private:
    NinjaTrap();

public:
    NinjaTrap(char const *name);
    ~NinjaTrap();
    NinjaTrap(NinjaTrap const &src);

    NinjaTrap &operator=(NinjaTrap const &src);
    
    void ninjaShoebox(void);
    void ninjaShoebox(ScavTrap const &clap);
    void ninjaShoebox(FragTrap const &clap);
    void ninjaShoebox(NinjaTrap const &clap);
    void ninjaShoebox(ClapTrap const &clap);
};

#endif