#include"header.h"
double g(double x[n])//g(x[n])
{
    return((pow(x[0],2)+pow(x[1],2))/2);
    //x[1]*x[2]+x[2]*x[0]-x[0]*x[1]
    //
    //15*x[0]+2*pow(x[1],3)-3*x[0]*pow(x[2],2)
    //4*x[0]*pow(x[1],2)-(pow(x[1],3))*x[2]+pow(x[2],2)
    //pow(x[0],2)+x[0]*(1-x[1])+pow(x[1],2)-x[1]*x[2]+pow(x[2],2)+x[2]
}