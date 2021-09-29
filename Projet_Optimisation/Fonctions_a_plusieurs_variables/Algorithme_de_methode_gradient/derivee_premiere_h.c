#include"header.h"

double derivee_premiere_h(double a,double x[n],double (*fonc)(double*))//h'(a)
{
    return((Image_h(a+eps,x,fonc)-Image_h(a,x,fonc))/eps);
}

