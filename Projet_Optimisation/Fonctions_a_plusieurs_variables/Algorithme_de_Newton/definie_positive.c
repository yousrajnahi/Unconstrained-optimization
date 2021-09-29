#include"header.h"

int definie_positive(double **A)
{
    int i,j,k;
    if(A[0][0]<=0)
    {
        return(0);
    }
    else
    {
        for(k=2;k<=n;k++)
        {
            if(determinant(A,k)<=0)
            {
                return(0);
            }
        }
        return(1);
    }
}
