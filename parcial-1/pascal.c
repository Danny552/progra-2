#include <stdio.h>

int main() {
    int altura;
    printf("Ingrese la altura del Triángulo de Pascal: ");
    scanf("%d", &altura);

    for (int i = 0; i < altura; i++) {
        int coeficiente = 1;

        // Imprimir espacios en blanco para alinear los números
        for (int j = 0; j < altura - i - 1; j++) {
            printf(" ");
        }

        for (int j = 0; j <= i; j++) {
            // Imprimir el coeficiente binomial y calcular el siguiente
            printf("%d ", coeficiente);
            coeficiente = coeficiente * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}