#include "whatever.hpp"

void INT()
{
    int a = 42;
    int b = 21;

    std::cout << "Initial a = " << a << ", b = " << b << std::endl;
    std::cout << "---------------------------------" << std::endl;
    swap(a, b);
    std::cout << "After SWAP a = " << a << ", b = " << b << std::endl;
    std::cout << "The MAX value is " << max(a, b) << std::endl;
    std::cout << "The MIN value is " << min(a, b) << std::endl;
    std::cout << "---------------------------------" << std::endl;
}

void FLOAT()
{
    float a = 42.42f;
    float b = 21.21f;

    std::cout << "Initial a = " << a << ", b = " << b << std::endl;
    std::cout << "---------------------------------" << std::endl;
    swap(a, b);
    std::cout << "After SWAP a = " << a << ", b = " << b << std::endl;
    std::cout << "The MAX value is " << max(a, b) << std::endl;
    std::cout << "The MIN value is " << min(a, b) << std::endl;
    std::cout << "---------------------------------" << std::endl;
}

void DOUBLE()
{
    float a = 42.4242;
    float b = 21.2121;

    std::cout << "Initial a = " << a << ", b = " << b << std::endl;
    std::cout << "---------------------------------" << std::endl;
    swap(a, b);
    std::cout << "After SWAP a = " << a << ", b = " << b << std::endl;
    std::cout << "The MAX value is " << max(a, b) << std::endl;
    std::cout << "The MIN value is " << min(a, b) << std::endl;
    std::cout << "---------------------------------" << std::endl;
}

void CHAR()
{
    char a = 'a';
    char b = 'b';

    std::cout << "Initial a = " << a << ", b = " << b << std::endl;
    std::cout << "---------------------------------" << std::endl;
    swap(a, b);
    std::cout << "After SWAP a = " << a << ", b = " << b << std::endl;
    std::cout << "The MAX value is " << max(a, b) << std::endl;
    std::cout << "The MIN value is " << min(a, b) << std::endl;
    std::cout << "---------------------------------" << std::endl;
}

void STRING()
{
    std::string a = "This is string A";
    std::string b = "This is string B";

    std::cout << "Initial a = " << a << ", b = " << b << std::endl;
    std::cout << "---------------------------------" << std::endl;
    swap(a, b);
    std::cout << "After SWAP a = " << a << ", b = " << b << std::endl;
    std::cout << "The MAX value is " << max(a, b) << std::endl;
    std::cout << "The MIN value is " << min(a, b) << std::endl;
    std::cout << "---------------------------------" << std::endl;
}

void BOOL()
{
    bool a = true;
    bool b = false;

    std::cout << "Initial a = " << a << ", b = " << b << std::endl;
    std::cout << "---------------------------------" << std::endl;
    swap(a, b);
    std::cout << "After SWAP a = " << a << ", b = " << b << std::endl;
    std::cout << "The MAX value is " << max(a, b) << std::endl;
    std::cout << "The MIN value is " << min(a, b) << std::endl;
    std::cout << "---------------------------------" << std::endl;
}

void subj()
{
    int a = 2;
    int b = 3;

    ::swap( a, b );
    
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    
    std::string c = "chaine1";
    std::string d = "chaine2";
    
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}

int main()
{
    // INT();
    // FLOAT();
    // DOUBLE();
    // CHAR();
    // STRING();
    // BOOL();


    // subj();
}