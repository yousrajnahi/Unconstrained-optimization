#include"header.h"


int main()
{
    double *p;
    double x0[]={0,0};
    int i;
    int a;
    p=Algorithme_Quasi_Newton(x0, 0.01,g);
    for(i=0;i<n;i++)
    {
        printf("%lf\n",p[i]);
    }
 


    return(0);
}