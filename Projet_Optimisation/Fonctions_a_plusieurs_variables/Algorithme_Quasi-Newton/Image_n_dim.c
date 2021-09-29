#include"header.h"

double Image_n_dim(double (*fonc)(double*),double a[n])//f(a,b)
{
    return(fonc(a));
}