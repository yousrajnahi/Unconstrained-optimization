#include"header.h"

double Image_n_dim(double (*fonc)(double*),double a[n])
{
    return(fonc(a));
}