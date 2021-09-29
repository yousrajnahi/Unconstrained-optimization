#include"header.h"
double Algorithme_de_Newton_h(double x0, double tol,double v[n],double (*fonc)(double*))
{
    double x=x0,xx,d;
    do{
       /* if(derivee_seconde_h(x,v,fonc)==0)
        {
            printf("Erreur\n");
            break;
        }*/
        d=-(derivee_premiere_h(x,v,fonc)/ 1.0) /derivee_seconde_h(x,v,fonc);
        xx=x;
        x=x+d;
    }while(fabs(x-xx)> tol || fabs(derivee_premiere_h(x,v,fonc))>tol );
   
    return(x);
}