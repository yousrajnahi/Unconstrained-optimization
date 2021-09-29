#include"header.h"

double** produit_vecteurv_vecteurh(double x[n],double y[n])
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
            r[i][j]=x[i]*y[j];
        }
    }
    return(r);
}