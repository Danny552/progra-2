//Daniel Alejandro Henao
//11-09-2023
//Taller for.

#include <stdio.h>
int main()
{
    int A = 1, B, C, D;
    int n, v, min, k, md, v, c, t, s, d, e, a, i, b;
    int opc;
    printf("Inserte el punto que desee mirar: ");
    scanf("%d", &opc);
    switch (opc)
    {
    case 2:
        printf("Ingrese el número a calcularle las tablase de multiplicar");
        scanf("%d", &n);
        for (i = 0; i <= 3; i++)
        {
            a = n * i;
            printf("%d * %d = %d\n", n, i, a);
        }
        break;
    case 3:
        for (i = 1; i <= 100; i++)
        {
            printf("%d -", i);
        }
        for (i = 100; i <= 1; i++)
        {
            printf("%d -", i);
        }
        for (i = 7; i <= 77; i += 7)
        {
            printf("%d -", i);
        }
        for (i = 2; i <= 20; i += 3)
        {
            printf("%d -", i);
        }
        break;
    case 4:
        a = 0;
        for (n = 2; n <= 6; n += 2)
        {
            a = a + n;
        }
        printf("La suma de  los pares de 2 hasta 6 es de %d", a);
        break;
    case 5:
        printf("Ingresar n: ");
        scanf("%d", &n);
        for (i = 0; a < n; i++)
        {
            for (a = 0; a < n; a++)
            {
                printf("*");
            }
        }
        break;
    case 6:
        printf("Ingrese el No de columnas: ");
        scanf("%d", &D);
        for (A = 1; A <= D; B++)
        {
            B = A;
            for (B = A; B <= D; B++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;
    case 7:
        scanf("%d", &a);
        scanf("%d", &b);
        if (a < b)
        {
            min = a;
        }
        else
        {
            min = b;
        };
        k = 1;
        while (k <= min)
        {
            if ((a % k == 0) && (b % k == 0))
            {
                md = k;
            };
            k++;
        };
        printf("%d", md);
        break;

    case 8:
        printf("Ingrese el número de columnas: ");
        scanf("%d", &v);
        c = v;
        for (c = v; c >= 1; c--)
        {
            for (t = c; t >= 1; t--)
            {
                printf(" ");
            };
            for (s = c; s <= v; s++)
            {
                printf("*");
            };
            printf("\n");
        }
        break;

    case 9:
        d = 0;
        e = 0;
        c = 0;
        scanf("%d", &a);
        for (b = a; b >= 10; b = c)
        {
            for (c = 0; b >= 10; c++)
            {
                b = b - 10;
            }
            d = d + b * pow(2, e);
            e = e + 1;
            b = c;
        }
        d = d + c * pow(2, e);
        printf("%d\n", d);
        break;

    default:
        printf("Error, opción inexistente");
        break;
    }
}