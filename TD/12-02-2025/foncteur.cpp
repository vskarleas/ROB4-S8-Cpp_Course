// Ajoutez une fonction template appliquerFoncteur qui utilise un foncteur
// pour appliquer une transformation à chaque élément d'une Pair. Par exemple,
// un foncteur pourrait augmenter ou réduire les dimensions des formes de la paire

#include <iostream>
#include <vector>

using namespace std;

template <typename T, typename U>
class Pair
{
public:
    Pair(T first, U second) : _first(first), _second(second) {} // Constructor

    T getFirst() const { return _first; }   // Getter for the first element
    U getSecond() const { return _second; } // Getter for the second element

    void setFirst(T first) { _first = first; }   // Setter for the first element
    void setSecond(U second) { _second = second; } // Setter for the second element

private:
    T _first;
    U _second;
};

template <typename T, typename U, typename F> // on n'a pad de type 
void applyFoncteur(Pair<T, U> &p, const F &f)
{
    // Apply the function to the elements of the pair
    p.setFirst(f(p.getFirst()));
    p.setSecond(f(p.getSecond()));
}

// Example usage
struct IncreaseByOne
{
    template <typename T>
    T operator()(T x) const { return x + 1; }
};

int main()
{
    Pair<int, int> p(1, 2);
    printf("Original pair: ");
    cout << p.getFirst() << " | " << p.getSecond() << endl;
    printf("\nAfter transformation: ");
    applyFoncteur(p, IncreaseByOne());
    cout << p.getFirst() << " | " << p.getSecond() << endl;

    return 0;
}