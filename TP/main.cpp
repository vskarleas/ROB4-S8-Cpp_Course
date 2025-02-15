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

        // Test matrix transpose
        cout << "Testing matrix transpose (m1^T):" << endl;
        cout << "m1:\n" << m1 << endl;
        cout << "m1^T:\n" << m1.transpose() << endl;

        // Test vector constructor
        cout << "Creating vector v1 (5x1)..." << endl;
        Vector<int> v1(5);
        cout << "v1:\n" << v1 << endl;

        // Filling out vector v1
        cout << "Filling out vector v1..." << endl;
        for(int i = 0; i < v1.get_rows(); i++) {
            v1[i] = i;
        }
        cout << "v1:\n" << v1 << endl;

        // Test vector product_scalar
        cout << "Testing vector scalar product (v1 * 2):" << endl;
        cout << "v1 * 2:\n" << v1.product_scalar(2) << endl;

        // Test vector corss_product for 3x1 vectors
        cout << "Creating 3x1 vectors v2 and v3..." << endl;
        Vector<int> v2(3);
        Vector<int> v3(3);

        // Set values for v2 and v3
        cout << "Setting values for v2 and v3..." << endl;
        for(int i = 0; i < v2.get_rows(); i++) {
            v2[i] = i;
            v3[i] = i + 1;
        }

        cout << "v2:\n" << v2 << endl;
        cout << "v3:\n" << v3 << endl;
        cout << "v2 x v3:\n" << v2.cross_product(v3) << endl;
        
        // Test vector read/write access
        cout << "Testing vector read/write access (v1[0] = 5):" << endl;
        cout << "v1[0] before: " << v1[0] << endl;
        v1[0] = 5;
        cout << "v1[0] after: " << v1[0] << endl;

        // Test vector cross_product with false size
        cout << "Testing vector cross product (v1 x v1):" << endl;
        cout << "v1 x v1:\n" << v1.cross_product(v1) << endl;
        
        
        
        cout << "All tests completed successfully!" << endl;
        
    } catch(const exception& e) {
        cout << "Error: " << e.what() << endl;
        return 1;
    }
    
    return 0;
}