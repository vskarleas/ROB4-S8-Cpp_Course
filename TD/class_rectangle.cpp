// Class: 29/01/2025
// Author: Vasileios Filippos Skarleas

// Objectif: On veut declarer une classe rectangle avec 2 attributs (longeur et largeur) et 2 methodes (perimetre et aire)

#include <iostream>
using namespace std;

class Rectangle
{
private: // private means that they are accessible from the constructor and destructor functions of the same class, but not from any other context.
    int longueur;
    int largeur;

public:
    Rectangle(int l, int L)
    { // This is the constructor of the class. It is called when an object of the class is created. It is used to initialize the object.
        longueur = l;
        largeur = L;
    }
    int perimetre()
    {
        return 2 * (longueur + largeur);
    }
    int aire()
    {
        return longueur * largeur;
    }
};

// On test la classe Rectangle
int main(int argc, char *argv[])
{
    Rectangle r(5, 3); // creating a Rectangle object
    cout << "Perimetre: " << r.perimetre() << endl;
    cout << "Aire: " << r.aire() << endl;
    return 0;
}