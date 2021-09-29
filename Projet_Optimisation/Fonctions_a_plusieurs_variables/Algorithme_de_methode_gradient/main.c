#include"header.h"

int main()
{ 
    double *p; 
    double a[n]={1,1};
    //p=Algorithme_de_methode_gradient_pasfixe(a,0.001,g);
    p=Algorithme_de_methode_gradient_pasapproché(a,0.001,g);
    for(int i=0;i<n;i++)
    {
        printf("%f\n",p[i]);
    }
    return(0); 
}