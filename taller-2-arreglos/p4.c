#include <stdio.h>
int main()
{
    int i = 0, vec[100], sum = 0, v[100], j = 0, n, prom;
    printf("Inserte el tamaño del vector: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Ingrese el valor del vector en la posición %d", i);
        scanf("%i", &vec[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + vec[i];
    }
    prom = sum / n;
    i = 0;
    for (i = 0; i < n; i++)
    {
        if (vec[i] > prom)
        {
            v[j] = vec[i];
            j++;
        }
    }
    i = 0;
    printf("Los datos mayores al promedio son: ");
    while (i < j)
    {
        printf("%i ", v[i]);
        i++;
    }
}