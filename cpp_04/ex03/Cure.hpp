#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class AMateria;
class ICharacter;

class Cure : public AMateria {
public:
    Cure();
    virtual ~Cure();
    Cure(Cure const & src);

    Cure &operator=(Cure const & src);

    virtual AMateria    *clone() const;
    virtual void        use(ICharacter & target);
};

#endif