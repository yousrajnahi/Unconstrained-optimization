#include"header.h"

double derivee_seconde_h(double a,double x[n],double (*fonc)(double*))//h''(a)
{
    return((derivee_premiere_h(a+eps,x,fonc)-derivee_premiere_h(a,x,fonc))/eps);
}

