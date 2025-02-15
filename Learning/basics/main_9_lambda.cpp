/**/
#include <iostream>

int main()
{

    // []() <specificators> -> <return type> { <body> };

    auto func = []() -> void
    {
        std::cout << "Hello, World!" << std::endl;
    };

    func();

    // ============================================
    int n{67};

    auto func_2 = [&]() mutable -> void // access by reference. WE NEED TO MAKE n mutable for this to work
    {
        n = 45;
        std::cout << "Value of n: " << n << std::endl;
    };
    func_2();
    std::cout << "Value of n (afetr lamda function): " << n << std::endl;

    n = 63;
    auto func_4 = [=]() -> void // access by copy (only readable)
    {
        std::cout << "Value of n: " << n << "\n" << std::endl;
    };
    func_4();

    // ============================================
    int m{34};
    std::cout << n << " , " << m << std::endl;

    auto func_3 = [&]() mutable -> void // if we access by copy [=] then the outside won't be changed n-m
    {
        n += 3;
        m -= 5;
        std::cout << n << " - " << m << " = " << (n - m) << std::endl; // 66 - 29 = 37
    };
    func_3();

    std::cout << n << " - " << m << " = " << (n - m) << std::endl; // 63 - 34 = 29 (when it is by copy, otherwise it would be 37)

    return 0;
}
/*
    var : passage par copie
    &var : passage par référence

    = :tout est psse par copie 
    & : tout est passé par référence
*/