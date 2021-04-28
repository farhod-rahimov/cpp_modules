#include <iostream>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    
    std::string *pointer = &string;
    std::string &reference = string;

    std::cout << *pointer << " <pointer>" << std::endl;
    std::cout << reference << " <reference>" << std::endl;
}