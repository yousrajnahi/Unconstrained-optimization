#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define eps 0.0001
#define n 2
#define INF 999


double derivee_partielle(double a[n], double (*fonc)(double*), int i);
double g(double x[n]);
double* gradient(double (*fonc)(double*), double a[n]);
double Norme_euclidienne(double x[n]);
double* Algorithme_de_methode_gradient_pasfixe(double x0[n], double tol, double (*fonc)(double*));
double h(double alpha, double v[n], double (*fonc)(double*));
double* Multiplication_vecteur_constante(double x[n], double a);
double* soustraction_vecteur(double x[n], double y[n]);
double Image_h(double a, double x[n], double (*fonc)(double*));
double Image_n_dim(double (*fonc)(double*),double a[n]);
double derivee_premiere_h(double a, double x[n], double (*fonc)(double*));
double derivee_seconde_h(double a, double x[n], double (*fonc)(double*));
double Algorithme_de_Newton_h(double x0, double tol, double v[n], double (*fonc)(double*));
double Algorithme_de_la_fausse_position_h(double x0, double x1, double tol, double v[n], double (*fonc)(double*));
double Algorithme_de_bissection_h(double a, double b, double tol, double v[n], double (*fonc)(double*));
double Algorithme_Goldstein_h(double x,double t,double tol,double v[n],double (*fonc)(double*));
double* Algorithme_de_methode_gradient_pasapproché(double x0[n], double tol,double (*fonc)(double*));
double Algorithme_dArmijo_h(double x, double epsilon, double etha,double v[n], double (*fonc)(double*));
double Algorithme_de_Weak_Wolfe_h(double x,double v[n],double (*fonc)(double*),double r_0,double r_1);
double Algorithme_de_Strong_Wolfe_h(double x,double v[n],double (*fonc)(double*),double epss,double eps_bar);
