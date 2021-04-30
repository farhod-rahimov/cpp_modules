#include <iostream>
#include <fstream>

void ft_check_args_num(int argc)
{
    if (argc != 4)
    {
        std::cerr << "Error. Run the programm with 3 parameters: FILENAME, STRING_1, STRING_2\n";
        exit(1);
    }
}

void ft_replace(std::string *line, std::string s1, char  const *s2)
{
    (void)s1;
    (void)s2;
    unsigned long int i;
    unsigned long int tmp_i;
    unsigned long int k;
    unsigned long int counter;
    std::string tmp_line;

    tmp_i = 0;
    while (tmp_i < line->length())
    {
        tmp_line = *line;
        counter = 0;
        i = tmp_i;
        k = 0;
        while ((*line)[i++] == s1[k++])
            counter++;
        if (counter == s1.length() && counter > 0)
            line->replace(tmp_i, s1.length(), s2);
        tmp_i++;
    }
}

int main(int argc, char **argv)
{
    std::ifstream   ifs;
    std::ofstream   ofs;
    std::string     tmp;
    ft_check_args_num(argc);

    tmp = argv[1]; tmp = tmp + ".replace";
    ifs.open(argv[1]);
    ofs.open(tmp);
    if (!ifs.is_open())
        std::cerr << "Error. Cannot open \"" << argv[1] << "\"" << std::endl;

    std::string s1 = argv[2];
    while (!ifs.eof())
    {
        std::getline(ifs, tmp, '\n');
        ft_replace(&tmp, argv[2], argv[3]);
        ofs << tmp;
        if (!ifs.eof())
            ofs << std::endl;
    }
    ifs.close();
    ofs.close();









    // std::ifstream ifs("if_file");
    // unsigned int dst;
    // unsigned int dst2;
    // ifs >> dst >> dst2;

    // std::cout << dst << " " << dst2 << std::endl;
    // ifs.close();

    //--------------------//
    // std::ofstream ofs("po");

    // ofs << "TARARARARAAM!\n";
    // ofs.close();

}