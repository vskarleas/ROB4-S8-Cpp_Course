// Class: 29/01/2025
// Author: Vasileios Filippos Skarleas

#include <iostream>
#include "parallelograms.hpp"

using namespace std;

namespace Geometry
{
    int Rectangle::compteur = 0; // We have to declare what is the initial value of the counter
    int Square::compteur = 0;

    Rectangle::Rectangle(int l, int w)
    {
        longueur = l;
        largeur = w;

        // Counting the number of instances of this class
        compteur++;
    }

    int Rectangle::aire() const
    {
        return longueur * largeur;
    }

    int Rectangle::perimetre() const
    {
        return 2 * (longueur + largeur);
    }

    int Rectangle::getLongueur() const // Those fuctions are just returning values, so we do not modify the object's state. That is the reason why we can set them as const
    {
        return longueur;
    }

    int Rectangle::getLargeur() const
    {
        return largeur;
    }

    int Rectangle::getCounter()
    {
        return compteur;
    }

    bool Rectangle::operator==(const Rectangle& other)
    {
        return this->aire() == other.aire();
    }

    void afficher_dimensions(const Rectangle &r)
    {
        cout << "Largeur: " << r.getLargeur() << ", Longeur: " << r.getLongueur() << "\n" << endl;
    }

    void afficher_aire_et_perimetre(const Rectangle& r)
    {
        cout << "Aire: " << r.aire() << ", Perimetre: " << r.perimetre() << "\n" << endl;
    }

    void afficher_compteur()
    {
        cout << "Nombre d'instances de la classe Rectangle: " << Rectangle::getCounter() << "\n" << endl;
    }

    Square::Square(int c) {
        cote = c;
        compteur++;
    }

    int Square::aire() const {
        return cote * cote;
    }

    int Square::perimetre() const {
        return 4 * cote;
    }

    int Square::getCote() const {
        return cote;
    }

    int Square::getCounter() {
        return compteur;
    }

    bool Square::operator==(const Square& other) {
        return this->aire() == other.aire();
    }

    void afficher_dimensions_carre(const Square& s) {
        cout << "Cote: " << s.getCote() << "\n" << endl;
    }

    void afficher_aire_et_perimetre_carre(const Square& s) {
        cout << "Aire: " << s.aire() << ", Perimetre: " << s.perimetre() << "\n" << endl;
    }

    void afficher_compteur_carre() {
        cout << "Nombre d'instances de la classe Square: " << Square::getCounter() << "\n" << endl;
    }

}