#include <stdio.h>
int main()
{
    int i = 0, vec1[100], n, vecp[100], veci[100], m = 0, k = 0;
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &n);
    while (i < n)
    {
        printf("Inserte el valor %d: ", i);
        scanf("%i", &vec1[i]);
        i++;
    }
    i = 0;
    while (i < n)
    {
        if (vec1[i] % 2 == 0)
        {
            vecp[m] = vec1[i];
            m++;
        }
        else
        {
            veci[k] = vec1[i];
            k++;
        }
        i++;
    }
    i = 0;
    printf("Pares: \n");
    while (i < m)
    {
        printf("%i ", vecp[i]);
        i++;
    }
    i = 0;
    printf("\nImpares: \n");
    while (i < k)
    {
        printf("%i ", veci[i]);
        i++;
    }
}