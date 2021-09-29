#include"header.h"

double** inverse_matrice(double **A)
{
    int i,j;
    double ** y;
    double *p;
    y = (double**)malloc((n)*sizeof(double*));
    for (i=0;i<n;i++)
    {
        y[i]=(double*)malloc((n)*sizeof(double));
    }
    for(i=0;i<n;i++)
    {
        p=Resolution_sys(A,e(i));
        for(j=0;j<n;j++)
        {
           
           y[j][i]= p[j];
        }
    }
    return(y);
}