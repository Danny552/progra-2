#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    srand(time(NULL));
    printf("Ingrese el largo del vector: ");
    scanf("%d", &n);

    int vector[n];
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        vector[i] = (rand() % 30) + 1;
        suma += vector[i];
    }

    float promedio = (float)suma / n;
    int mayores_al_promedio[n];

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (vector[i] > promedio)
        {
            mayores_al_promedio[j] = vector[i];
            j++;
        }
    }

    printf("Vector original: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vector[i]);
    }

    printf("\nPromedio: %.2f\n", promedio);

    printf("Valores mayores al promedio: ");
    for (int i = 0; i < j; i++)
    {
        printf("%d ", mayores_al_promedio[i]);
    }

    printf("\n");

    return 0;
}
