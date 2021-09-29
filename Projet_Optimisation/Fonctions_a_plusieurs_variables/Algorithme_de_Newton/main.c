#include"header.h"

int main()
{
    double x0[]={2,1};
    double *p;
    int i;
    p= Algorithme_de_Newton(x0, 0.01,g);
    for(i=0;i<n;i++)
    {
        printf("%lf \n",p[i]);
    }
    return(0);
}
 /*
  int i,j,k;
    double b[n];
    double **A;
    double **p;
    A = (double**)malloc((n)*sizeof(double*));
    for (i=0;i<n;i++)
    {
        A[i]=(double*)malloc((n)*sizeof(double));
    } 
    printf("\nEntrer les elements de la matrice:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Entrer A[%d][%d] element: ", i,j);
            scanf("%lf",&A[i][j]);
        }
    }
    
    printf("\n");
    p= inverse_matrice(A);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
             printf("%lf ",p[i][j]);
        }
       printf("\n");
            
    }
    return(0);
    /////////////////////
     double x0[]={0,0};
    double *p;
    int i;
    
    p= Algorithme_de_Newton(x0, 0.01,g);
    for(i=0;i<n;i++)
    {
        printf("%lf \n",p[i]);
    }
    //////////////////
     double x0[]={0,0};
    double **p;
    int i,j;
    double null[n];
    for(i=0;i<n;i++)
    {
        null[i]=0;
    }
    p=inverse_matrice(Hessien(g,x0));
   
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%lf \n",p[i][j]);
        }
      
 */