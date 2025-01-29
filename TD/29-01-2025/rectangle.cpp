#include "rectangle.hpp"

namespace Geometrie
{
    Rectangle::Rectangle(double l_, double h_)
    {
        l = l_;
        h = h_;
    }

    double Rectangle::aire()
    {
        return l*h;
    }

    double Rectangle::perimetre()
    {
        return 2*l + 2*h;
    }

    bool Rectangle::operator==(Rectangle& r2)
    {
        return aire() == r2.aire();
    }

    void afficherDimensions(Rectangle& r)
    {
        std::cout << "Largeur :" << r.getl() << " et hauteur :" << r.geth()<< std::endl;
    }
} // Geometrie