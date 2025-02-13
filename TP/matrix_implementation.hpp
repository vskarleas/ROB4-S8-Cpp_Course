#ifndef MATRIX_IMPLEMENTATION_HPP
#define MATRIX_IMPLEMENTATION_HPP

#include "matrix.hpp"
#include <iostream>
#include <random>

/* This is a regular constructor that creates a new matrix with specified dimensions. Ex: Matrix<m> m(3,4) creates a 3x4 matrix*/
template <typename type>
Matrix<type>::Matrix(const int &rows, const int &cols) : _rows(rows), _cols(cols)
{
    
    // Allocate 2D array properly
    data = new type *[_rows];
    for (int i = 0; i < _rows; i++)
    {
        data[i] = new type[_cols];
    }

    // Initialize the matrix with zeros
    for (int i = 0; i < _rows; i++)
    {
        for (int j = 0; j < _cols; j++)
        {
            (*this)(i, j) = static_cast<type>(0); // we are doing a casting in order to respect the abstraction
        }
    }
}

template <typename type>
Matrix<type>::Matrix(const Matrix<type> &m)
{
    _rows = m._rows;
    _cols = m._cols;

    // Allocate 2D array
    data = new type *[_rows];
    for (int i = 0; i < _rows; i++)
    {
        data[i] = new type[_cols];
    }

    // Copy data
    for (int i = 0; i < _rows; i++)
    {
        for (int j = 0; j < _cols; j++)
        {
            (*this)(i,j) = m(i,j);
        }
    }
}

template <typename type>
Matrix<type>::~Matrix()
{
    for (int i = 0; i < _rows; i++)
    {
        delete[] data[i];
    }
    delete[] data;
}

template <typename type>
int Matrix<type>::get_rows() const
{
    return _rows;
}

template <typename type>
int Matrix<type>::get_cols() const
{
    return _cols;
}

// Const version
template <typename type>
const type &Matrix<type>::operator()(const int &row, const int &col) const
{
    return data[row][col];
}

// Non-const version
template <typename type>
type &Matrix<type>::operator()(const int &row, const int &col)
{
    return data[row][col];
}

template <typename type>
Matrix<type> Matrix<type>::operator+(const Matrix<type> &m)
{
    if (_rows != m._rows || _cols != m._cols)
    {
        throw std::invalid_argument("The dimensions of the two matrices must be the same");
    }

    Matrix<type> result(_rows, _cols);

    for (int i = 0; i < _rows; i++)
    {
        for (int j = 0; j < _cols; j++)
        {
            result(i, j) = (*this)(i, j) + m(i, j);
        }
    }

    return result;
}

template <typename type>
Matrix<type> Matrix<type>::operator-(const Matrix<type> &m)
{
    if (_rows != m._rows || _cols != m._cols)
    {
        throw std::invalid_argument("The dimensions of the two matrices must be the same");
    }

    Matrix<type> result(_rows, _cols);

    for (int i = 0; i < _rows; i++)
    {
        for (int j = 0; j < _cols; j++)
        {
            result(i, j) = (*this)(i, j) - m(i, j);
        }
    }

    return result;
}

template <typename type>
Matrix<type> Matrix<type>::operator*(const Matrix<type> &m)
{
    if (_cols != m._rows)
    {
        throw std::invalid_argument("The number of columns of the first matrix must be equal to the number of rows of the second matrix");
    }

    Matrix<type> result(_rows, m._cols);

    for (int i = 0; i < _rows; i++)
    {
        for (int j = 0; j < m._cols; j++)
        {
            result(i, j) = 0;
            for (int k = 0; k < _cols; k++)
            {
                result(i, j) += (*this)(i, k) * m(k, j);
            }
        }
    }

    return result;
}

template <typename type>
Matrix<type> Matrix<type>::operator*(const type &scalar)
{
    Matrix<type> result(_rows, _cols);

    for (int i = 0; i < _rows; i++)
    {
        for (int j = 0; j < _cols; j++)
        {
            result(i, j) = (*this)(i, j) * scalar;
        }
    }

    return result;
}

template <typename type>
Matrix<type> Matrix<type>::identity(const int &n)
{
    Matrix<type> result(n, n); // already initialized everything to 0

    for (int i = 0; i < n; i++)
    {
        (*this)(i, i) = static_cast<type>(1);
    }

    return result;
}

template <typename type>
Matrix<type> Matrix<type>::operator=(const Matrix<type> &m)
{
    int new_rows = m.get_rows();
    int new_cols = m.get_cols();
    if (new_rows != _rows || new_cols != _cols)
    {
        delete[] data;
        data = new type[new_rows * new_cols];
    }
    _rows = new_rows;
    _cols = new_cols;

    // Copy the data from the matrix m
    for (int i = 0; i < _rows; i++)
    {
        for (int j = 0; j < _cols; j++)
        {
            (*this)(i, j) = m(i, j);
        }
    }

    return *this;
}

template <typename type>
std::ostream &operator<<(std::ostream &os, const Matrix<type> &m)
{
    for (int i = 0; i < m.get_rows(); i++)
    {
        for (int j = 0; j < m.get_cols(); j++)
        {
            os << m(i, j) << " ";
        }
        os << std::endl;
    }

    return os;
}

#endif