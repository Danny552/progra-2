#include <stdio.h>
int main()
{
    int i = 0, vec1[100], n, vec2[100], ii = 0;
    printf("Ingrese el tamaño del vector");
    scanf("%d", &n);
    while (i < n)
    {
        printf("Ingrese el valor del vector 1 en la posición %d", i);
        scanf("%i", &vec1[i]);
        i++;
    }
    i = 0;
    while (i < n)
    {
        if (vec1[i] % 2 == 0)
        {
            vec2[ii] = vec1[i];
            ii++;
        }
        i++;
    }
    i = 0;
    while (i < ii)
    {
        printf("%i ", vec2[i]);
        i++;
    }
}