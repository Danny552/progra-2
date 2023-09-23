#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int opc, a, b, n, m, i, x, j; 
    int s = 0, c = 0, n1 = 1, n2 = 1;
    int min = 0, s = 0, hora = 0;

    do
    {
        printf("Qué punto desea ver, (0 para salir): ");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            do
            {
                system("cls");
                printf("\n%.2d : %.2d : %.2d", hora, min, s);
                s++;
                if (s == 60)
                {
                    s = 0;
                    min++;
                }
                if (min == 60)
                {
                    min = 0;
                    hora++;
                }
                if (hora == 24)
                {
                    hora = 0;
                    min = 0;
                    s = 0;
                }
                sleep(1000);
            } while (hora != 24);
            break;

        case 2:
            i = 1;
            m = 0;
            printf("Ingrese n: ");
            scanf("%d", &n);
            do
            {
                if (n % i == 0)
                {
                    m++;
                }
                i++;
            } while (i <= (n / 2));
            if (m == 1)
            {
                printf("Es primo.\n");
            }
            else
            {
                printf("No es primo.\n");
            }
            break;

        case 3:
            printf("Ingrese n: ");
            scanf("%d", &n);
            printf("Ingrese m: ");
            scanf("%d", &m);
            if (n < m)
            {
                a = n;
                b = m;
            }
            else
            {
                a = m;
                b = n;
            }
            do
            {
                i = 1;
                x = 0;
                do
                {
                    if (a == 1)
                    {
                        i++;
                    };
                    if (a % i == 0)
                    {
                        x++;
                    };
                    i++;
                } while (i <= (a / 2));
                if (x == 1)
                {
                    printf(" %d ", a);
                };
                a++;
            } while (a <= b);
            printf("\n");
            break;

        case 4:
            c = 1;
            do
            {
                printf("Ingrese n (2 o más): ");
                scanf("%d", &n);
            } while (n < 2);

            do
            {
                printf(" %d ", n1);
                m = n2 + n1;
                n1 = n2;
                n2 = m;
                c++;
            } while (c <= n);
            printf("\n");
            break;

        case 5:
            printf("Ingrese n:");
            scanf("%d", &n);
            do
            {
                m = 0;
                do
                {
                    printf("* ");
                    m++;
                } while (m < n);
                printf("\n");
                i++;
            } while (i < n);
            printf("\n");
            break;

        case 6:
            c = 3;
            do
            {
                printf("Ingrese n (2 o más): ");
                scanf("%d", &n);
            } while (n < 2);

            do
            {
                m = n2 + n1;
                n1 = n2;
                n2 = m;
                c++;
            } while (c <= n);
            printf("\nEl término número %d de la serie de fibonacci es: %d", n, n2);
            printf("\n");
            break;

        case 7:
            i = 1;
            m = 0;
            printf("Ingrese n: ");
            scanf("%d", &n);
            printf("Ingrese m: ");
            scanf("%d", &m);
            j = n;
            do
            {
                do
                {
                    if (n % i == 0)
                    {
                        m++;
                    };
                    i++;
                } while (i <= (n / 2));
                if (m == 1)
                {
                    printf("Es primo.\n");
                }
                else
                {
                    printf("No es primo.\n");
                };
                j++;
            } while (j <= m);
            break;

        case 8:
            c = 1;
            s = 0;
            n1 = 0;
            n2 = 1;
            printf("Ingrese n: ");
            scanf("%d", &n);
            do
            {
                s = s + n2;
                m = n2 + n1;
                n1 = n2;
                n2 = m;
                c++;
            } while (c <= n);
            printf("\nLa suma de los %d primeros términos de la serie de fibonacci es: %d", n, s);
            printf("\n");
            break;

        case 9:

            break;

        default:
            printf("\nError.");
            break;
        }
    } while (opc != 0);

    return 0;
}