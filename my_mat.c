#include <stdio.h>
#include <math.h>
#include <string.h>
#include "my_mat.h"
#include <stdlib.h>
#define size 10

void  a(){
int x=0;
for (int i = 0; i < size; i++)
{for (int j = 0; j < size; j++)
    {
        scanf("%d ",&x);
        mat[i][j]=x;
    }
}
}
int temp(int x, int y){
    int mat2[size][size];
    for (int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            mat2[i][j] = mat[i][j];
            if(i!=j&&mat2[i][j]==0)
            {
                mat2[i][j]=99999999;
            }
            else if(i==j)
             mat2[i][j]=0;
        }   
    }
   for (int k = 0; k < size; k++) {
    for (int i = 0; i < size; i++) {
      for (int j = 0; j < size; j++) {
        if (mat2[i][k] + mat2[k][j] < mat2[i][j])
            mat2[i][j] = mat2[i][k] + mat2[k][j];
      }
    }
  }
if (mat2[x][y]==0 || mat2[x][y]>=99999999)
return -1;
 return mat2[x][y];
}

void b()
{
    int i,j;
    scanf("%d",&i);
    scanf("%d",&j);
    if(temp(i,j)!=-1 )
       printf("True\n");  
    else
       printf("False\n");
}
void c()
{
   int i,j;
    scanf("%d",&i);
    scanf("%d",&j);
     int a = temp(i,j);
     printf("%d\n",a);
}