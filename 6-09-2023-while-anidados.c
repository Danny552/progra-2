// Daniel Alejandro Henao
// 6-09-2023 TALLER EN CLASE.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define RESET_COLOR "\x1b[0m"
#define ROJO_T "\x1b[31m"
#define AMARILLO_T "\x1b[33m"
#define MAGENTA_T "\x1b[35m"

int main()
{
     int c = 1;
     int i = 1;
     int a = 0;
     int b = 1;
     int n = 1;
     int opc, suma;
     printf("Número de ejercicio que desee ver: ");
     scanf("%d", &opc);
     switch (opc)
     {
     case 1:
          printf("Inserte la cantidad de números que desee: \n");
          scanf("%d", &n);
          while (i <= n)
          {
               suma = a + b;
               a = b;
               b = suma;
               printf("%d", suma);
               while (c <= suma)
               {
                    printf("*");
                    c++;
               }
               printf("\n");
               c = 0;
               i++;
          }
          break;
     case 2:
          printf("ingrese el número que desee ver si es primo: ");
          scanf("%d", &n);
          while (i <= sqrt(n))
          {
               if (n % i == 0)
               {
                    c++;
               }
               i++;
          }
          if (c == 2)
          {
               printf("El número %d es primo", n);
          }
          else
          {
               printf("El número %d no es primo", n);
          }
          break;
     case 3:
          printf("Inserte hasta qué número desea ver los primos: ");
          scanf("%d", &a);
          while (b <= a)
          {
               i = 1;
               c = 0;
               while (i <= sqrt(n))
               {
                    if (n % i == 0)
                    {
                         c++;
                    }
                    i++;
               }
               if (c == 1 && n != 1)
               {
                    printf("%d, ", n);
               }
               n++;
               b++;
          }
     case 4:
          a = 0;
          printf("Ingrese el tamaño del triángulo: ");
          scanf("%d", &n);
          while (a < n)
          {
               c = 0;
               while (c <= a)
               {
                    printf("*");
                    c++;
               }
               printf("\n");
               a++;
          }
          break;

     case 5:
          i = 1;
          printf("Ingrese el número de digitos: ");
          scanf("%d", &n);
          while (i <= n)
          {
               a = 1;
               while (a <= n)
               {
                    printf("%d ", a);
                    a++;
               }
               printf("\n");
               i++;
          }
          break;

     case 6:
          printf("Ingrese el número: ");
          scanf("%d", &n);
          while (i <= n)
          {
               a = 1;
               while (a <= i)
               {
                    printf("%d ", a);
                    a++;
               }
               printf("\n");
               i++;
          }
          break;

     case 7:
          printf("Ingrese el número: ");
          scanf("%d", &n);
          c = n;
          while (i <= n)
          {
               a = c;
               while (a >= 1)
               {
                    printf("%d ", a);
                    a--;
               }
               printf("\n");
               i++;
               c--;
          }
          break;

     case 8:
          i = 1;
          printf("Ingrese el número: ");
          scanf("%d", &n);
          while (i <= n)
          {
               a = i;
               while (a >= 1)
               {
                    printf("  ");
                    a--;
               }
               a = i;
               while (a <= n)
               {
                    printf("%d ", a);
                    a++;
               };
               printf("\n");
               i++;
          }
          break;
        }
}
