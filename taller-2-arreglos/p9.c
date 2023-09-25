#include <stdio.h>
int main()
{
    int i = 0, vec[100], n, menor = 9876548, x, vecm[100], ii = 0;
    printf("Inserte el tamaño del vector");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Ingrese el dato %d: ", i + 1);
        scanf("%i", &vec[i]);
    }
    i = 0;
    while (i < n)
    {
        while (ii < n)
        {
            if (vec[ii] < menor)
            {
                menor = vec[ii];
                x = ii;
            }
            ii++;
        }
        vecm[i] = menor;
        vec[x] = 5684056;
        menor = 1237653;
        ii = 0;
        i++;
    }
    i = 0;
    while (i < n)
    {
        printf("%i ", vecm[i]);
        i++;
    }
    return 0;
}
