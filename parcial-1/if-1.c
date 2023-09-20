#include <stdio.h>
int main(){
    int anos;
    float sueldo = 40000;
    printf ("Inserte la cantidad de años que lleva el trabajador: ");
    scanf ("%d", &anos);
    if (anos <= 3){
        printf ("El sueldo del trabajador debe ser de: %.2f", ((sueldo + (sueldo * 0.03)) / 12));
    } else if (anos > 3 && anos <= 5){
        printf ("El sueldo del trabajador debe ser de: %.2f", ((sueldo + (sueldo * 0.05)) / 12));
    } else if (anos > 5 && anos <= 10){
        printf ("El sueldo del trabajador debe ser de: %.2f", ((sueldo + (sueldo * 0.07)) / 12));
    } else if (anos > 10){
        printf ("El sueldo del trabajador debe ser de: %.2f", ((sueldo + (sueldo * 0.1)) / 12));
    }
}