#include <iostream>
#include "matrix_implementation.hpp"

using namespace std;

int main() {
    try {
        // Test constructor
        cout << "Creating 2x3 matrix m1..." << endl;
        Matrix<int> m1(2, 3);
        cout << "m1:\n" << m1 << endl;
        
        // Test copy constructor
        cout << "Testing copy constructor (m2 = m1)..." << endl;
        Matrix<int> m2(m1);
        cout << "m2:\n" << m2 << endl;
        
        // Initialize matrices with values for testing operations
        for(int i = 0; i < m1.get_rows(); i++) {
            for(int j = 0; j < m1.get_cols(); j++) {
                m1(i,j) = i + j;
                m2(i,j) = i * j;
            }
        }
        
        // Test matrix addition
        cout << "Testing matrix addition (m1 + m2):" << endl;
        cout << "m1:\n" << m1 << endl;
        cout << "m2:\n" << m2 << endl;
        cout << "m1 + m2:\n" << m1 + m2 << endl;
        
        // Test matrix subtraction
        cout << "Testing matrix subtraction (m1 - m2):" << endl;
        cout << "m1 - m2:\n" << m1 - m2 << endl;
        
        // Test scalar multiplication
        cout << "Testing scalar multiplication (m1 * 2):" << endl;
        cout << "m1 * 2:\n" << m1 * 2 << endl;
        
        // Test matrix multiplication
        cout << "Testing matrix multiplication..." << endl;
        Matrix<int> m3(3, 2);  // Create 3x2 matrix for multiplication
        for(int i = 0; i < m3.get_rows(); i++) {
            for(int j = 0; j < m3.get_cols(); j++) {
                m3(i,j) = i + j;
            }
        }
        cout << "m3 (3x2):\n" << m3 << endl;
        Matrix<int> m4(2, 3);  // Create 2x3 matrix
        for(int i = 0; i < m4.get_rows(); i++) {
            for(int j = 0; j < m4.get_cols(); j++) {
                m4(i,j) = i * j;
            }
        }
        cout << "m4 (2x3):\n" << m4 << endl;
        cout << "m3 * m4:\n" << m3 * m4 << endl;
        
        // Test identity matrix
        cout << "Testing identity matrix (3x3):" << endl;
        Matrix<int> id(3, 3);
        id = id.identity(3);
        cout << id << endl;
        
        // Test assignment operator
        cout << "Testing assignment operator (m5 = m1):" << endl;
        Matrix<int> m5(2, 3);
        m5 = m1;
        cout << "m5:\n" << m5 << endl;
        
        cout << "All tests completed successfully!" << endl;
        
    } catch(const exception& e) {
        cout << "Error: " << e.what() << endl;
        return 1;
    }
    
    return 0;
}