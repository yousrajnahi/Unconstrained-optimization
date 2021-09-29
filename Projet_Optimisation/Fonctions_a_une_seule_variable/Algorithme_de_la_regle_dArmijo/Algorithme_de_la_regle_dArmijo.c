#include"header.h"

double Algorithme_de_la_regle_dArmijo(double x, double epsilon, double etha,double (*fonc)(double))
{
   
        while(Image(fonc, x) <= Image(fonc,0)-x*epsilon* derivee_premiere(0,fonc))
        {
            x=etha*x;
        }
        while(Image(fonc, x) > Image(fonc,0)-x*epsilon* derivee_premiere(0,fonc))
        {
            x=1/etha *x;
        }
  

    return(x);  
}
