#include"header.h"
double* Algorithme_Quasi_Newton(double x0[n], double tol,double (*fonc)(double*))
{
    double* d = (double*)malloc(n * sizeof(double*));
    double* x = (double*)malloc(n * sizeof(double*));
    double* xx = (double*)malloc(n * sizeof(double*));
    double* gg = (double*)malloc(n * sizeof(double*));
    double* y = (double*)malloc(n * sizeof(double*));
    double **H,**I,**A,**B;
    int i,j;
    H = (double**)malloc((n)*sizeof(double*));
    I = (double**)malloc((n)*sizeof(double*));
    A = (double**)malloc((n)*sizeof(double*));
    B = (double**)malloc((n)*sizeof(double*));
    for (i=0;i<n;i++)
    {
        H[i]=(double*)malloc((n)*sizeof(double));
        I[i]=(double*)malloc((n)*sizeof(double));
        A[i]=(double*)malloc((n)*sizeof(double));
        B[i]=(double*)malloc((n)*sizeof(double));
        
    }
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
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
    double alpha, null[n];
    double *p;
    for(i=0;i<n;i++)
    {
        null[i]=0;
    }
    gg=gradient(fonc,x0);
    H=I;
    x=x0;
    while(Norme_euclidienne(gg)>tol)
    { 
        d=soustraction_vecteur(null,produit_matrice_vecteur(H,gg));
        alpha=Algorithme_de_bissection_h(0,1,tol,x,fonc);
        //alpha=Algorithme_de_Newton_h(1,tol,x,fonc); 
        //alpha=Algorithme_de_la_fausse_position_h(0,1,tol,x,fonc);**d modifier h **
        //alpha=Algorithme_Goldstein_h(0.1,2,0.4,x,fonc);
        //alpha=Algorithme_de_Weak_Wolfe_h(0.1,x,fonc,0.2,0.3);
        //alpha=Algorithme_de_Strong_Wolfe_h(0.1,x,fonc,0.2,0.3);
        //alpha=Algorithme_dArmijo_h(0.1,0.0001,2.0,x,fonc);
        xx=x;
        x=somme_vecteur(xx,produit_vecteur_constante(d,alpha));
        gg=gradient(fonc,x);
        H=DFP(x,xx,d,alpha,H,fonc);
        //H=BFGS(x,xx,d,alpha,H,fonc);
        //H=SR1(x,xx,d,alpha,H,fonc);
    
    }
    return(x);
    
}