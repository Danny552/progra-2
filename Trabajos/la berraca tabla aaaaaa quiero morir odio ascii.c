#include <stdio.h>
int main()
{
    int lado1trap, lado2trap, basema, baseme, alturatrap;//trapecio
    int base, altura; //rectángulo
    int radio; //circunferencia
    int lado1t, lado3t, lado2t, baset, alturat; //triángulo
    int lado;//cuadrado
    int ladoP, apotema;//Pentágono
    float pi = 3.14;
    printf ("Inserte el primer lado del trapecio: ");
    scanf ("%d" , &lado1trap);
    printf ("Inserte el segundo lado del trapecio: ");
    scanf ("%d" , &lado2trap);
    printf ("Inserte la base mayor: ");
    scanf ("%d" , &basema);
    printf ("Inserte la base menor: ");
    scanf ("%d" , &baseme);
    printf ("Inserte la altura: ");
    scanf ("%d" , &alturatrap);
    printf ("Ahora procederemos al rectángulo.\n");
    printf ("Inserte la base: ");
    scanf ("%d" , &base);
    printf ("Inserte la altura: ");
    scanf ("%d" , &altura);
    printf ("Ahora procederemos a la circunferencia. \n");
    printf ("Inserte el radio:");
    scanf ("%d" , &radio);
    printf ("Ahora procederemos al triángulo. \n");
    printf ("Inserte la base: ");
    scanf ("%d" , &baset);
    printf ("Inserte la altura: ");
    scanf ("%d" , &alturat);
    printf ("Inserte el lado 1: ");
    scanf ("%d" , &lado1t);
    printf ("Inserte el lado 2: ");
    scanf ("%d" , &lado2t);
    printf ("Inserte el lado 3: ");
    scanf ("%d" , &lado3t);
    printf ("Ahora procederemos al pentágono.\n");
    printf ("Inserte el lado: ");
    scanf ("%d", &ladoP);
    printf ("Inserte el apotema: ");
    scanf ("%d" , &apotema);
    printf ("Inserte el lado del cuadrado: ");
    scanf ("%d", &lado);
    printf ("|-----------|----------|-------------|------------|\n");
    printf ("| Figura    |Elementos |Perímetro   |Área       |\n");
    printf ("|Cuadrado   |Lado = %d  |P = 4 * %d    |%d * %d       |\n" , lado, lado, lado, lado);
    printf ("| \t    |\t       |P = %d        |A=%d         |\n" , 4 * lado , lado * lado);
    printf ("|-----------|----------|-------------|------------|\n");
    printf ("|Trapecio   |Lado 1=%d  |P = %d+%d+%d+%d  |A=(%d*%d*%d)/2 |\n" , lado1trap, lado1trap, lado2trap, basema, baseme, basema, baseme, alturatrap);
    printf ("| \t    |lado 2=%d  |\t     |\t          |\n", lado2trap);
    printf ("| \t    |Base m=%d  |\t     |\t          |\n", baseme);
    printf ("| \t    |Base M=%d  |P= %d         |A=%d         |\n",basema, basema + baseme + lado1trap + lado2trap , (basema + baseme * alturatrap) / 2 );
    printf ("|-----------|----------|-------------|------------|\n");
    printf ("|Círculo   |Radio = %d |P=2*pi*%d     |A=pi*%d2     |\n" , radio, radio, radio);
    printf ("| \t    |\t       |P= %f  |A=%f  |\n", 2*pi*radio , pi * radio * radio);
    printf ("|-----------|----------|-------------|------------|\n");
    printf ("|Triángulo |Lado 1=%d  |P=%d+%d+%d\t     |A=(%d*%d)/2   |\n", lado1t, lado1t, lado2t, lado3t, baset, alturat);
    printf ("| \t    |lado 2=%d  |\t     |\t          |\n", lado2t);
    printf ("| \t    |lado 3=%d  |\t     |\t          |\n", lado3t);
    printf ("| \t    |Altura=%d  |\t     |\t          |\n", alturat);
    printf ("| \t    |Base  =%d  |P= %d         |A= %d        |\n", baset, lado1t + lado2t + lado3t, (baset * alturat)/2);
    printf ("|-----------|----------|-------------|------------|\n");
    printf ("|Rectángulo|Base  =%d  |P= 2*%d + 2*%d |A= %d * %d    |\n", base, base, altura, base, altura);
    printf ("| \t    |Altura=%d  |P= %d\t     |A= %d        |\n", altura, 2*base + 2*altura, base* altura);
    printf ("|-----------|----------|-------------|------------|\n");
    printf ("|Pentágono |Lado  =%d  |P =5*%d\t     |(A= P * %d)/2|\n", ladoP, ladoP, apotema);
    printf ("| \t    |Apotema=%d |P=%d          |A=%d         |\n", apotema, 5*ladoP, (5*ladoP * apotema)/2);
    printf ("|-----------|----------|-------------|------------|");
}