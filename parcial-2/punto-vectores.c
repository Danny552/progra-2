#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int n;
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &n);

    int vector[n];

    for (int i = 0; i < n; i++) {
        vector[i] = rand() % 10 + 1;
    }

    int ordenado = 0;

    while (!ordenado) {
        printf("Vector: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", vector[i]);
        }
        printf("\n");

        int seleccion;
        printf("Ingrese la posición del número que desea mover (0 a %d): ", n - 1);
        scanf("%d", &seleccion);

        if (seleccion < 0 || seleccion >= n) {
            printf("Posición inválida. El rango válido es 0 a %d.\n", n - 1);
            continue;
        }

        int temp;
        for (int i = seleccion; i < n - 1; i++) {
            if (vector[i] < vector[i + 1]) {
                temp = vector[i];
                vector[i] = vector[i + 1];
                vector[i + 1] = temp;
            }
        }

        ordenado = 1;
        for (int i = 1; i < n; i++) {
            if (vector[i] > vector[i - 1]) {
                ordenado = 0;
                break;
            }
        }
    }

    printf("¡Rompecabezas resuelto con éxito!\n");

    return 0;
}
