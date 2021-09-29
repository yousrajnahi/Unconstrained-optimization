#include"header.h"

double* gradient(double (*fonc)(double*),double a[n])
{
    double* grad = (double*)malloc(n * sizeof(double*));
    int i;
    for(i=0;i<n;i++)
    {
        grad[i]=derivee_partielle(a,fonc,i);
    }
    return(grad);
}