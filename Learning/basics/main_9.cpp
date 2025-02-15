/* FUNCTIONS */

#include <iostream>

// Generic sum template function
template<typename T>
T sum(T a, T b) {
    return a + b;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int sum_reference(int &a)
{
    return a += 1;
}

/* Hypercharge of functions */
// Overloaded print_sum functions with specific types
void print_sum(int a, int b)
{
    std::cout << "Int sum of " << a << " + " << b << " = " << sum(a, b) << std::endl;
}

void print_sum(double a, double b)
{
    std::cout << "Double sum of " << a << " + " << b << " = " << sum(a, b) << std::endl;
}

void print_sum(float a, float b)
{
    std::cout << "Float sum of " << a << " + " << b << " = " << sum(a, b) << std::endl;
}

// Generic print_sum template for other types
template<typename T>
void print_sum(T a, T b) {
    std::cout << "Generic sum of " << a << " + " << b << " = " << sum(a, b) << std::endl;
}

int main()
{
    auto a = 5;
    auto b = 7;

    auto result = sum(a, b);
    std::cout << "The sum of 5 + 7 is: " << result << std::endl;

    // ============================================
    /* Using par reference application (pointers) */
    int k = 5;
    int l = 7;
    std::cout << "Before swapping: k = " << k << ", l = " << l << std::endl;

    swap(&k, &l);

    std::cout << "After swapping: k = " << k << ", l = " << l << std::endl;

    // ============================================
    /* Using par reference application (references) */

    int m = 5;
    std::cout << "Before increment: m = " << m << std::endl;

    sum_reference(m);

    std::cout << "After increment: m = " << m << "\n" << std::endl;

    // ============================================
    /* Hypercharge of functions */
    print_sum(5, 7);           // Uses int version
    print_sum(5.5, 7.7);       // Uses double version
    print_sum(5.5f, 7.7f);     // Uses float version
    print_sum<long>(5L, 7L);   // Uses template version




    return 0;
}