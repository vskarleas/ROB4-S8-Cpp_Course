// Class: 29/01/2025
// Author: Vasileios Filippos Skarleas

// Objectif: On veut declarer une structure rectangle avec 2 attributs (longeur et largeur) et 2 methodes (perimetre et aire) en C

#include <stdio.h>
#include <rectangle.h>

// Perimetre d'un rectangle
int perimetre(Rectangle r)
{
    return 2 * (r.longueur + r.largeur);
}

// Aire d'un rectangle
int aire(Rectangle r)
{
    return r.longueur * r.largeur;
}

// Test de la structure et des methodes
int main(int argc, char *argv[])
{
    Rectangle r = {5, 3};
    printf("Perimetre: %d\n", perimetre(r));
    printf("Aire: %d\n", aire(r));
    return 0;
}