#include"header.h"
double* Resolution_sys_trio_sup(double** A,double b[n])
{
    int i,j;
    double s;
    double* x = (double*)malloc(n * sizeof(double*));
    x[n-1]=b[n-1]/A[n-1][n-1];

    for(i=n-2;i>-1;i--)
    {   
        s=0;
        for(j=i+1;j<n;j++)
        {
            s=s+A[i][j]*x[j];
        }
        x[i]=(b[i]-s)/A[i][i];
    
    }
  return(x);
  
}