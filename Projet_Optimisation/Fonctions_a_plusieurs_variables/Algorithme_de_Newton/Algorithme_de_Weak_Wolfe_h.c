#include"header.h"
double Algorithme_de_Weak_Wolfe_h(double x,double v[n],double (*fonc)(double*),double r_0,double r_1)
{
        while(derivee_premiere_h(x,v,fonc) < r_1 *  derivee_premiere_h(0,v,fonc) )
        {
            x=x*2;
        }
        while (Image_h(x,v,fonc) > Image_h(0,v,fonc)+r_0*x*derivee_premiere_h(0,v,fonc))
        {
           x=x/2;
        }
    return(x);
}