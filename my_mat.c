#define siz 10
#include <stdio.h>
#include "my_mat.h"
int mat[siz][siz];

int min(int x, int y){
    if(x==0 && y==0)
        return 0;
    if(x==0)
        return y;
    if(y==0)
        return y;
    if(x<y)
        return x;
    return y;
}

void A ( ){
    int num;
    for(int k=0 ; k<siz ; k++){
        for(int t=0 ; t<siz ; t++){
            scanf("%d",&num);
            mat[k][t]=num;
        }
    }
}

int C (){
    int mat2[siz][siz];
    int g,h;
    scanf("%d", &h);
    scanf("%d", &g);
    for (int k = 0; k <=siz; k++) {
		for (int i = 0; i < siz ; i++) {
			for (int j = 0; j < siz ; j++) {
				int x=mat[i][j];
				int y=mat[i][k]+mat[k][j];
                if(x==0 && y!=0 ){
                   mat2[i][j]=y;
                   }
                if(y==0&& x!=0){
                  mat2[i][j]=x;
                }
                else{
                    if(y<x)
				        mat2[i][j]=y;
                        else{
                            mat2[i][j]=x;
                        }}}}}
    if(mat2[h][g] == 0)
            return -1;
    return mat2[h][g];
    
}
void B(){
int mat2[siz][siz];
    int g,h;
    scanf("%d", &h);
    scanf("%d", &g);

    for (int k = 0; k <=siz; k++) {
		for (int i = 0; i < siz ; i++) {
			for (int j = 0; j < siz ; j++) {
				int x=mat[i][j];
				int y=mat[i][k]+mat[k][j];
                if(y<x)
				    mat2[i][j]=y;

				
			}
		}
	}
    if(mat2[g][h]==0)
        printf("False \n");
    printf("True \n");
}
// int main(){
//     A();
//     int s=C();
//     printf("%d", s);
//     return 0;
// }

