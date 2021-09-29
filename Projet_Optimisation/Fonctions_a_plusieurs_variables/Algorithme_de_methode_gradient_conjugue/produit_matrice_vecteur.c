#include"header.h"
double* produit_matrice_vecteur(double M1[n][n],double x[n])
{
    int i,k;
    double* vect = (double*)malloc(n * sizeof(double*));
    for(i=0;i<n;i++)
    {
       vect[i]=0;
        for(k=0;k<n;k++)
        {
            vect[i]=vect[i]+M1[i][k]*x[k];
        }
    }

    return(vect);
}