#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define eps 0.0001
#define n 2

extern double Q[n][n];
extern double b[n];


double derivee_partielle(double a[n],double (*fonc)(double*),int i);
double Image_n_dim(double (*fonc)(double*),double a[n]);
double* gradient(double (*fonc)(double*),double a[n]);
double* produit_vecteur_constante(double x[n],double a);
double* soustraction_vecteur(double x[n],double y[n]);
double* produit_matrice_vecteur(double M1[n][n],double x[n]);
double produit_vecteurh_vecteurv(double x[n],double y[n]);
double f_gradient_conjugue(double x[n]);
double* Algorithme_de_methode_gradient_conjugue(double x0[n], double tol,double (*fonc)(double*));
double* somme_vecteur(double x[n],double y[n]);
