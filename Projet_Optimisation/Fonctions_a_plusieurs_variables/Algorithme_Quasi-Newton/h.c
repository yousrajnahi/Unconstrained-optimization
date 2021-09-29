#include"header.h"

double h(double alpha,double v[n],double (*fonc)(double*))
{
    return(fonc(somme_vecteur(v,produit_vecteur_constante(v,alpha))));
}