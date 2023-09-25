#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("El tamaño del arreglo debe ser mayor que 0.\n");
        return 1;
    }

    int arreglo[n];

    // Llenar el arreglo con valores proporcionados por el usuario
    printf("Ingrese los elementos del arreglo:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arreglo[i]);
    }

    printf("Números pares: ");
    for (int i = 0; i < n; i++) {
        if (arreglo[i] % 2 == 0) {
            printf("%d ", arreglo[i]);
        }
    }
    printf("\n");

    printf("Números impares: ");
    for (int i = 0; i < n; i++) {
        if (arreglo[i] % 2 != 0) {
            printf("%d ", arreglo[i]);
        }
    }
    printf("\n");

    printf("Números primos: ");
    for (int i = 0; i < n; i++) {
        if (arreglo[i] <= 1) {
            continue;
        }
        bool esPrimo = true;
        for (int j = 2; j * j <= arreglo[i]; j++) {
            if (arreglo[i] % j == 0) {
                esPrimo = false;
                break;
            }
        }
        if (esPrimo) {
            printf("%d ", arreglo[i]);
        }
    }
    printf("\n");

    return 0;
}
