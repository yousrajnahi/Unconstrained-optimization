#include"header.h"

double** produit_matrice_constante(double **M,double a)
{
    double ** r;
    int i,j;
    r = (double**)malloc((n)*sizeof(double*));
    for (i=0;i<n;i++)
    {
        r[i]=(double*)malloc((n)*sizeof(double));
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            r[i][j]=M[i][j]*a;
        }
    }
    return(r);
}