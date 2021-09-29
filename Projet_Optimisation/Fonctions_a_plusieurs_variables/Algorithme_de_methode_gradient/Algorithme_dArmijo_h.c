#include"header.h"

double Algorithme_dArmijo_h(double x, double epsilon, double etha,double v[n], double (*fonc)(double*))
{
        while(Image_h(x,v,fonc) <= Image_h(0,v,fonc)-x*epsilon* derivee_premiere_h(0,v,fonc))
        {
            x=etha*x;
        }
        while(Image_h(x,v,fonc) > Image_h(0,v,fonc)-x*epsilon* derivee_premiere_h(0,v,fonc))
        {
            x=1/etha *x;
        }
  

    return(x);  
}
