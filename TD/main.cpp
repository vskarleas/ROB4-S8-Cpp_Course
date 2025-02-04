#include <iostream>
#include "parallelograms.hpp"

using namespace std;
using namespace Geometry;

int main(int argc, char *argv[])
{
    using namespace Geometry;
    Rectangle r1 = Rectangle(5, 3); // creating a Rectangle object
    Rectangle r2 = Rectangle(5, 3); 
    Rectangle r3 = Rectangle(4, 3);

    cout << "Rectangle 1" << endl;
    afficher_dimensions(r1);

    cout << "Rectangle 2" << endl;
    afficher_dimensions(r2);

    cout << "Rectangle 3" << endl;
    afficher_dimensions(r3);

    cout << "Comparaison des aires des deux rectangles r1 et r2: " << (r1 == r2) << "\n" << endl;

    cout << "Comparaison des aires des deux rectangles r1 et r3: " << (r1 == r3) << "\n" << endl;

    cout << "Rectangle 1 aire et perimetre" << endl;
    afficher_aire_et_perimetre(r1);

    cout << "Rectangle 2 aire et perimetre" << endl;
    afficher_aire_et_perimetre(r2);

    cout << "Rectangle 3 aire et perimetre" << endl;
    afficher_aire_et_perimetre(r3);

    cout << "Recntangle object number of instances" << endl; // Which ever of the rectangles used, we take the correct number 3
    afficher_compteur();

    //================================================================================================

    // Square tests
    Square s1(5);
    Square s2(7);
    Square s3(5);

    cout << "\nSquare Tests:" << endl;
    cout << "Square 1" << endl;
    afficher_dimensions_carre(s1);

    cout << "Square 2" << endl;
    afficher_dimensions_carre(s2);

    cout << "Square 3" << endl;
    afficher_dimensions_carre(s3);

    cout << "Comparing areas of squares s1 and s2: " << (s1 == s2) << "\n" << endl;
    cout << "Comparing areas of squares s1 and s3: " << (s1 == s3) << "\n" << endl;

    cout << "Square 1 area and perimeter" << endl;
    afficher_aire_et_perimetre_carre(s1);

    cout << "Square 2 area and perimeter" << endl;
    afficher_aire_et_perimetre_carre(s2);

    cout << "Square 3 area and perimeter" << endl;
    afficher_aire_et_perimetre_carre(s3);

    cout << "Square object number of instances" << endl;
    afficher_compteur_carre();

    //============================================================================

    Rectangle r11(3, 4);
    Rectangle r22(5, 6);

    Rectangle r33(2, 3);
    Rectangle r44(4, 5);
    Square s11(2);
    Square s22(3);

    // Create pairs
    Pair<Rectangle> pairRect(r11, r22);
    Pair<Rectangle> pairRect2(r33, r44);
    Pair<Square> pairSquare(s11, s22);

    // Test getters
    cout << "Pair of rectangles areas: " << pairRect.getFirst().aire() 
         << " and " << pairRect.getSecond().aire() << endl;

    cout << "Pair of rectangles areas 2: " << pairRect2.getFirst().aire() 
         << " and " << pairRect2.getSecond().aire() << endl;

    cout << "Pair of squares areas: " << pairSquare.getFirst().aire() 
         << " and " << pairSquare.getSecond().aire() << endl;
    
    // Test aire difference
    cout << "Area difference between pairs: " 
         << aireDifference(pairRect, pairRect2) << endl; // We have declared that in this function the area difference requires the pairs to be of the same type


    return 0;
}