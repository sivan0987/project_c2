#include <stdio.h>
#include <math.h>
#include <string.h>
#include "my_mat.h"
#include <stdlib.h>
#define N 10

int main(){ 
    char ch;
    scanf("%c",&ch);
    while(ch != 'D'){
        if(ch =='A')
        A();
        if(ch == 'B')
            B();
        if(ch == 'C')
            C();  
    scanf("%c",&ch);
    }
    return 0;
}