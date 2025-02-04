// Pour cette première partie, nous travaillerons avec des matrices de double. Voici ce que doit être capable de faire votre classe :
// constructeur qui construit une matrice nulle d’une taille donnée ;
// accès en lecture et écriture à la case (i, j) via l’opérateur () ;
// copie entre deux matrices (via l’opérateur = et le constructeur de copie) ;
// multiplication, addition et soustraction entre matrices ;
// multiplication, addition et soustraction d’un scalaire (ajouter un scalaire = l’ajouter à tous les coeﬃcients de la matrice) ;
// trace d’une matrice carrée (somme des coeﬃcients diagonaux) ;
// comparaison de matrices via l’opérateur == ;
// Méthode de classe renvoyant une matrice identité d’une taille donnée ;
// Méthode de classe renvoyant une matrice aléatoire (valeurs dans [0; 1]) d’une taille donnée ;

#include <iostream>
#include "matrice.hpp"

class Matrice
{
private:
    size_t rows, cols;
    std::vector<std::vector<double>> data;

public:
    // Constructeur par défaut
    Matrice() : rows(0), cols(0), data({}) {}

    // Constructeur pour une matrice nulle de taille n x m
    Matrice(size_t n, size_t m) : rows(n), cols(m), data(n, std::vector<double>(m, 0.0)) {}

    // Constructeur de copie
    Matrice(const Matrice &other) : rows(other.rows), cols(other.cols), data(other.data) {}
    
    // Opérateur d'affectation
    Matrice &operator=(const Matrice &other)
    {
        if (this != &other)
        {
            rows = other.rows;
            cols = other.cols;
            data = other.data;
        }
        return *this;
    }
};