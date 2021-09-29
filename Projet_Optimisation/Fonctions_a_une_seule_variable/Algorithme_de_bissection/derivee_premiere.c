#include"header.h"

double derivee_premiere(double a,double (*fonc)(double))
{
    return((Image(fonc,a+eps)-Image(fonc,a))/eps);
}