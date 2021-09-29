#include"header.h"

double** somme_matrice(double **M1,double **M2)
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
            r[i][j]=M1[i][j]+M2[i][j];
        }
    }
    return(r);
}