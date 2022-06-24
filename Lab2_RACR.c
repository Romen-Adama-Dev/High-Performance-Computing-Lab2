#include<stdio.h>
#include<stdlib.h>
#include <time.h>


int main(){
    int row,col,i,j,a[10][10],count = 0;
    double max;
   srand(time(NULL));
   printf("Enter row\n");
   scanf("%d",&row);
   printf("Enter Column\n");
   scanf("%d",&col);
   
   double c = (((double)rand()*(max) / RAND_MAX) - max) *(-1);
   double b = (((double)rand()*(max) / RAND_MAX) - max) *(-1);
   i = c;
   j = b;

   printf("Elements are:\n");
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         printf("%d\t", a[i][j]);
      }
      printf("\n");
   }
   //checking sparse of matrix/
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         if(a[i][j] == 0)
            count++;
      }
   }
   if(count > ((row * col)/2))
      printf("Matrix is a sparse matrix \n");
   else
      printf("Matrix is not sparse matrix\n");
}
