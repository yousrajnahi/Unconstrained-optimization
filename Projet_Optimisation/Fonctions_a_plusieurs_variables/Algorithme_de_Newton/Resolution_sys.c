#include"header.h"
double* Resolution_sys(double **A,double b[n])
{
    double *p;
    double **p1;
    double **p2;
    p1=Algorithme_de_Crout_L(A);
    p2=Algorithme_de_Crout_U(A);
    p=Resolution_sys_trio_inf(p1,b);
    return(Resolution_sys_trio_sup(p2,p));

}