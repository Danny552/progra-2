#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int n; // Tamaño de la matriz y longitud del vector
    printf("Ingrese el tamaño de la matriz (n): ");
    scanf("%d", &n);

    // Declarar la matriz de coeficientes
    int matriz[n][n];

    // Llenar la matriz de coeficientes con valores enteros aleatorios
    printf("Matriz de coeficientes:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = (rand() % 21) - 10; // Valores enteros entre -10 y 10
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Declarar el vector de términos independientes
    int vectorTerminos[n];

    // Llenar el vector de términos independientes con valores enteros aleatorios
    printf("Vector de términos independientes:\n");
    for (int i = 0; i < n; i++) {
        vectorTerminos[i] = (rand() % 21) - 10; // Valores enteros entre -10 y 10
        printf("%d\n", vectorTerminos[i]);
    }

    // Crear el sistema de ecuaciones lineales
    char inc = 'a';
    printf("Sistema de ecuaciones lineales:\n");
    for (int i = 0; i < n; i++) {
        printf("(");
        for (int j = 0; j < n; j++) {
            printf("%d%c", matriz[i][j], (inc + j));
            if (j < n - 1) {
                printf(" + ");
            }
        }
        printf(" = %d\n", vectorTerminos[i]);
    }

    return 0;
}