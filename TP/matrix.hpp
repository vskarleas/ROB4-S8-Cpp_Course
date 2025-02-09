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
        const type& operator()(const int &row, const int &col); // The syntax is simple: in the beginnign is what we return and then we declare the operator
        int get_rows() const;
        int get_cols() const;

        /* Defining the actions for the different operations */
        Matrix<type> operator+(const Matrix<type> &m) const;
        Matrix<type> operator-(const Matrix<type> &m) const;
        Matrix<type> operator*(const Matrix<type> &m) const;
        Matrix<type> operator*(const type &scalar) const;
        Matrix<type> operator=(const Matrix<type> &m) const;

        /* Identity matrix */
        Matrix<type> identity(const int &n);
    
};

template<typename type>
std::ostream& operator<<(std::ostream &os, const Matrix<type> &m); // We overload the operator << to print the matrix


#include "matrix_implementation.hpp" // C'est une classe qui est template, donc on peut pas compiler sans l'implementation
# endif
