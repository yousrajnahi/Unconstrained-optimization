#include"header.h"
double Algorithme_de_Strong_Wolfe_h(double x,double v[n],double (*fonc)(double*),double epss,double eps_bar)
{
        while(Image_h(x,v,fonc) <= Image_h(0,v,fonc) + epss * x*  derivee_premiere_h(0,v,fonc) )
        {
            x=x*2;
        }
        while (abs(derivee_premiere_h(x,v,fonc)) > eps_bar*abs( derivee_premiere_h(0,v,fonc)))
        {
           x=x/2;
        }
        while(Image_h(x,v,fonc)> Image_h(0,v,fonc)+ epss*x* derivee_premiere_h(0,v,fonc))
        {
           x=x/2;
        }
    return(x);
}
