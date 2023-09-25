#include <stdio.h>

int main()
{
    int n;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("El tamaño del arreglo debe ser mayor que 0.\n");
        return 1;
    }

    int arreglo[n];

    printf("Ingrese los elementos del arreglo:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el dato número %d: ", i);
        scanf("%d", &arreglo[i]);
    }

    int x;
    printf("Ingrese el número que desea eliminar: ");
    scanf("%d", &x);

    int queda = n;
    int i = 0;

    while (i < queda)
    {
        if (arreglo[i] == x)
        {
            for (int j = i; j < queda - 1; j++)
            {
                arreglo[j] = arreglo[j + 1];
            }
            queda--;
        }
        else
        {
            i++;
        }
    }

    printf("Arreglo después de eliminar el número %d:\n", x);
    for (i = 0; i < queda; i++)
    {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    return 0;
}
