#include"header.h"
double Algorithme_de_Weak_Wolfe(double x,double (*fonc)(double),double r_0,double r_1)
{
        while(derivee_premiere(x,fonc) < r_1 *  derivee_premiere(0,fonc) )
        {
            x=x*2;
        }
        while (Image(fonc,x) > Image(fonc,0)+r_0*x*derivee_premiere(0,fonc))
        {
           x=x/2;
        }
    return(x);
}