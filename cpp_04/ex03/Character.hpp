#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class AMateria;

typedef struct s_materia {
    AMateria            *_materia;
    int                 _idx;
    struct s_materia    *next;
} t_materia;

class Character : public ICharacter {
private:
    std::string _name;
    t_materia   *_materias;
    Character();

public:
    Character(std::string name);
    virtual ~Character();
    Character(Character const & src);

    Character &operator=(Character const & src);

    virtual std::string const & getName() const;
    virtual void                equip(AMateria *m);
    virtual void                unequip(int idx);
    virtual void                use(int idx, ICharacter & target);
};

#endif