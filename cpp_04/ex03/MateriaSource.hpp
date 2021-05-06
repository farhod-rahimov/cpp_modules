#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"

class AMateria;

typedef struct s_materias {
    AMateria            *_materia;
    struct s_materias    *next;
} t_materias;

class MateriaSource : public IMateriaSource{
private:
    t_materias *_materias;

public:
    MateriaSource();
    MateriaSource(AMateria *m);
    virtual ~MateriaSource();
    MateriaSource(MateriaSource const & src);

    MateriaSource &operator=(MateriaSource const & src);

    virtual void        learnMateria(AMateria*);
    virtual AMateria    *createMateria(std::string const & type);
};

#endif