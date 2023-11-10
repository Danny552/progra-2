#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int a[100], n;

    printf("Ingrese la cantidad de números a ordenar: ");
    scanf("%d", &n);

    printf("Ingrese los números uno por uno y se guardarán en un archivo:\n");

    FILE *inputFile = fopen("C:\\Users\\danie\\Desktop\\UNI\\SEMESTRE II\\Progra II\\progra-2\\Trabajos\\archivo\\input.txt", "w");
    if (!inputFile) {
        printf("No se pudo abrir el archivo de entrada.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        fprintf(inputFile, "%d\n", a[i]);
    }

    fclose(inputFile);

    // Ordenar los números en el arreglo a[]
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
    FILE *outputFile = fopen("C:\\Users\\danie\\Desktop\\UNI\\SEMESTRE II\\Progra II\\progra-2\\Trabajos\\archivo\\output.txt", "w");
    if (!outputFile) {
        printf("No se pudo abrir el archivo de salida.\n");
        return 1;
    }

    printf("Números ordenados:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", a[i]);
        fprintf(outputFile, "%d\n", a[i]);
    }

    fclose(outputFile);

    return 0;
}
