/* USER INPut */

#include <iostream>
#include <string> // We need to include the string library to use the string class
#include <limits> // We need to include the limits library to use std::numeric_limits


int main()
{
    int number; // declaration of an integer variable

    

    /* Flags that helps as to identify if the input operation was successful or not and for what reason:
        goodbit: 1
        failbit: 0
        badbit: 0
    */
    // std::cout << " Good : " << std::cin.good() << std::endl;
    // std::cout << " Fail : " << std::cin.fail() << std::endl;
    // std::cout << " Bad : " << std::cin.bad() << std::endl;

    std::cout << "Enter a number: "; 
    std::cin >> number; // standard input
    std::cout << "You entered: " << number << std::endl;

    // std::cout << " Good : " << std::cin.good() << std::endl;
    // std::cout << " Fail : " << std::cin.fail() << std::endl;
    // std::cout << " Bad : " << std::cin.bad() << std::endl;

    // =====================================================
    std::string username;

    std::cout << "\nEnter your username: ";
    std::cin >> username;
    std::cout << "Your username is: " << username << std::endl;

    // Due to the fact that the cin method stops reading when it encounters a space and it returns a \n, we can use the ignore method to clear the buffer
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // =====================================================
    /* Accepting spaces on a string via the get_line method */
    std::string fullname;
    std::cout << "\nEnter your full name: ";
    std::getline(std::cin, fullname); // We can use the delimiter to stop the input.By default is \n
    std::cout << "Your full name is: " << fullname << std::endl;

    // =====================================================
    /* Otherwise we can use another structure to make sure that \n doesn't appear on the next cin */
    std::cout << "\nEnter a number: ";
    std::cin >> number;

    std::cout << "\nEnter a username: ";
    std::getline(std::cin >> std::ws, username); // We use the ws flag to ignore the white spaces

    std::cout << "\nEnter your full name: "; // using getline for the username as well prevents \n from appearing on the next cin
    std::getline(std::cin, fullname);

    std::cout << "You entered: " << number << ", " << username << ", " << fullname << std::endl;



    return 0;
}