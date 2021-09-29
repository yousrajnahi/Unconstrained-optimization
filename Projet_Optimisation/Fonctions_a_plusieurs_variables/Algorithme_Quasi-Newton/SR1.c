#include"header.h"

double** SR1(double x[n],double xx[n],double d[n],double alpha,double **H,double (*fonc)(double*))
{
    double* y = (double*)malloc(n * sizeof(double*));
    double* temp = (double*)malloc(n * sizeof(double*));
    y=soustraction_vecteur(gradient(fonc,x),gradient(fonc,xx));
    double **A;
    int i,j;
    A = (double**)malloc((n)*sizeof(double*));

    
    for (i=0;i<n;i++)
    {
        A[i]=(double*)malloc((n)*sizeof(double));
    }
    temp=soustraction_vecteur(y,produit_matrice_vecteur(H,produit_vecteur_constante(d,alpha)));
    A=produit_matrice_constante(produit_vecteurv_vecteurh(temp,temp),1/produit_vecteurh_vecteurv(produit_vecteur_constante(d,alpha),temp));
    H=somme_matrice(H,A);
    return(H);
}