#include <stdio.h>
int main()
{
    int i = 0, vec[100], n, j;
    printf("Inserte el tamaño del vector: ");
    scanf("%d", &n);
    while (i < n)
    {
        printf("Ingrese dato número %d: ", i);
        scanf("%i", &vec[i]);
        i++;
    }
    j = n;
    i = n - 1;
    for (i = i; i >= 0; i--)
    {
        vec[j] = vec[i];
        j++;
    }
    i = n;
    while (i <= j)
    {
        printf("%i ", vec[i]);
        i++;
    }
}
