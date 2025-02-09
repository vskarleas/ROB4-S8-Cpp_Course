#ifndef _CLASS_RECTANGLE_H_
#define _CLASS_RECTANGLE_H_

namespace Geometry
{
    class Parallelograms // Creating a class Forme with is abstract, from which Rectangle will derive
    {
    public:
        virtual int aire() const = 0;      // Abstract classes can not be instantiated
        virtual int perimetre() const = 0; // Pure virtual functions have no implementation
    };

    class Rectangle : public Parallelograms
    {
    public:
        Rectangle(int longueur, int largeur);
        int aire() const;
        int perimetre() const;
        int getLongueur() const;
        int getLargeur() const;
        static int getCounter(); // being sttaic means that can be called without being dependent on an instance of the class (an object)
        bool operator==(const Rectangle &r);

    private:
        int longueur;
        int largeur;

        static int compteur;
    };

    void afficher_dimensions(const Rectangle &r);
    void afficher_aire_et_perimetre(const Rectangle &r);
    void afficher_compteur();

    class Square : public Parallelograms
    {
    public:
        Square(int cote);
        int aire() const;
        int perimetre() const;
        int getCote() const;
        static int getCounter();
        bool operator==(const Square &s);

    private:
        int cote;
        static int compteur;
    };

    void afficher_dimensions_carre(const Square &s);
    void afficher_aire_et_perimetre_carre(const Square &s);
    void afficher_compteur_carre();

    template <typename T> // Design pattern - Να το δείς και να το καταλάβεις
    class Pair
    {
        private:
            T first; 
            T second;

        public:
            Pair(T f, T s) : first(f), second(s) {}
            T getFirst() const { return first; }
            T getSecond() const { return second; }
    };

    // Air difference function
    template <typename T>
    int aireDifference(const Pair<T>& p1, const Pair<T>& p2) {
        int aire1 = p1.getFirst().aire() + p1.getSecond().aire();
        int aire2 = p2.getFirst().aire() + p2.getSecond().aire();
        return abs(aire1 - aire2);
    }
}

#endif // _CLASS_RECTANGLE_H_