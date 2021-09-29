#include"header.h"

double derivee_partielle(double a[n],double (*fonc)(double*),int i)
{
    double a_eps[n];
    int j;
    for(j=0;j<n;j++)
    {
        if(j==i)
        {
            a_eps[j]=a[j]+eps;
        }
        else
        {
            a_eps[j]=a[j];
        }
        
    }  
    return((Image_n_dim(fonc,a_eps)-Image_n_dim(fonc,a))/eps);
}