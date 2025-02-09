#include <iostream>
#include "matrix_implementation.hpp"

using namespace std;

int main() {
    try {
        // Test constructor
        cout << "Creating 2x3 matrix..." << endl;
        Matrix<int> m1(2, 3);

        
        // Test copy constructor
        cout << "Testing copy constructor..." << endl;
        Matrix<int> m2(m1);
        
        
        // Test getters
        cout << "Matrix dimensions:" << endl;
        cout << "Rows: " << m1.get_rows() << endl;
        cout << "Cols: " << m1.get_cols() << endl;
        
        // Test destructor (automatically called)
        cout << "Testing destructor..." << endl;
        {
            Matrix<int> temp(2,2);
        } // destructor called here
        
        cout << "All tests completed successfully!" << endl;
        
    } catch(const exception& e) {
        cout << "Error: " << e.what() << endl;
        return 1;
    }
    
    return 0;
}