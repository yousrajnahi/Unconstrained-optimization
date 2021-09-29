#include"header.h"
double Algorithme_de_la_fausse_position_h(double x0,double x1,double tol,double v[n],double (*fonc)(double*))
{
    double d,x,xx,q;
    x=x1;
    xx=x0;
    while(fabs(x-xx)>= tol || fabs(derivee_premiere_h(x,v,fonc))>= tol)
    {
        q=(xx-x) / (derivee_premiere_h(xx,v,fonc)-derivee_premiere_h(x,v,fonc));
        d= -derivee_premiere_h(x,v,fonc)*q;
        xx=x;
        x=x+d;
    }
    return(x);
}