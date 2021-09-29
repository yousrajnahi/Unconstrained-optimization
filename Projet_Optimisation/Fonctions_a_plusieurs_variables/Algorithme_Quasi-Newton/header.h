#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define eps 0.001
#define n 2
#define INF 999

double* Algorithme_Quasi_Newton(double x0[n], double tol,double (*fonc)(double*));
double Norme_euclidienne(double x[n]);
double* produit_matrice_vecteur(double **M1,double x[n]);
double* produit_vecteur_constante(double x[n],double a);
double produit_vecteurh_vecteurv(double x[n],double y[n]);
double** produit_vecteurv_vecteurh(double x[n],double y[n]);
double* somme_vecteur(double x[n],double y[n]);
double* soustraction_vecteur(double x[n],double y[n]);
double** produit_matrice_constante(double **M,double a);
double** somme_matrice(double **M1,double **M2);
double* gradient(double (*fonc)(double*),double a[n]);
double Image_n_dim(double (*fonc)(double*),double a[n]);
double derivee_partielle(double a[n],double (*fonc)(double*),int i);
double g(double x[n]);
double Algorithme_de_la_fausse_position_h(double x0,double x1,double tol,double v[n],double (*fonc)(double*));
double derivee_premiere_h(double a,double x[n],double (*fonc)(double*));
double Image_h(double a,double x[n],double (*fonc)(double*));
double h(double alpha,double v[n],double (*fonc)(double*));
double derivee_premiere_h(double a,double x[n],double (*fonc)(double*));
double Algorithme_de_bissection_h(double a,double b,double tol,double v[n],double (*fonc)(double*));
double derivee_seconde_h(double a,double x[n],double (*fonc)(double*));
double Algorithme_de_Newton_h(double x0, double tol,double v[n],double (*fonc)(double*));
double** DFP(double x[n],double xx[n],double d[n],double alpha,double **H,double (*fonc)(double*));
double** BFGS(double x[n],double xx[n],double d[n],double alpha,double **H,double (*fonc)(double*));
double** SR1(double x[n],double xx[n],double d[n],double alpha,double **H,double (*fonc)(double*));
double Algorithme_Goldstein_h(double x,double t,double tol,double v[n],double (*fonc)(double*));
double Algorithme_dArmijo_h(double x, double epsilon, double etha,double v[n], double (*fonc)(double*));
double Algorithme_de_Weak_Wolfe_h(double x,double v[n],double (*fonc)(double*),double r_0,double r_1);
double Algorithme_de_Strong_Wolfe_h(double x,double v[n],double (*fonc)(double*),double epss,double eps_bar);
