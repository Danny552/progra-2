#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <windows.h>
int main()
{
    int A[0], vectpar[0], parand[0], fibo[0], primo1[0], primo2[0];
    bool continuar1 = false, continuar2 = false, continuar3 = false, continuar4 = false, continuar5 = false;
    int n, i, z, a, b, c, op, n1 = 0, n2 = 1, d1, d2, d3, d4, d5;
    do
    {
        srand(time(NULL));
        printf("\n Qué punto desea ver?: ");
        scanf("%d", &op);

        switch (op)
        {
        case 0:
            break;

        case 1:
            printf("Ingrese el tamaño del vector: ");
            scanf("%d", &d1);
            vectpar[0] = vectpar[d1];
            a = 2;
            for (i = 0; i < d1; i++)
            {
                vectpar[i] = a;
                a = a + 2;
            };
            printf("\n");
            continuar1 = true;
            break;

        case 2:
            printf("Ingrese el tamaño del vector: ");
            scanf("%d", &d2);
            parand[0] = parand[d2];
            a = rand() % 100;
            i = 0;
            while (i < d2)
            {
                if (a % 2 == 0)
                {
                    parand[i] = a;
                    a = rand() % 100;
                    i++;
                }
                else
                {
                    a = rand() % 100;
                };
            };
            printf("\n");
            continuar2 = true;
            break;

        case 3:
            n1 = 0;
            n2 = 1;
            printf("Ingrese el tamaño del vector fibonacci: ");
            scanf("%d", &d3);
            fibo[0] = fibo[d3];
            for (i = 0; i < d3; i++)
            {
                fibo[i] = n2;
                c = n2;
                n2 = n2 + n1;
                n1 = c;
            };
            printf("\n");
            continuar3 = true;
            break;

        case 4:
            printf("Ingrese el tamaño del vector aleatorio: ");
            scanf("%d", &d4);
            primo1[0] = primo1[d4];
            a = rand() % 100;
            for (i = 0; i < d4; i++)
            {
                primo1[i] = a;
                a = rand() % 100;
            };

            for (i = 0; i < d4; i++)
            {
                z = 1;
                c = 0;
                while (z <= (primo1[i]))
                {
                    if ((primo1[i] % z) == 0)
                    {
                        c++;
                    };
                    z++;
                };
                if (c == 2)
                {
                    b = primo1[i];
                    i = d4;
                };
            };

            printf("\nEl primer número primo del vector es: %d", b);
            continuar4 = true;
            break;

        case 5:
            printf("Ingrese el tamaño del vector aleatorio: ");
            scanf("%d", &d5);
            primo2[0] = primo2[n];
            a = rand() % 100;
            for (i = 0; i < d5; i++)
            {
                primo2[i] = a;
                a = rand() % 100;
            };

            for (i = 0; i < d5; i++)
            {
                z = 1;
                c = 0;
                while (z <= (primo2[i]))
                {
                    if ((primo2[i] % z) == 0)
                    {
                        c++;
                    };
                    z++;
                };
                if (c == 2)
                {
                    b = primo2[i];
                };
            };

            printf("\nEl primer número primo del vector es: %d", b);
            continuar5 = true;
            break;

        case 6:
            printf("\n¿Qué vector desea ver?");
            printf("\n1. Vector de pares.");
            printf("\n2. Vector de pares aleatorios.");
            printf("\n3. Vector de fibo.");
            printf("\n4. Vector de aleatorios (Primer N° primo).");
            printf("\n5. Vector de aleatorios (Último N° primo).");
            printf("\nOpción: ");
            scanf("%d", &n);
            switch (n)
            {

            case 1:
                if (continuar1)
                {
                    for (i = 0; i < d1; i++)
                    {
                        printf(" %d ", vectpar[i]);
                    };
                }
                else
                {
                    printf("\nEl vector seleccionado no se ha llenado.");
                };
                break;

            case 2:
                if (continuar2)
                {
                    for (i = 0; i < d2; i++)
                    {
                        printf("%d, ", parand[i]);
                    };
                }
                else
                {
                    printf("\nEl vector seleccionado no se ha llenado.");
                };
                break;

            case 3:
                if (continuar3)
                {
                    for (i = 0; i < d3; i++)
                    {
                        printf(" %d, ", fibo[i]);
                    };
                }
                else
                {
                    printf("\nEl vector seleccionado no se ha llenado.");
                };
                break;

            case 4:
                if (continuar4)
                {
                    for (i = 0; i < d4; i++)
                    {
                        printf(" %d, ", primo1[i]);
                    };
                }
                else
                {
                    printf("\nEl vector seleccionado no se ha llenado.");
                };
                break;

            case 5:
                if (continuar5)
                {
                    for (i = 0; i < d5; i++)
                    {
                        printf(" %d ", primo2[i]);
                    };
                }
                else
                {
                    printf("\nEl vector seleccionado no se ha llenado.");
                };
                break;

            default:
                printf("\nInválida");
                break;
            }
            break;

        default:
            printf("\nError.");
            break;
        }
    } while (op != 0);

    printf("\nAdiós.");

    return 0;
}