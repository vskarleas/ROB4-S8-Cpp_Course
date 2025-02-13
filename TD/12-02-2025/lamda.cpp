// Creating a lamda function taht compares two values and we use it to find the maximum in a table

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// int main()
// {
//     std::vector<int> tableau = {5, 2, 8, 1, 9, 3};

//     // Using std::max_element with a lambda function
//     auto max = *std::max_element(tableau.begin(), tableau.end(), [](int a, int b) { return a < b; });

//     // Using the traditional loop with a lambda function
//     auto max_auto = tableau[0];
//     for (auto &i : tableau)
//     {
//         max_auto = std::max(max_auto, i);
//     }

//     std::cout << "Le maximum dans le tableau est: " << max << std::endl;
//     std::cout << "Le maximum dans le tableau est (traditional): " << max_auto << std::endl;

//     return 0;
// }

int main()
{
    int array[] = {5, 2, 8, 1, 9, 3};
    int n = sizeof(array) / sizeof(array[0]);

    // Lamda for comparison
    auto max = [](int a, int b)
    { 
        return (a < b) ? b : a; 
    };

    auto max_2 = [](int a, int b)
    {
        return std::max(a, b);
    };

    auto max_traditional = [](int a, int b)
    {
        if (a < b)
        {
            return b;
        }
        else
        {
            return a;
        }
    };

    int max_value = array[0];
    int max_value_2 = array[0];
    int max_value_traditional = array[0];
    for (int i = 0; i < n; i++)
    {
        max_value = max(max_value, array[i]);
        max_value_2 = max_2(max_value_2, array[i]);
        max_value_traditional = max_traditional(max_value_traditional, array[i]);
    }

    cout << "The maximum value in the array is: " << max_value << endl;
    cout << "The maximum value in the array is (v2): " << max_value_2 << endl;
    cout << "The maximum value in the array is (traditional): " << max_value_traditional << endl;

    return 0;
}