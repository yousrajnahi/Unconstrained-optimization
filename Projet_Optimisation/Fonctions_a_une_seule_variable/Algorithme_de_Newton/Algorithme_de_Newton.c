#include"header.h"
double Algorithme_de_Newton(double x0, double tol,double (*fonc)(double))
{
    double x=x0,xx,d;
    do{
        if(derivee_seconde(x,fonc)==0)
        {
            printf("Erreur\n");
            return(0);
        }
        d=-( derivee_premiere(x,fonc)) /derivee_seconde(x,fonc);
        xx=x;
        x=x+d;

    }while(fabs(x-xx)> tol || fabs(derivee_premiere(x,fonc))>tol);
   
    return(x);
}