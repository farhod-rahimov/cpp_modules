#ifndef TACTICAL_MARINE_HPP
# define TACTICAL_MARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
public:
    TacticalMarine();
    virtual ~TacticalMarine();
    TacticalMarine(TacticalMarine const &src);
    
    TacticalMarine &operator=(TacticalMarine const &src);

    virtual TacticalMarine  *clone() const;
    virtual void            battleCry() const;
    virtual void            rangedAttack() const;
    virtual void            meleeAttack() const;
};

# endif