#include"header.h"

double produit_vecteurh_vecteurv(double x[n],double y[n])
{
    double s=0;
    int i;
    for(i=0;i<n;i++)
    {
        s=s+x[i]*y[i];
    }
    return(s);

}