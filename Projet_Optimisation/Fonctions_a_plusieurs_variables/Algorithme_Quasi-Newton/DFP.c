#include"header.h"

double** DFP(double x[n],double xx[n],double d[n],double alpha,double **H,double (*fonc)(double*))
{
    double* y = (double*)malloc(n * sizeof(double*));
    y=soustraction_vecteur(gradient(fonc,x),gradient(fonc,xx));
    double **A,**B;
    int i,j;
    A = (double**)malloc((n)*sizeof(double*));
    B = (double**)malloc((n)*sizeof(double*));
    
    for (i=0;i<n;i++)
    {
        A[i]=(double*)malloc((n)*sizeof(double));
        B[i]=(double*)malloc((n)*sizeof(double));
        
    }
    A= produit_matrice_constante(produit_matrice_constante(produit_vecteurv_vecteurh(d,d),pow(alpha,2)), 1/(alpha*produit_vecteurh_vecteurv(d,y)));
    B= produit_matrice_constante(produit_vecteurv_vecteurh(produit_matrice_vecteur(H,y),produit_matrice_vecteur(H,y)),-1/(produit_vecteurh_vecteurv(y,produit_matrice_vecteur(H,y))));
    H=somme_matrice(H,somme_matrice(A,B));
    return(H);
}