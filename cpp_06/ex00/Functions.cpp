#include "Functions.hpp"

Functions::Functions() {
};

Functions::~Functions() {
};

Functions::Functions(Functions &src) {
    *this = src;
};

Functions &Functions::operator=(Functions const &src) {
    static_cast<void>(src);
    return (*this);
};

int Functions::isDigit(char c) const {
    if (c >= '0' && c <= '9')
		return (1);
    return (0);
};

int Functions::isPrintable(char c) const {
    if (c >= 32 && c <= 126)
        return (1);
    return (0);
};

char const *Functions::findException(char *s) const {
    static char array[6][6] = {"inf", "-inf", "inff", "-inff", "nan", "nanf",};
    int i = 0;
    unsigned int minus = 0;

    std::string ret;
    
    for (; s[i] == '-' || s[i] == '+'; i++)
    {
        if (s[i] == '-')
            minus++;
    }
    s += i;
    if (minus % 2 != 0)
        ret = "-";
    ret += s;

    for (i = 0; i < 8; i++)
    {
        if (ret.compare(array[i]) == 0)
            return (array[i]);
    }
    return (NULL);
};

int Functions::getError(char *s) const {
    bool dot = 0;
    int i;
    int tmp_i;

    for (i = 0; s[i] == '-' || s[i] == '+'; i++)
        ;
    tmp_i = i;
    for ( ; s[i] && this->isDigit(s[i]); i++)
    {
        if (s[i + 1] == '.' && !dot)
        {
            i++;
            dot = 1;
        }
    }
    
    if (tmp_i == i && this->findException(s))
        return (0);
    else if (!s[i] || (s[i] == 'f' && !s[i + 1]))
        return (0);
    else if (tmp_i == i && s[i] && !s[i + 1])
        return (0);

    return (1);
};

int Functions::printError(char const *s) const {
    std::cerr << s << std::endl;
    return (1);
};

bool Functions::getIsDot(char const *s) {
    for(int i = 0; s[i]; i++)
    {
        if (s[i] == '.')
            return (1);
    }
    return (0);
};
