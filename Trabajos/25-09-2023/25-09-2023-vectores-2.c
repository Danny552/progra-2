#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    int temp = numero;
    int numDigitos = 0;
    while (temp > 0)
    {
        numDigitos++;
        temp /= 10;
    }

    int vector[numDigitos];

    temp = numero;
    for (int i = numDigitos - 1; i >= 0; i--)
    {
        vector[i] = temp % 10;
        temp /= 10;
    }

    printf("Número original: %d\n", numero);
    printf("Vector de dígitos: ");
    for (int i = 0; i < numDigitos; i++)
    {
        printf("%d ", vector[i]);
    }
    printf("\n");

    return 0;
}
