// Class: 29/01/2025
// Author: Vasileios Filippos Skarleas

// Objectif: Inspire par le programme sur class_rectangle.cpp et en utilisant le header file class_rectangle_with_namespave.h il faut: Placez la classe Rectangle dans un namespace nommé Geometrie pour éviter d'éventuels conflits de noms. Implémentez une fonction afficherDimensions (en dehors de la classe) qui prend une référence constante à un objet Rectangle et affiche ses dimensions. Surchargez l'opérateur == pour comparer deux rectangles (basé sur leur aire).

#include <iostream>
#include "class_rectangle_with_namespace.hpp"

using namespace std;

namespace Geometry
{
    Rectangle::Rectangle(int l, int w)
    {
        longueur = l;
        largeur = w;
    }

    int Rectangle::aire()
    {
        return longueur * largeur;
    }

    int Rectangle::perimetre()
    {
        return 2 * (longueur + largeur);
    }

    int Rectangle::getLongueur()
    {
        return longueur;
    }

    int Rectangle::getLargeur()
    {
        return largeur;
    }

    bool Rectangle::operator==(Rectangle& other)
    {
        return this->aire() == other.aire();
    }

    void afficher_dimensions(Rectangle &r)
    {
        cout << "Largeur: " << r.getLargeur() << ", Longeur: " << r.getLongueur() << "\n" << endl;
    }

    void afficher_aire_et_perimetre(Rectangle& r)
    {
        cout << "Aire: " << r.aire() << ", Perimetre: " << r.perimetre() << "\n" << endl;
    }
}