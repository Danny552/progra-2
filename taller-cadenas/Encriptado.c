#include <stdio.h>
#include <string.h>

int main() {
    char mensaje[100];
    int i, longitud;

    printf("Ingresa el mensaje a encriptar: ");
    gets(mensaje);

    longitud = strlen(mensaje);

    for (i = 0; i < longitud; i++) {
        // Comprueba si es una letra minúscula
        if (mensaje[i] >= 'a' && mensaje[i] <= 'z') {
            mensaje[i] = (mensaje[i] - 'a' - 13 + 26) % 26 + 'a';
        }
        else if (mensaje[i] >= 'A' && mensaje[i] <= 'Z') {
            mensaje[i] = (mensaje[i] - 'A' - 13 + 26) % 26 + 'A';
        }
    }

    printf("Mensaje encriptado: %s\n", mensaje);

    return 0;
}