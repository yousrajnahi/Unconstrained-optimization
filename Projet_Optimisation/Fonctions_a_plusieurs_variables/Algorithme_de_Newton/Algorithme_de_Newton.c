#include"header.h"
double* Algorithme_de_Newton(double x0[n], double tol,double (*fonc)(double*))
{
    double* d0 = (double*)malloc(n * sizeof(double*));
    double* d = (double*)malloc(n * sizeof(double*));
    double* x = (double*)malloc(n * sizeof(double*));
    double* xx = (double*)malloc(n * sizeof(double*));
    double **p;
 
    int i,j;
    double null[n],alpha;
    for(i=0;i<n;i++)
    {
        null[i]=0;
    }
    d0=soustraction_vecteur(null,produit_matrice_vecteur(inverse_matrice(Hessien(fonc,x0)),gradient(fonc,x0)));
    d=d0;
    x=x0;
    while(Norme_euclidienne(d)>tol)
    {
        //alpha=Algorithme_de_Newton_h(1,tol,x,fonc); 
        //alpha=Algorithme_de_la_fausse_position_h(0,1,tol,x,fonc);
        //alpha=Algorithme_Goldstein_h(0.1,2,0.4,x,fonc);
        //alpha=Algorithme_de_Weak_Wolfe_h(0.1,x,fonc,0.2,0.3);
        //alpha=Algorithme_de_Strong_Wolfe_h(0.1,x,fonc,0.2,0.3);
        //alpha=Algorithme_dArmijo_h(0.1,0.0001,2.0,x,fonc);
        alpha=Algorithme_de_bissection_h(0,1,tol,x,fonc);
        xx=x;
        x=somme_vecteur(xx,produit_vecteur_constante(d,alpha));
        if(definie_positive(Hessien(fonc,x))==1)
        {
            d=soustraction_vecteur(null,produit_matrice_vecteur(inverse_matrice(Hessien(fonc,x)),gradient(fonc,x)));
        }
        else
        {
            p=Hessien(fonc,xx);
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(i==j)
                    {
                        p[i][j]=p[i][j]+eps;
                    }
                }
            }
            d=soustraction_vecteur(null,produit_matrice_vecteur(inverse_matrice(p),gradient(fonc,xx)));
        }
    

    }
    return(x);
}
    
    