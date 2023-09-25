#include <stdio.h>
int main()
{
    int i = 0, vec1[100], n, vec2[100], vec3[100];
    printf("Ingrese el tamaño de los vectores");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Ingrese el %d dato: ", i);
        scanf("%d", &vec1[i]);
    }
    i = 0;
    for (i = 1; i <= n; i++)
    {
        printf("Ingrese el %d dato: ", i);
        scanf("%d", &vec2[i]);
    }
    i = 0;
    while (i < n)
    {
        vec3[i] = vec1[i] + vec2[i];
        i++;
    }
    i = 0;
    while (i < n)
    {
        printf("%i ", vec3[i]);
        i++;
    }
}