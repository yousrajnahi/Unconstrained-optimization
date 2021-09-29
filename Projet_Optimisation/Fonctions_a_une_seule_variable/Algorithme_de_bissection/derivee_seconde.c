#include"header.h"
double derivee_seconde(double a,double (*fonc)(double))
{
 
    return((derivee_premiere(a+eps,fonc)-derivee_premiere(a,fonc))/eps);
}