#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class AMateria;
class ICharacter;

class Ice : public AMateria {
public:
    Ice();
    virtual ~Ice();
    Ice(Ice const & src);

    Ice &operator=(Ice const & src);

    virtual AMateria    *clone() const;
    virtual void        use(ICharacter & target);
};

#endif