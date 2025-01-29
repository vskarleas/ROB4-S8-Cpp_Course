#ifndef _CLASS_RECTANGLE_H_
#define _CLASS_RECTANGLE_H_

namespace Geometry
{
    class Rectangle
    {
    public:
        Rectangle(int longueur, int largeur);
        int aire();
        int perimetre();
        int getLongueur();
        int getLargeur();
        bool operator==(Rectangle& r);

    private:
        int longueur;
        int largeur;
    };

    void afficher_dimensions(Rectangle& r);
    void afficher_aire_et_perimetre(Rectangle& r);
}

#endif // _CLASS_RECTANGLE_H_