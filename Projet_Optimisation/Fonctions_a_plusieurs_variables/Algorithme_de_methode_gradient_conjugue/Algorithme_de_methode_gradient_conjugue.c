#include"header.h"
double Q[n][n]={{8,-4},{-4,8}};
double b[n]={0,12};
double* Algorithme_de_methode_gradient_conjugue(double x0[n], double tol,double (*fonc)(double*))
{
    double null[n],alpha,beta;
    int i;
    for(i=0;i<n;i++)
    {
        null[i]=0;
    }
    double* x = (double*)malloc(n * sizeof(double*));
    double* d = (double*)malloc(n * sizeof(double*));
    x=x0;
    d=soustraction_vecteur(null,soustraction_vecteur(produit_matrice_vecteur(Q,x0),b));
    for(i=0;i<n;i++)
    {
        alpha= -(produit_vecteurh_vecteurv(soustraction_vecteur(produit_matrice_vecteur(Q,x),b),d))/(produit_vecteurh_vecteurv(d,produit_matrice_vecteur(Q,d)));  
        x= somme_vecteur(x,produit_vecteur_constante(d,alpha));
        beta=(produit_vecteurh_vecteurv(gradient(fonc,x),produit_matrice_vecteur(Q,d)))/(produit_vecteurh_vecteurv(d,produit_matrice_vecteur(Q,d)));
        d=somme_vecteur(soustraction_vecteur(null,gradient(fonc,x)),produit_vecteur_constante(d,beta));
        i++;
    }
    return(x);
}