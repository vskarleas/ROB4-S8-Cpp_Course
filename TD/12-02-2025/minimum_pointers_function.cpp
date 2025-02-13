#include <cmath>
#include <iostream>

#include <cmath> 
using namespace std;

typedef double (*pointer_function)(double);  // this helps us to declare as a new type, the pointer function

// Liste des fonctions "calculables" 
double f1(double x) { return x*x;} 
double f2(double x) { return 1/x;} 
double f3(double x) { return sqrt (x) ;} 
double f4(double x) { return exp (x) ;}

// Generic minimum function that takes a function pointer
double minimum(double a, double b, pointer_function f) // do not understand the logic here
{
    double min(100000);
    for (double x = a; x < b; x += 0.01)
    {
        min = min < f(x) ? min : f(x);
    }
    return min;
}

int main()
{
    pointer_function f = nullptr;

    cout << "De quelle fonction voulez-vous chercher le minimum ?" << endl;
    cout << "1 -- X^2" << endl;
    cout << "2 -- 1/x" << endl;
    cout << "3 --racine de x " << endl;
    cout << "4 --exponentielle de x " << endl;
    int reponse;

    printf("Pick a choice: ");
    cin >> reponse;
    printf("\n");

    switch (reponse)
    {
        case 1:
            f = f1;
            break;

        case 2:
            f = f2;
            break;

        case 3:
            f = f3;
            break;

        case 4:
            f = f4;
            break;

        default:
            cout << "Choix invalide" << endl;
            break;
    }

    if (f != nullptr)
    {
        cout << "Le minimum de la fonction entre 3 et 4 est: " << minimum(3, 4, f) << endl;
    }
    else
    {
        printf("We couldn't process your request\n");
    }

    return 0;
}
