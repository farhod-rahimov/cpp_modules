#include <iostream>

void ft_print(char **argv)
{
    int     i;
    int     k;
    char    c;

    k = 1;
    while (argv[k])
    {
        i = -1;
        while (argv[k][++i])
        {
            if (argv[k][i] >= 97 && argv[k][i] <= 122)
                c = argv[k][i] - 32;
            else
                c = argv[k][i];
            std::cout << c;
        }
        k++;
    }
    std::cout << std::endl;
}

int main(int argc, char **argv)
{
    (void)argv;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
        ft_print(argv);
    return (0);
}