#include"header.h"

double h(double alpha,double v[n],double (*fonc)(double*))
{
    return(fonc(soustraction_vecteur(v,produit_vecteur_constante(produit_matrice_vecteur(inverse_matrice(Hessien(fonc,v)),gradient(fonc,v)) ,alpha))));
}