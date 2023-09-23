#include <stdio.h>
int main() {
    int num1, num2, num3, num4;
    scanf ("%d %d %d %d", &num1, &num2, &num3, &num4);
    if(num1 > num2 && num1 > num3 && num1 > num4){
        if(num2 < num3 && num2 < num4){
            if(num3 < num4){
                printf ("El mayor es %d\n", num4);
                printf ("El menor es %d", num3);
            }
            else{
                printf ("El mayor es %d\n", num3);
                printf ("El menor es %d", num4); 
            }
        }
        if(num3 < num2 && num3 < num4){
            if(num2 < num4){
                printf ("El mayor es %d\n", num4);
                printf ("El menor es %d", num2);
            }
            else{
                printf ("El mayor es %d\n", num2);
                printf ("El menor es %d", num4); 
            }
        }
        if(num4 < num2 && num4 < num3){
            if(num2 < num3){
                printf ("El mayor es %d\n", num3);
                printf ("El menor es %d", num2);
            }
            else{
                printf ("El mayor es %d\n", num2);
                printf ("El menor es %d", num3); 
            }
        }
    }
    if(num2 > num1 && num2 > num3 && num2 > num4){
        if(num1 < num3 && num1 < num4){
            if(num3 < num4){
                printf ("El mayor es %d\n", num4);
                printf ("El menor es %d", num3);
            }
            else{
                printf ("El mayor es %d\n", num3);
                printf ("El menor es %d", num4); 
            }
        }
        if(num3 < num1 && num3 < num4){
            if(num1 < num4){
                printf ("El mayor es %d\n", num4);
                printf ("El menor es %d", num1);
            }
            else{
                printf ("El mayor es %d\n", num1);
                printf ("El menor es %d", num4); 
            }
        }
        if(num4 < num1 && num4 < num3){
            if(num1 < num3){
                printf ("El mayor es %d\n", num3);
                printf ("El menor es %d", num1);
            }
            else{
                printf ("El mayor es %d\n", num1);
                printf ("El menor es %d", num3); 
            }
        }
    }
        if(num3 > num2 && num3 > num1 && num3 > num4){
        if(num2 < num1 && num2 < num4){
            if(num1 < num4){
                printf ("El mayor es %d\n", num4);
                printf ("El menor es %d", num1);
            }
            else{
                printf ("El mayor es %d\n", num1);
                printf ("El menor es %d", num4); 
            }
        }
        if(num3 < num2 && num3 < num4){
            if(num2 < num4){
                printf ("El mayor es %d\n", num4);
                printf ("El menor es %d", num2);
            }
            else{
                printf ("El mayor es %d\n", num2);
                printf ("El menor es %d", num4); 
            }
        }
        if(num4 < num2 && num4 < num3){
            if(num2 < num3){
                printf ("El mayor es %d\n", num3);
                printf ("El menor es %d", num2);
            }
            else{
                printf ("El mayor es %d\n", num2);
                printf ("El menor es %d", num3); 
            }
        }
    }
        if(num4 > num2 && num4 > num3 && num4 > num1){
        if(num2 < num3 && num2 < num1){
            if(num3 < num1){
                printf ("El mayor es %d\n", num1);
                printf ("El menor es %d", num3);
            }
            else{
                printf ("El mayor es %d\n", num3);
                printf ("El menor es %d", num1); 
            }
        }
        if(num3 < num2 && num3 < num4){
            if(num2 < num4){
                printf ("El mayor es %d\n", num4);
                printf ("El menor es %d", num2);
            }
            else{
                printf ("El mayor es %d\n", num2);
                printf ("El menor es %d", num4); 
            }
        }
        if(num4 < num2 && num4 < num3){
            if(num2 < num3){
                printf ("El mayor es %d\n", num3);
                printf ("El menor es %d", num2);
            }
            else{
                printf ("El mayor es %d\n", num2);
                printf ("El menor es %d", num3); 
            }
        }
    }
}