#include <iostream>
#include "class_rectangle_with_namespace.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    using namespace Geometry;
    Rectangle r1 = Rectangle(5, 3); // creating a Rectangle object
    Rectangle r2 = Rectangle(5, 3); // creating a Rectangle object
    Rectangle r3 = Rectangle(4, 3); // creating a Rectangle object

    cout << "Rectangle 1" << endl;
    Geometry::afficher_dimensions(r1);

    cout << "Rectangle 2" << endl;
    Geometry::afficher_dimensions(r2);

    cout << "Rectangle 3" << endl;
    Geometry::afficher_dimensions(r3);

    cout << "Comparaison des aires des deux rectangles r1 et r2: " << (r1 == r2) << "\n" << endl;

    cout << "Comparaison des aires des deux rectangles r1 et r3: " << (r1 == r3) << "\n" << endl;

    cout << "Rectangle 1 aire et perimetre" << endl;
    Geometry::afficher_aire_et_perimetre(r1);

    cout << "Rectangle 2 aire et perimetre" << endl;
    Geometry::afficher_aire_et_perimetre(r2);

    cout << "Rectangle 3 aire et perimetre" << endl;
    Geometry::afficher_aire_et_perimetre(r3);

    return 0;
}