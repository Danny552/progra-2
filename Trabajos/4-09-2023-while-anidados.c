//Daniel Alejandro Henao
//4-09-2023 TALLER EN CLASE

#include <stdio.h>
#include <stdlib.h>

#define RESET_COLOR "\x1b[0m"
#define ROJO_T "\x1b[31m"
#define AMARILLO_T "\x1b[33m"
#define MAGENTA_T "\x1b[35m"

int
main ()
{
     int a = 1, b, c, d, s, t, v, opc, md, min, k, j, i, e;
     printf ("Ingrese el punto que desee observar: ");
     scanf ("%d", &opc);
     switch (opc){
     printf ("Ingrese el Nm de columnas: ");
     scanf ("%d", &d);
     while (a <= d){
          b = a;
          while (b <= d){
               printf ("*");
               b = b + 1;
          }
          printf ("\n");
          a = a + 1;
     }
     break;
     case 2:
     printf("Inserte en número de columnas: ");
     scanf ("%d", &v);
     c = v;
     while (c >= 1){
          t = c;
          while (t >= 1){
               printf (" ");
               t = t-1;
          }
          s = c;
          while(s <= v){
               printf ("*");
               s = s+1;
          }
          c = c-1;
          printf ("\n");
     }
     break;
     case 3:
     j = 0;
 printf("j = " ROJO_T "Rojo" RESET_COLOR " - i = " MAGENTA_T "Magenta\n");
 while(j < 4){
 i = 0;
 while(i < 4){
 printf(ROJO_T "%d" RESET_COLOR "," MAGENTA_T "%d ", j, i);
 i++;
 };
 printf("\n");
 j++;
 };
 break;

 case 4:
 printf("Ingrese el primer número: ");
 scanf("%d", &a);
 printf("Ingrese el segundo número: ");
 scanf("%d", &b);
 if(a < b){
 min = a;
 }
 else{
 min = b;
 };
 k = 1;
 while(k <= min){
 if((a%k == 0) && (b%k == 0)){
 md = k;
 };
 k++;
 };
 printf("\nEl MCD entre %d y %d es: %d", a, b, md);
 break;

 case 5:
 printf ("Ingrese el número de columnas: ");
 scanf ("%d", &v);
 c = v;
 while (c >= 1){
 t = c;
 while (t >= 1){
 printf (" ");
 t--;
 };
 s = c;
 while (s <= v){
 printf ("*");
 s = s + 1;
 };
 c--;
 printf ("\n");
 };
 break;

 case 6:
 printf ("Ingrese el número de columnas: ");
 scanf ("%d", &v);
 printf("c = " ROJO_T "Rojo" RESET_COLOR " - t = " MAGENTA_T "Magenta ( )" RESET_COLOR " -s = " AMARILLO_T "Amarillo ()\n");

 c = v;
 while (c >= 1){
 t = c;
 while (t >= 1){
 printf (ROJO_T "%d" RESET_COLOR "," MAGENTA_T "%d ", c, t);
 t--;
 };
 s = c;
 while (s <= v){
 printf (ROJO_T "%d" RESET_COLOR "," AMARILLO_T "%d ", c, s);
 s = s + 1;
 };
 c--;
 printf ("\n");
 };
 break;

 case 7:
 printf("Ingrese b: ");
 scanf("%d", &b);
 while(b >= 10){
 c = 0;
 while(b >= 10){
 b = b - 10;
 c++;
 };
 d = d + b * pow(2, e);
 e++;
 b = c;
 };
 d = d + c * pow(2, e);
 printf("%d\n", d);
 break;

 };

 return 0;
}
