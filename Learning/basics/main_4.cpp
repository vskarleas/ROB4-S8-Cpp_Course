/* VARIABLES */

#include <iostream>
#include <string> // We need to include the string library to use the string class

int main()
{
    std::string welcome_message = "Hello, World!"; // C++98 initialization syntax
    std::string welcome_message_2{"Hello, World!"}; // C++11 initialization syntax

    std::cout << welcome_message << std::endl;
    std::cout << welcome_message_2 << std::endl;

    int const a_number(1455); // We can't change the value of a_number because it is a constant
    std::cout << a_number << std::endl;

    auto some_code(1476);
    std::cout << some_code << std::endl;

    return 0;
}