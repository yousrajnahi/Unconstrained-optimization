#include"header.h"
double Algorithme_de_la_fausse_position(double x0,double x1,double tol,double (*fonc)(double))
{
    double d,x,xx,q;
    x=x1;
    xx=x0;
    while(fabs(x-xx)>= tol || fabs(derivee_premiere(x,fonc))>= tol)
    {
        q=((xx-x)) / (derivee_premiere(xx,fonc)-derivee_premiere(x,fonc));
        d= -derivee_premiere(x,fonc)*q;
        xx=x;;
        x=x+d;
    }
    return(x);
}  