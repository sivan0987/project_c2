#include <stdio.h>
#include <math.h>
#include <string.h>
#include "my_mat.h"
#include <stdlib.h>
#define N 10

void  A(){
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
int temp(int x, int y){
    int a[N][N];
    int g;
    int f;
    for (int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){

            a[i][j] = mat[i][j];
            // if(i!=j&&a[i][j]==0)
            // {
            //     a[i][j]=999999;
            // }
            // else if(i==j)
            //  a[i][j]=0;
        }   
    }
    
   for (int k = 0; k < N; k++) {
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
           g=a[i][k] + a[k][j];
           f=a[i][j];
          if(g==0 && f!=0) {
    			a[i][j]=f;
    			  }
           if(f==0 && g!=0) {
    				  a[i][j]=g;
    			  }
                if(g < f) {
    				a[i][j] = a[i][k] + a[k][j];
    			  }       
      }
      }
    }
  }
  //|| a[x][y]>=999999
if (a[x][y]==0 )
return -1;
 return a[x][y];
}

void B()
{
    int i,j;
    scanf("%d",&i);
    scanf("%d",&j);
    if(temp(i,j)!=-1 )
       printf("True\n");  
    else
       printf("False\n");
}
void C()
{
   int i,j;
    scanf("%d",&i);
    scanf("%d",&j);
     int a = temp(i,j);
     printf("%d\n",a);
}