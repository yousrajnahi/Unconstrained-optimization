#include"header.h"

double h(double alpha,double v[n],double (*fonc)(double*))
{
    return(fonc(soustraction_vecteur(v,Multiplication_vecteur_constante(gradient(fonc,v),alpha))));
}