#include <stdio.h>
#include <stdlib.h>
#include <math.h>

InitializeGrid(int size){
int n=2*size-1;
 int matrix[n][n];
 for (int i=0;i <n;i++){
   for (int j=0;j <n;j++)
   {
    if((i%2==0)&&(j%2==0)){
            //(even,even)
        matrix[i][j]=254;
        printf("%c",matrix[i][j]);}
    else{
        matrix[i][j]=32;
        printf(" %c ",matrix[i][j]);}


   }
