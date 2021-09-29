#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define eps 0.00001

double f(double x);
double Image(double (*fonc)(double),double x0);
double derivee_premiere(double a,double (*fonc)(double));
double Algorithme_de_la_regle_dArmijo(double x, double epsilon, double etha,double (*fonc)(double));
