#ifndef FUNCTIONS_HPP
# define FUNCTIONS_HPP

# define WRNG_NUM_ARG   "Error. Wrong number of argunments."
# define INVALID_ARG    "Error. Wrong argument: you can pass char, int, float or double."

#include <iostream>

class Functions {
public:
    Functions();
    virtual ~Functions();
    Functions(Functions &src);

    Functions &operator=(Functions const &src);
    
    int         isDigit(char) const;
    int         isPrintable(char) const;
    char const  *findException(char *) const;
    int         getError(char *) const;
    int         printError(char const *) const;
    bool        getIsDot(char const *);
};

#endif