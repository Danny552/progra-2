#include <stdio.h>
int main(){
    float cantidad = 1;
    int cuadro = 1;
    printf ("|cuadro\t|paga\n");
    while (cuadro < 65){
        printf ("|%d\t|%.0f\n", cuadro, cantidad);
        cuadro++;
        cantidad = cantidad * 2;
    }
}