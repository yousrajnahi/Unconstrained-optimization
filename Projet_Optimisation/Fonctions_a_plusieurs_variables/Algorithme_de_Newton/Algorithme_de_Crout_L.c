#include"header.h"

double **Algorithme_de_Crout_L(double **A)
{
    int i,j,k;
    double ** M;
    double ** LL;
    LL = (double**)malloc((n)*sizeof(double*));
    for (i=0;i<n;i++)
    {
        LL[i]=(double*)malloc((n)*sizeof(double));
    } 
    M = (double**)malloc((n+1)*sizeof(double*));
    for (i=0;i<n+1;i++)
    {
        M[i]=(double*)malloc((n+1)*sizeof(double));
    } 
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            M[i][j]=A[i-1][j-1];

        }
    }
    
    double I[n+1][n+1];
    double ** U; 
    double ** L;
    L = (double**)malloc((n+1)*sizeof(double*));
    U = (double**)malloc((n+1)*sizeof(double*));
    for (i=0;i<n+1;i++)
    {
        L[i]=(double*)malloc((n+1)*sizeof(double));
        U[i]=(double*)malloc((n+1)*sizeof(double));
    } 
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==j)
            {
                I[i][j]=1;
            }
            else
            {
                I[i][j]=0;
            }
               
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            U[i][j]=I[i][j];
            L[i][j]=I[i][j];     
        }
    }
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=j; i++)
        {
            U[i][j]=M[i][j];
            for(k=1; k<=i-1; k++)
                U[i][j]-=L[i][k]*U[k][j];
        }
        for(i=j+1; i<=n; i++)
        {
            L[i][j]=M[i][j];
             for(k=1; k<=j-1; k++)
                L[i][j]-=L[i][k]*U[k][j];
            L[i][j]/= (U[j][j]);
            
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            LL[i][j]=L[i+1][j+1];

        }
    }
  return(LL);
}