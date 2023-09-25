#include <stdio.h>
int main()
{
    int i = 0, vec[100], n, sum = 0;
    printf("Ingrese el tamaño del vector");
    scanf("%d", &n);
    i = 0;
    for (i = 1; i <= n; i++)
    {
        printf("Ingrese el valor del vector en la posición %d", i);
        scanf("%i", &vec[i]);
    }
    i = 0;
    while (i < n)
    {
        if (vec[i] % 2 == 1)
        {
            sum = sum + vec[i];
        }
        i++;
    }
    if (sum == 0)
    {
        printf("No hay números impares");
    }
    else
    {
        printf("La suma de los datos impares es: %d", sum);
    }
}
