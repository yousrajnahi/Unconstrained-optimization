#include"header.h"

double f_gradient_conjugue(double x[n]) 
{
    return(0.5*(produit_vecteurh_vecteurv(x, produit_matrice_vecteur(Q,x)))-produit_vecteurh_vecteurv(b,x));
}