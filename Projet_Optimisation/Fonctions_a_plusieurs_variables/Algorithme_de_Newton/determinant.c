#include"header.h"
double determinant(double **matrix,int a)
{ 
   int x,i,j;
   double det = 0;
   double ** submatrix;
    submatrix = (double**)malloc((n)*sizeof(double*));
    for (i=0;i<n;i++)
    {
        submatrix[i]=(double*)malloc((n)*sizeof(double));
    } 
   if (a == 2)
   {
       return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
   }
   else 
   {
      for (x = 0; x < a; x++) 
      {
         int subi = 0;
         for (i = 1; i < a; i++) 
         {
            int subj = 0;
            for (j = 0; j < a; j++) 
            {
               if (j == x)
               continue;
               submatrix[subi][subj] = matrix[i][j];
               subj++;
            }
            subi++;
         }
         det = det + (pow(-1, x) * matrix[0][x] * determinant(submatrix, a - 1));
      }
   }
   return det;
}