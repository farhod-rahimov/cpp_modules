#ifndef ASSAULT_TERMINATOR_HPP
# define ASSAULT_TERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
public:
    AssaultTerminator();
    virtual ~AssaultTerminator();
    AssaultTerminator(AssaultTerminator const &src);
    
    AssaultTerminator &operator=(AssaultTerminator const &src);

    virtual AssaultTerminator   *clone() const;
    virtual void                battleCry() const;
    virtual void                rangedAttack() const;
    virtual void                meleeAttack() const;
};

# endif