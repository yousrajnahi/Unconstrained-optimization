#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define eps 0.001
#define n 2
#define INF 999



double **Algorithme_de_Crout_L(double **A);
double **Algorithme_de_Crout_U(double **A);
double *Resolution_sys_trio_inf(double **A,double *b);
double* Resolution_sys_trio_sup(double **A,double *b);
double* Resolution_sys(double **A,double *b);
double** inverse_matrice(double **A);
double* e(int k);
double Algorithme_de_bissection_h(double a,double b,double tol,double v[n],double (*fonc)(double*));
double Algorithme_de_la_fausse_position_h(double x0,double x1,double tol,double v[n],double (*fonc)(double*));
double Algorithme_de_Newton_h(double x0, double tol,double v[n],double (*fonc)(double*));
double* Algorithme_de_Newton(double x0[n], double tol,double (*fonc)(double*));
int definie_positive(double **A);
double derivee_partielle_ordre2(double a[n],double (*fonc)(double*),int i,int j);
double derivee_partielle(double a[n],double (*fonc)(double*),int i);
double derivee_premiere_h(double a,double x[n],double (*fonc)(double*));
double derivee_seconde_h(double a,double x[n],double (*fonc)(double*));
double determinant(double **matrix,int a);
double* gradient(double (*fonc)(double*),double a[n]);
double** Hessien(double (*fonc)(double*),double a[n]);
double Image_n_dim(double (*fonc)(double*),double a[n]);
double Norme_euclidienne(double x[n]);
double* produit_matrice_vecteur(double **M1,double x[n]);
double* produit_vecteur_constante(double x[n],double a);
double* soustraction_vecteur(double x[n],double y[n]);
double g(double x[n]);
double Image_h(double a,double x[n],double (*fonc)(double*));
double h(double alpha,double v[n],double (*fonc)(double*));
double* somme_vecteur(double x[n],double y[n]);
double Algorithme_Goldstein_h(double x,double t,double tol,double v[n],double (*fonc)(double*));
double Algorithme_dArmijo_h(double x, double epsilon, double etha,double v[n], double (*fonc)(double*));
double Algorithme_de_Weak_Wolfe_h(double x,double v[n],double (*fonc)(double*),double r_0,double r_1);
double Algorithme_de_Strong_Wolfe_h(double x,double v[n],double (*fonc)(double*),double epss,double eps_bar);



