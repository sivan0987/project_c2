#include <stdio.h>
#include <math.h>
#include <string.h>
#include "my_mat.h"
#include <stdlib.h>
#define size 10
#define MIN(a,b) (((a)<(b))?(a):(b))

void  A(){
int x=0;
for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
        scanf("%d ",&x);
        mat[i][j]=x;
    }
}
}
int temp(int x, int y) {
    int tempMat[size][size];
    for (int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            tempMat[i][j] = mat[i][j];
        }   
    }

   for (int k = 0; k < size; k++) {
    for (int i = 0; i < size; i++) {
      for (int j = 0; j < size; j++) {
        
        if(tempMat[i][j]!=0 && tempMat[i][k]!=0 && tempMat[k][j]!=0){
                    tempMat[i][j]=MIN(tempMat[i][j],tempMat[i][k]+tempMat[k][j]);
          }
        if(i==j){
                  tempMat[i][j]=0;
          }
        if(i!=j && tempMat[i][j]==0 && tempMat[i][k]!=0 && tempMat[k][j]!=0){
                    tempMat[i][j]=tempMat[i][k]+tempMat[k][j];
                }
        if(tempMat[i][j]!=0 && tempMat[i][k]==0 && tempMat[k][j]==0){
          tempMat[i][j]=tempMat[i][j];
        }
        
      }
    }
  }
  
    if (tempMat[x][y]==0 )
        return -1;
    return tempMat[x][y];
}


void C()
{
   int i,j;
    scanf("%d",&i);
    scanf("%d",&j);
     int ans = temp(i,j);
     printf("%d\n",ans);
}
void B() {
    int i,j;
    scanf("%d",&i);
    scanf("%d",&j);
    if(temp(i,j)!=-1 )
       printf("True\n");  
    else
       printf("False\n");
}