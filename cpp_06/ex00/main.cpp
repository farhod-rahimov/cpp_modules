#include <iostream>
#include "Functions.hpp"

int workWithDigit(char **argv, Functions & funcs);
int workWithChar(char **argv, Functions & funcs);
int workWithException(char **argv, Functions funcs);

int main(int argc, char **argv)
{
    Functions funcs;

    if (argc != 2)
        return (funcs.printError(WRNG_NUM_ARG));
    else if (funcs.getError(argv[1]) || (!funcs.isDigit(argv[1][0]) && argv[1][0] != '-' && argv[1][0] != '+' \
            && argv[1][1] && !funcs.findException(argv[1])))
        return (funcs.printError(INVALID_ARG));

    if (funcs.isDigit(argv[1][0]))
        return (workWithDigit(argv, funcs));
    else if (!argv[1][1])
        return (workWithChar(argv, funcs));
    else if (funcs.findException(argv[1]))
        return (workWithException(argv, funcs));
    else
        return (funcs.printError(INVALID_ARG));
    return (0);
}