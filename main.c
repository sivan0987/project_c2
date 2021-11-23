#include <stdio.h>
#include "my_mat.h"
int main()
{
char a;
scanf("%c",  &a);
while (a!='D')
{
    if(a=='A'){
      A();
    }
    if(a=='B'){
        B();
    }
    if(a=='C'){
        int answer =C();
        printf("%d \n", answer);
       
    }

    scanf("%c",  &a);

}
return 0;
}




