#include <stdio.h>
int main()
{
    int i = 0, vec1[100], n, j = 0, p = 0, a = 1;
    printf("Ingrese el tamaño del vector");
    scanf("%a", &n);
    while (j < n)
    {
        while (a <= i)
        {
            if (i % a == 0)
            {
                p++;
            }
            a++;
        }
        if (p == 2)
        {
            vec1[j] = i;
            j++;
        }
        p = 0;
        a = 1;
        i++;
    }
    i = 0;
    while (i < n)
    {
        printf("%i ", vec1[i]);
        i++;
    }
}