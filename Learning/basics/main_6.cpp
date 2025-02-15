/* OPERATIONS */
#include <iostream>

int main()
{
    /* Arithmetic operations */
    int result;
    float result_float;

    result = 5 + 7; // addition
    std::cout << "5 + 7 = " << result << std::endl;

    result = 10 - 3; // subtraction
    std::cout << "10 - 3 = " << result << std::endl;

    result = 4 * 2; // multiplication
    std::cout << "4 * 2 = " << result << std::endl;

    result = 15 / 3; // division
    std::cout << "15 / 3 = " << result << std::endl;

    result_float = 14 / 3; // division with remainder
    std::cout << "14 / 3 = " << result_float << std::endl;

    result_float = 14.0 / 3.0; // division with remainder OR EVEN float(14) / 3
    std::cout << "14 / 3 = " << result_float << std::endl;

    result = 10 % 3; // modulo
    std::cout << "10 % 3 = " << result << std::endl;

    result = 2 + 3 * 4; // operator precedence
    std::cout << "2 + (3 * 4) = " << result << std::endl;

    // =====================================================
    /* Boolean operations */
    bool is_true = true;
    bool is_false = false;

    std::cout << "is_true && is_true = " << (is_true && is_true) << std::endl; // and logic
    std::cout << "is_true && is_false = " << (is_true && is_false) << std::endl;

    std::cout << "is_true || is_true = " << (is_true || is_true) << std::endl; // or logic
    std::cout << "is_true || is_false = " << (is_true || is_false) << std::endl;

    // =====================================================
    /* Comparison operations */
    int a = 5;
    int b = 7;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "a == b = " << (a == b) << std::endl; // equal
    std::cout << "a!= b = " << (a != b) << std::endl;  // not equal

    std::cout << "a > b = " << (a > b) << std::endl; // greater than
    std::cout << "a < b = " << (a < b) << std::endl; // less than

    printf("So 1 is for true and 0 is for false\n");

    // =====================================================
    /* Divers */

    int x = 5;
    int y = 7;
    int z = 5;
    
    std::cout << "\n\nx = " << x << ", y = " << y << ", z = " << z << "\n" << std::endl;
    std::cout << "x++ = " << x++ << ", y-- = " << y-- << ", z = " << z << std::endl; // post increment and decrement operators
    std::cout << "x = " << x << ", y = " << y << ", z = " << z << "\n" << std::endl;

    // Explaining what happens if the divers precedent the variable:
    // The affectation is done before the increment/decrement, so x is incremented/decremented before being printed.
    std::cout << "\n\nx = " << x << ", y = " << y << ", z = " << z << "\n" << std::endl;
    std::cout << "++x = " << ++x << ", --y = " << --y << ", --z = " << --z << std::endl; // pre increment and decrement operators
    std::cout << "x = " << x << ", y = " << y << ", z = " << z << std::endl;

    return 0;
}
