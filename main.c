#include <stdio.h>
#include "my_mat.h"

int main()
{
char a;
scanf("%c",  &a);
while (a!='D')
{
    if(a=='A'){
      a();
    }
    if(a=='B'){
        b();
    }
    if(a=='C'){
        c();
    }
    scanf("%c",  &a);

}
return 0;
}