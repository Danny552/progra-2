#include <stdio.h>

int main() {
    int tam;

    // Solicita al usuario el tam del moño
    printf("Ingrese el tam del moño: ");
    scanf("%d", &tam);

    // Imprime el lazo superior
    for (int i = 1; i <= tam; i++) {
        for (int j = 1; j <= i; j++) {
            printf("x");
        }
        for (int k = 1; k <= 2 * (tam - i); k++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("x");
        }
        printf("\n");
    }

    // Imprime lazo medio
    for (int i = 1; i <= tam; i++) {
        for (int j = 1; j <= i - 1; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * (tam - i) + 1; k++) {
            printf("x");
        }
        printf("\n");
    }

    // Imprime el lazo inferior
    for (int i = 1; i <= tam; i++) {
        for (int j = 1; j <= tam - i; j++) {
            printf("A");
        }
        for (int k = 1; k <= 2 * i; k++) {
            printf(" ");
        }
        for (int j = 1; j <= tam - i; j++) {
            printf("A");
        }
        printf("\n");
    }

    return 0;
}
