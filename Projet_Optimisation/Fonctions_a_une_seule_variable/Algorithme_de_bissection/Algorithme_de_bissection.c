#include"header.h"
double Algorithme_de_bissection(double a,double b,double tol,double (*fonc)(double))
{
    double c;
    if(a>=b)
    {
        printf("L'intervalle saisit est incorrect\n");
        return(0);
    }
    if(( derivee_premiere(a,fonc) * derivee_premiere(b,fonc)) > 0)
    {
        printf("La solution optimale n'existe pas");
        return(0);
    }
    while(fabs(b-a)>tol)
    {
        c=(a+b)/2;
        if(derivee_premiere(c,fonc)<= 0)
        {
            if(derivee_premiere(c,fonc)== 0 &&  derivee_seconde(c,fonc) > 0)
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