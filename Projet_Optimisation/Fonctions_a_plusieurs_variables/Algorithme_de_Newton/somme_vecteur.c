#include"header.h"
double* somme_vecteur(double x[n],double y[n])
{
    double* x_y = (double*)malloc(n * sizeof(double*));
    int i;
    for(i=0;i<n;i++)
    {
        x_y[i]= x[i]+y[i];
    }
    return(x_y);
}