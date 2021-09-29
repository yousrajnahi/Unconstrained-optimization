#include"header.h"

double* Multiplication_vecteur_constante(double x[n],double a)
{
    double* ax = (double*)malloc(n * sizeof(double*));
    int i;
    for(i=0;i<n;i++)
    {
        ax[i]=x[i]*a;
    }
    return(ax);
}