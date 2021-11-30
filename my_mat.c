#include <stdio.h>
#include <math.h>
#include <string.h>
#include "my_mat.h"
#include <stdlib.h>
#define N 10

// ***** function A *****
void  a()
{
int x=0;
for (int i = 0; i < N; i++)
{
    for (int j = 0; j < N; j++)
    {
        scanf("%d ",&x);
        mat[i][j]=x;
    }
}
}
int C_help(int x, int y){
    int a[N][N];
    for (int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            a[i][j] = mat[i][j];
            if(i!=j&&a[i][j]==0)
            {
                a[i][j]=999999;
            }
            else if(i==j)
             a[i][j]=0;
        }   
    }
   for (int k = 0; k < N; k++) {
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        if (a[i][k] + a[k][j] < a[i][j])
            a[i][j] = a[i][k] + a[k][j];
      }
    }
  }
if (a[x][y]==0 || a[x][y]>=999999)
return -1;
 return a[x][y];
}
// // // ***** function B *****
void b()
{
    int i,j;
    scanf("%d",&i);
    scanf("%d",&j);
    if(C_help(i,j)!=-1 )
       printf("True\n");  
    else
       printf("False\n");
}
void c()
{
   int i,j;
    scanf("%d",&i);
    scanf("%d",&j);
     int a = C_help(i,j);
     printf("%d\n",a);
}