#include"header.h"

double* Algorithme_de_methode_gradient_pasapproché(double x0[n], double tol,double (*fonc)(double*))
{
    double* x = (double*)malloc(n * sizeof(double*));
    double alpha;
    x=x0;
    while(Norme_euclidienne(gradient(fonc,x))>tol)
    {
        //alpha=Algorithme_Goldstein_h(0.1,2,0.4,x,fonc);
        //alpha=Algorithme_de_Weak_Wolfe_h(0.1,x,fonc,0.2,0.3);
        //alpha=Algorithme_de_Strong_Wolfe_h(0.1,x,fonc,0.2,0.3);
        alpha=Algorithme_dArmijo_h(0.1,0.0001,2.0,x,fonc);
        x=soustraction_vecteur(x,Multiplication_vecteur_constante(gradient(fonc,x),alpha));
       
    }
    return(x);
}