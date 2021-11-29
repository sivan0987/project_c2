#define siz 10
#include <stdio.h>
#include "my_mat.h"
int mat[siz][siz];

void A ( ){
    int num;
    for(int k=0 ; k<siz ; k++){
        for(int t=0 ; t<siz ; t++){
            scanf("%d",&num);
            mat[k][t]=num;
        }
    }
}
int temp(int i , int j){
    int mat2[10][10];
    for (int k = 0; k < siz; k++) {
    for (int i = 0; i < siz; i++) {
      for (int j = 0; j < siz; j++) {
        if (mat[i][k] + mat[k][j] < mat[i][j]){
                if(mat[i][k] + mat[k][j] !=0 ){
                       mat2[i][j] = mat[i][k] + mat[k][j];}
                       }
      }}}
    if(mat2[i][j]==0)return -1;
    return mat2[i][j];
}
int C (){
    int i,j;
    scanf("%d", &i);
    scanf("%d", &j);
    int ans = temp(i,j);
    return ans;

}
void B(){
    int i,j;
    scanf("%d", &i);
    scanf("%d", &j);
    int ans=temp(i,j);
    if(ans==-1)
        printf("False\n");
    else
        printf("True\n");
}

