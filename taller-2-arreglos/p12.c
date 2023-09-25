#include <stdio.h>
int main()
{
    int i = 0, vec1[100], n, vec2[100], j = 0, p = 0, d = 1;
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &n);
    while (i < n)
    {
        printf("Inserte el dato número %d: ", i);
        scanf("%i", &vec1[i]);
        i++;
    }
    i = 0;
    while (i < n)
    {
        while (d <= vec1[i])
        {
            if (vec1[i] % d == 0)
            {
                p++;
            }
            d++;
        }
        if (p == 2)
        {
            vec2[j] = vec1[i];
            j++;
        }
        p = 0;
        d = 1;
        i++;
    }
    i = 0;
    while (i < j)
    {
        printf("%i ", vec2[i]);
        i++;
    }
}
