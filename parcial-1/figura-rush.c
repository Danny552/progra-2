#include <stdio.h>

int main() {
    int altura, ancho;
    int i = 1;
    printf("Ingrese la altura de la figura: ");
    scanf("%d", &altura);

    printf("Ingrese el ancho de la figura: ");
    scanf("%d", &ancho);
    // para printear la primera
    if (ancho == 1 && altura == 1){
        printf ("/\n");
        return 0;
    } else {
    printf("/");
    for ( i = 0; i < (ancho - 2); i++)
    {
        printf ("*");
    }
    printf ("\\\n");
    }
    for (i = 0; i < (altura - 2) ; i++){
    printf ("*");
    }
    for ( i = 0; i < (ancho - 2); i++)
    {
        printf (" ");
    }
    for (i = 0; i < (altura - 2) ; i++){
    printf ("*\n");
    }
    //la ultima
    if (ancho == 1){
        printf ("\\\n");
    } else {
    printf("\\");
    for ( i = 0; i < (ancho - 2); i++)
    {
        printf ("*");
    }
    printf ("/\n");
    }
}