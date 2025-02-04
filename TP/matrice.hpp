#ifndef MATRICE_HPP
#define MATRICE_HPP

#include <iostream>
#include <vector>
#include <stdexcept>

class Matrice {
private:
    size_t rows, cols;
    std::vector<std::vector<double>> data;

public:
    Matrice(size_t n, size_t m);
    Matrice(const Matrice& other);
    Matrice& operator=(const Matrice& other);

    double& operator()(size_t i, size_t j);
    const double& operator()(size_t i, size_t j) const;

    Matrice operator+(const Matrice& other) const;
    Matrice operator-(const Matrice& other) const;
    Matrice operator*(const Matrice& other) const;
    Matrice operator+(double scalar) const;
    Matrice operator-(double scalar) const;
    Matrice operator*(double scalar) const;
    
    double trace() const;
    bool operator==(const Matrice& other) const;
    
    static Matrice identite(size_t n);
    static Matrice aleatoire(size_t n, size_t m);

    friend std::ostream& operator<<(std::ostream& os, const Matrice& m);
};

#endif