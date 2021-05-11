#include "whatever.hpp"

void INT()
{
    int a = 42;
    int b = 21;

    std::cout << "Initial a = " << a << " b = " << b << std::endl;
    std::cout << "---------------------------------" << std::endl;
    swap(a, b);
    std::cout << "After SWAP a = " << a << " b = " << b << std::endl;
    std::cout << "The MAX value is " << max(a, b) << std::endl;
    std::cout << "The MIN value is " << min(a, b) << std::endl;
    std::cout << "---------------------------------" << std::endl;
}

void FLOAT()
{
    float a = 42.42f;
    float b = 21.21f;

    std::cout << "Initial a = " << a << " b = " << b << std::endl;
    std::cout << "---------------------------------" << std::endl;
    swap(a, b);
    std::cout << "After SWAP a = " << a << " b = " << b << std::endl;
    std::cout << "The MAX value is " << max(a, b) << std::endl;
    std::cout << "The MIN value is " << min(a, b) << std::endl;
    std::cout << "---------------------------------" << std::endl;
}

void DOUBLE()
{
    float a = 42.4242;
    float b = 21.2121;

    std::cout << "Initial a = " << a << " b = " << b << std::endl;
    std::cout << "---------------------------------" << std::endl;
    swap(a, b);
    std::cout << "After SWAP a = " << a << " b = " << b << std::endl;
    std::cout << "The MAX value is " << max(a, b) << std::endl;
    std::cout << "The MIN value is " << min(a, b) << std::endl;
    std::cout << "---------------------------------" << std::endl;
}

void CHAR()
{
    char a = 'a';
    char b = 'b';

    std::cout << "Initial a = " << a << " b = " << b << std::endl;
    std::cout << "---------------------------------" << std::endl;
    swap(a, b);
    std::cout << "After SWAP a = " << a << " b = " << b << std::endl;
    std::cout << "The MAX value is " << max(a, b) << std::endl;
    std::cout << "The MIN value is " << min(a, b) << std::endl;
    std::cout << "---------------------------------" << std::endl;
}

int main()
{
    INT();
    FLOAT();
    DOUBLE();
    CHAR();
}