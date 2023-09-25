#include <stdio.h>
int main()
{
    int i = 0, vec[100], x, cont = 0, n;
    printf("Ingrese el valor de x");
    scanf("%d", &x);
    printf("Ingrese el tamaño del vector");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Ingrese el elemento número %d: ", i);
        scanf("%i", &vec[i]);
    }
    i = 0;
    for (i = 0; i <= n; i++)
    {
        if (vec[i] == x)
        {
            cont++;
        }
    }
    printf("Las cantidad de repeticiones de %d en el array son: %d", x, cont);
}