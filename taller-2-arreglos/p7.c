#include <stdio.h>
int main()
{
    int i = 0, vec[100], n, mayor = -50243912, x;
    printf("Ingrese el tamaño del vector");
    scanf("%d", &n);
    for (i= 1; i <= n; i++)
    {
        printf("Ingrese el valor de la punto %d: ", i);
        scanf("%i", &vec[i]);
    }
    i = 0;
    while (i < n)
    {
        if (vec[i] > mayor)
        {
            mayor = vec[i];
            x = i;
        }
        i++;
    }
    printf("El número mayor es %d y su posición en el vector es %d", mayor, x + 1);
}