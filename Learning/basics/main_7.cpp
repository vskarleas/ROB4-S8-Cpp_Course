/* CONDITIONS */

#include <iostream>

int main()
{
    bool is_empty = true;

    if (is_empty)
    {
        std::cout << "The list is empty" << std::endl;
    }
    else
    {
        std::cout << "The list is not empty" << std::endl;
    }

    // ============================================
    /* Value test */
    int value = 5;
    std::cout << "\nThe value is: " << value << std::endl;
    if (value == 5)
    {
        std::cout << "The value is 5" << std::endl;
    }
    else
    {
        std::cout << "The value is not 5" << std::endl;
    }

    // ============================================
    /* Value test */
    int value_2 = 50;
    std::cout << "\nThe value is: " << value_2 << std::endl;
    if (value_2 > 5)
    {
        std::cout << "The value is greather than 5" << std::endl;
    }
    else
    {
        std::cout << "The value smaller or equal than 5" << std::endl;
    }

    // ============================================
    /* Imbricated conditions */
    int value_3 = 50;
    std::cout << "\nThe value is: " << value_3 << std::endl;
    if (value_3 > 5)
    {
        if (value_3 < 100)
        {
            std::cout << "The value is between 5 and 100" << std::endl;
        }
        else
        {
            std::cout << "The value is greather than 100" << std::endl;
        }
    }
    else
    {
        std::cout << "The value smaller or equal than 5" << std::endl;
    }

    // ============================================
    /* Using switch cases with a ser input */
    int choice;
    std::cout << "Enter a number between 1 and 3: ";
    std::cin >> choice;

    bool valid_input = false;
    do {
        switch (choice)
        {
        case 1:
            std::cout << "You entered 1" << std::endl;
            valid_input = true;
            break;
        case 2:
            std::cout << "You entered 2" << std::endl;
            valid_input = true;
            break;
        case 3:
            std::cout << "You entered 3" << std::endl;
            valid_input = true;
            break;
        default:
            std::cout << "Invalid input. Please enter a number between 1 and 3: ";
            std::cin >> choice;
        }
    } while (!valid_input);


    return 0;
}