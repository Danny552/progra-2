#include <stdio.h>

float xelevn(float base, int exp)
{
if(exp == 0){ return(1);}
return(base*xelevn(base,exp-1));

int multi(int a, int b)
{
if(b == 0) return(0); return( a + multi(a, b-1));
}
}
int main(){
    printf("%f\n", xelevn(6, 2));
    printf("%d", )
}