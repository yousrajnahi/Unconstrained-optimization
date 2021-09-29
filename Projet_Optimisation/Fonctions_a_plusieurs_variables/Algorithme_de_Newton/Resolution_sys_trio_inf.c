#include"header.h"
double *Resolution_sys_trio_inf(double** A,double b[n])
{
    int i,j;
    double s;
    double* x = (double*)malloc(n * sizeof(double*));
    x[0]=b[0]/A[0][0];
    for(i=1;i<n;i++)
    {
        s=0;
        for(j=0;j<i;j++)
        {
            s=s+A[i][j]*x[j];
        }
        x[i]=(b[i]-s)/A[i][i];
    }
    return(x);
}