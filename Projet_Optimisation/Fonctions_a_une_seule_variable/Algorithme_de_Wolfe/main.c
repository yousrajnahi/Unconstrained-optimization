#include"header.h"
int main()
{
    printf("%lf \n",f(Algorithme_de_Weak_Wolfe(0.1,f,0.2,0.3)));
    printf("%lf \n",f(Algorithme_de_Strong_Wolfe(0.1,f,0.2,0.3)));
    return(0);
}

