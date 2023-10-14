#include <stdio.h>

void llenarVector(int vector[], int n) {
    printf("Ingrese los elementos del vector (%d elementos):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vector[i]);
    }
}

void mostrarVector(int vector[], int n) {
    printf("Vector: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
}

int calcularSuma(int vector1[], int vector2[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += vector1[i] + vector2[i];
    }
    return suma;
}

int calcularResta(int vector1[], int vector2[], int n) {
    int resta = 0;
    for (int i = 0; i < n; i++) {
        resta += vector1[i] - vector2[i];
    }
    return resta;
}

int calcularProductoPunto(int vector1[], int vector2[], int n) {
    int productoPunto = 0;
    for (int i = 0; i < n; i++) {
        productoPunto += vector1[i] * vector2[i];
    }
    return productoPunto;
}

int main() {
    int opcion;
    int n;

    printf("Ingrese la longitud de los vectores: ");
    scanf("%d", &n);

    int vector1[n];
    int vector2[n];

    do {
        printf("\nMenú de operaciones con vectores:\n");
        printf("1. Llenar vector1\n");
        printf("2. Llenar vector2\n");
        printf("3. Mostrar vector1\n");
        printf("4. Mostrar vector2\n");
        printf("5. Calcular la suma de vector1 y vector2\n");
        printf("6. Calcular la resta de vector1 y vector2\n");
        printf("7. Calcular el producto punto entre ambos\n");
        printf("8. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                llenarVector(vector1, n);
                break;
            case 2:
                llenarVector(vector2, n);
                break;
            case 3:
                mostrarVector(vector1, n);
                break;
            case 4:
                mostrarVector(vector2, n);
                break;
            case 5:
                printf("La suma de vector1 y vector2 es: %d\n", calcularSuma(vector1, vector2, n));
                break;
            case 6:
                printf("La resta de vector1 y vector2 es: %d\n", calcularResta(vector1, vector2, n));
                break;
            case 7:
                printf("El producto punto entre vector1 y vector2 es: %d\n", calcularProductoPunto(vector1, vector2, n));
                break;
            case 8:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opción no válida. Intente nuevamente.\n");
        }
    } while (opcion != 8);

    return 0;
}