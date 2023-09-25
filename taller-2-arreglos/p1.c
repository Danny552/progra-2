#include <stdio.h>
int main()
{
    int i = 0, vec[100], n, j = 1, p = 0, pr = 0;
    printf("¿De qué tamaño desea el vector? ");
    scanf("%d", &n);
    i = 0;
    for (i = 1; i <= n; i++)
    {
        printf("Inserte el dato %d: ", i);
        scanf("%i", &vec[i]);
    }
    i = 0;
    while (i < n)
    {
        j = 1;
        while (j <= vec[i])
        {
            if (vec[i] % j == 0)
            {
                p++;
            }
            j++;
        }
        if (p == 2)
        {
            pr = vec[i];
        }
        i++;
        p = 0;
    }
    if (pr == 0)
    {
        printf("No hay número primo");
    }
    else
    {
        printf("El ultimo dato primo es: %d", pr);
    }
}