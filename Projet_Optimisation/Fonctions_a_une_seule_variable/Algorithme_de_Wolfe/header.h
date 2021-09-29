#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define eps 0.00001
#define INF 9999

double f(double x);
double Image(double (*fonc)(double),double x0);
double derivee_premiere(double a,double (*fonc)(double));
double Algorithme_de_Weak_Wolfe(double alpha_0,double (*fonc)(double),double r_0,double r_1);
double Algorithme_de_Strong_Wolfe(double alpha_0,double (*fonc)(double),double epss,double eps_bar);
