#ifndef _MATRICE_H_
#define _MATRICE_H_

#include <iostream>

template <typename type>
class Matrix
{
    private:
        int _rows;
        int _cols;
        type **data; // We can remplace with type* data and simply calculate every position (std::vector<std::vector<type>>) but this is more efficient


    public:
        Matrix(const int &rows, const int &cols); // Initialisaing matrix NULL
        Matrix(const Matrix<type> &m); // Matrix copy
        Matrix() = default; // Default constructor
        ~Matrix(); // Destructor

        /* Reading access at the cell (row, col) */
        type& operator()(const int &row, const int &col); // The syntax is simple: in the beginnign is what we return and then we declare the operator

        // We are providing a const and a non const version of the operator() to allow for reading and writing access to the matrix
        const type& operator()(const int &row, const int &col) const;


        int get_rows() const;
        int get_cols() const;

        /* Defining the actions for the different operations */
        Matrix<type> operator+(const Matrix<type> &m);
        Matrix<type> operator-(const Matrix<type> &m);
        Matrix<type> operator*(const Matrix<type> &m);
        Matrix<type> operator*(const type &scalar);
        Matrix<type> operator=(const Matrix<type> &m);
        Matrix<type> transpose(); // Transposition of the matrix

        /* Matrix * vector product */
        

        /* Identity matrix */
        Matrix<type> identity(const int &n);
    
};

template<typename type>
std::ostream& operator<<(std::ostream &os, const Matrix<type> &m); // We overload the operator << to print the matrix

template<typename type>
class Vector: public Matrix<type> // public inheritance specifier
{    
    // Setting _cols to 1 for a vector
    public:
        Vector(const int &rows) : Matrix<type>(rows, 1){}; // Constructor (everything initialised to zero)

        Vector<type> product_scalar(const type &scalar); // Scalar product
        Vector<type> cross_product(const Vector<type> &v); // Cross product

        type& operator[](const int &index); // Overloading [] operator for read/write access
        const type& operator[](const int &index) const;

};

#include "matrix_implementation.hpp" // C'est une classe qui est template, donc on peut pas compiler sans l'implementation
# endif
