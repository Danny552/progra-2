#include <stdio.h>
int main()
{
    int i = 0, vec1[100], n, a = 1, b = 1, sum = 0;
    printf("Inserte el tamaño del vector de fibonacci: ");
    scanf("%d", &n);
    while (i < n)
    {
        vec1[i] = a;
        sum = a + b;
        a = b;
        b = sum;
        i++;
    }
    i = 0;
    while (i < n)
    {
        printf("%i ", vec1[i]);
        i++;
    }
}