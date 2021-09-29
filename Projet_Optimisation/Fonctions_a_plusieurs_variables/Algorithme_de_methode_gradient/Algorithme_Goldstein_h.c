#include"header.h"

double Algorithme_Goldstein_h(double x,double t,double tol,double v[n],double (*fonc)(double*))
{
    double b=INF;
    double a=0;
    while(1)
    {
        if(Image_h(x,v,fonc) <= Image_h(0,v,fonc) + tol* x *  derivee_premiere_h(0,v,fonc))
        {   
            if(Image_h(x,v,fonc) >= Image_h(0,v,fonc) + (1 - tol)* x * derivee_premiere_h(0,v,fonc))
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
