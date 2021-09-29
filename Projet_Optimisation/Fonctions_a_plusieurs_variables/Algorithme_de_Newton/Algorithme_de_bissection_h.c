#include"header.h"
double Algorithme_de_bissection_h(double a,double b,double tol,double v[n],double (*fonc)(double*))
{
    double c;
    if(a>=b)
    {
        printf("L'intervalle saisit est incorrect\n");
    }
    if((derivee_premiere_h(a,v,fonc) *  derivee_premiere_h(b,v,fonc) ) > 0)
    {
        printf("La solution optimale n'existe pas");
    }
    while(fabs(b-a)>tol)
    {
        c=(a+b)/2;
        if(derivee_premiere_h(c,v,fonc)<= 0)
        {
            if(derivee_premiere_h(c,v,fonc)== 0 &&  derivee_seconde_h(c,v,fonc) > 0)
            {
               break;
            }
            else
            {
                a=c;
            }
            
        }
        else
        {
            b=c;
        }
    }
    return(c);
}