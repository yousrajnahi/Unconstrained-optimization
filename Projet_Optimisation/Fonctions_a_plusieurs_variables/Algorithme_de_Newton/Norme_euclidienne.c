#include"header.h"
double Norme_euclidienne(double x[n])
{
    int i;
    double s=0;
    for(i=0;i<n;i++)
    {
        s=s +pow(x[i],2);
    }
    return(sqrt(s));
}