#include"header.h"
double Algorithme_de_Strong_Wolfe(double x,double (*fonc)(double),double epss,double eps_bar)
{
        while(Image(fonc,x) <= Image(fonc,0) + epss * x* derivee_premiere(0,fonc) )
        {
            x=x*2;
        }
        while (abs(derivee_premiere(x,fonc)) > eps_bar*abs(derivee_premiere(0,fonc)))
        {
           x=x/2;
        }
        while(Image(fonc,x)> Image(fonc,0)+ epss*x*derivee_premiere(0,fonc))
        {
           x=x/2;
        }
    return(x);
}
