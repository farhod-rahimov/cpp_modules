#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"

typedef struct s_units {
    ISpaceMarine *_unit;
    struct s_units *next;
} t_units;

class Squad : public ISquad {
private:
    t_units *_units;
    int _count;

public:
    Squad();
    virtual ~Squad();
    Squad(Squad const &src);
    
    Squad &operator=(Squad const &src);

    virtual int             getCount() const;
    virtual ISpaceMarine    *getUnit(int) const;
    virtual int             push(ISpaceMarine*);
};

#endif