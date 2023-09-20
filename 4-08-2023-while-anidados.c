#include <stdio.h>

int main() {
    int n;

    printf("Ingrese la altura del rombo: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        // Imprime espacios en blanco a la izquierda
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Imprime números ascendentes
        for (int k = i; k <= 2 * i - 1; k++) {
            printf("%d", k);
        }

        // Imprime números descendentes
        for (int l = 2 * i - 2; l >= i; l--) {
            printf("%d", l);
        }

        // Salto de línea
        printf("\n");
    }

    return 0;
}
