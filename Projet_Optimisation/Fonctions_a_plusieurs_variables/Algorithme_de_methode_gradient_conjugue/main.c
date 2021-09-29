#include"header.h"

int main()
{
    double x0[]={-0.5,1};
    double *p;
    p=Algorithme_de_methode_gradient_conjugue(x0,0.001,f_gradient_conjugue);
    for(int i=0;i<n;i++)
    {
        printf("%f\n",p[i]);
    }
    return(0);

}
  
