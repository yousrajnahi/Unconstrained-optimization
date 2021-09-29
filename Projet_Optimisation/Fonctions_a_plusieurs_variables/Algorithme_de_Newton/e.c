#include"header.h"
double* e(int k)
{
    int i;
    double* x = (double*)malloc(n * sizeof(double*));
    for(i=0;i<n;i++)
    {
        if(i==k)
        {
            x[i]=1;
        }
        else
        {
            x[i]=0;
        }
    }
    return(x);
}