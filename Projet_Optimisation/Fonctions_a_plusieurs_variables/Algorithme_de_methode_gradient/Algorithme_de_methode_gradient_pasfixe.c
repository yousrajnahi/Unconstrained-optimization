#include"header.h"

double* Algorithme_de_methode_gradient_pasfixe(double x0[n], double tol,double (*fonc)(double*))
{
    double* x = (double*)malloc(n * sizeof(double*));
    double alpha;
    x=x0;
    while(Norme_euclidienne(gradient(fonc,x))>tol)
    {
        alpha=Algorithme_de_Newton_h(0,tol,x,fonc); 
        //alpha=Algorithme_de_la_fausse_position_h(0,1.5,tol,x,fonc);
        //alpha=Algorithme_de_bissection_h(0,1.5,tol,x,fonc);
        x=soustraction_vecteur(x,Multiplication_vecteur_constante(gradient(fonc,x),alpha));
       
    }
    return(x);
}
