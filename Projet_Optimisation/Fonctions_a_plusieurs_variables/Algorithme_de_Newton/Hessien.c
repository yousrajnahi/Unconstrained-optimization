#include"header.h"

double** Hessien(double (*fonc)(double*),double a[n])
{
    double ** y;
    int i,j;
    y = (double**)malloc((n)*sizeof(double*));
    for (i=0;i<n;i++)
    {
        y[i]=(double*)malloc((n)*sizeof(double));
    }
   
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            y[i][j]=derivee_partielle_ordre2(a,fonc,i,j);

        }
    }
    return(y);
}