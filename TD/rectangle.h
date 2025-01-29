#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

typedef struct Rectangle
{
    int longueur;
    int largeur;
} Rectangle;

int aire(Rectangle r);

int perimetre(Rectangle r);

#endif