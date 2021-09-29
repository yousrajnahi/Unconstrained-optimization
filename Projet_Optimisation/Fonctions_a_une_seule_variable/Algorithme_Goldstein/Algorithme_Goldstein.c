#include"header.h"

double Algorithme_Goldstein(double x,double t,double tol,double (*fonc)(double))
{
    double b=INF;
    double a=0;
    while(1)
    {
        if(Image(fonc,x) <= Image(fonc,0) + tol* x *  derivee_premiere(0,fonc))
        {   
            if(Image(fonc,x) >= Image(fonc,0) + (1 - tol)* x * derivee_premiere(0,fonc))
            {
               break;
            }
            a=x;
           if(b<INF)
           {
               x= (a+b)/2;
           }
           else
           {
               x= t * x;
           }
        }
        else
        {
            b = x;
            x= (a+b)/2;
        }
    }
    return(x);
}
