#include <stdio.h>
int main()
{
    int n, m, array1[100], array2[100], array1_2[100];
    int i = 1;
    printf("Ingrese el tamaño del primer array: ");
    scanf("%d", &n);
    printf("Ingrese el primer array:\n");
    for (i = 1; i <= n; i++)
    {
        printf("Ingrese el %d dato: ", i);
        scanf("%d", &array1[i]);
    }
    printf("Ingrese el tamaño del segundo array: ");
    scanf("%d", &m);
    printf("Ingrese el segundo array:\n");
    for (i = 1; i <= m; i++)
    {
        printf("Ingrese el %d dato: ", i);
        scanf("%d", &array2[i]);
    }
    i = 1;
    int z = n + m;
    for (i = 1; i <= n; i++)
    {
        array1_2[i] = array1[i];
    }
    for (i = 1; i <= n; i++)
    {
        array1_2[n + i] = array2[i];
    }

    for (i = 1; i <= z; i++)
    {
        printf("%d ", array1_2[i]);
    }
}