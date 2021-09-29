#include"header.h"

double derivee_partielle_ordre2(double a[n],double (*fonc)(double*),int i,int j)
{
    double a_eps[n];
    int k;

    for(k=0;k<n;k++)
    {
        if(k==i)
        {
            a_eps[k]=a[k]+eps;
                    
        }
        else
        {
            a_eps[k]=a[k];
                    
        }
                
    }  
   
    return((derivee_partielle(a_eps,fonc,j)-derivee_partielle(a,fonc,j))/(eps));
 }