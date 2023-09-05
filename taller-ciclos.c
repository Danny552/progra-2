// Daniel Alejandro Henao 
// Taller Ciclos 4/09/2023
#include <stdio.h>
#include <math.h>

int opc, num, m, i, multi, suma, l, fc, cnt, x, par, impar;
float f, t, mate, fisica, quim, bono, prom;
char c, basura;

int main()
{

    if (opc != 1)
    {
        printf("Ingrese el ejercicio que desea ejecutar: ");
        scanf("%d", &opc);
    }

    switch (opc)
    {

    case 1:
        i = 1;
        suma = 0;
        multi = 1;
        printf("Ingrese el numero del cual desee ver los divisores: ");
        scanf("%d", &num);
        printf("Ingrese la cantidad de divisores que quiera ver: ");
        scanf("%d", &m);
        while (i <= num)
        {
            printf("%d ", (i * m));
            suma = suma + (i * m);
            multi = multi * (i * m);
            i++;
        }
        printf("\nSuma: %d", suma);
        printf("\nMultiplicación: %d", multi);
        break;

    case 2:
        i = 1;
        printf("Ingrese un número entero positivo: ");
        scanf("%d", &num);
        if (num > 0)
        {
            while (i <= 10)
            {
                printf("%d * %d = %d\t%d div %d = %d\t%d mod %d = %d\num", num, i, (num * i), num, i, (num / i), num, i, (num % i));
                i++;
            }
        }
        else
        {
            printf("\n0 o negativo.");
        }
        break;

    case 3:
        scanf("%c", &basura);
        num = 0;
        l = 0;
        m = 0;
        printf("\nIngrese cualquier caracter o letra: ");
        scanf("%c", &c);
        if (c != '.')
        {
            while (c != '.')
            {
                scanf("%c", &basura);
                if (c >= 48 && c <= 57)
                {
                    num++;
                }
                else
                {
                    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
                    {
                        l++;
                    }
                    else
                    {
                        m++;
                    }
                }
                printf("Ingrese el siguiente carácter: ");
                scanf("%c", &c);
            }
        }
        else
        {
            printf("\nFin.");
        }
        printf("\nCantidad de números: %d\nCantidad de letras: %d\nCantidad de otros carácteres: %d\nTotal de caracteres: %d\n", num, l, m, (num + l * +m));
        break;

    case 4:
        i = 1;
        suma = 0;
        multi = 1;
        printf("Ingrese num: ");
        scanf("%d", &num);
        if ((num % 2) == 0 && num > 0)
        {
            while (i <= num)
            {
                suma = suma + i;
                multi = multi * i;
                i++;
            }
            printf("\nFactorial: %d\nSumatoria: %d", multi, suma);
        }
        else
        {
            printf("\nEl número no cumple las condiciones.");
        }
        break;

    case 5:
        i = 1;
        suma = 0.0;
        printf("Ingrese la cantidad de datos que va a ingresar: ");
        scanf("%d", &num);
        while (i <= num)
        {
            if (i == 1)
            {
                printf("\nIngresa el primer número:");
                scanf("%f", &f);
            }
            else
            {
                printf("Ingresa el siguiente número: ");
                scanf("%f", &f);
            }
            t = t + f;
            i++;
        }
        printf("\nSuma: %f\nMedia aritmetica: %f", t, (t / num));
        break;

    case 6:
        i = 1;
        f = 0;
        fc = 0;
        t = 0;
        cnt = 0;
        printf("Ingrese n: ");
        scanf("%d", &num);
        while (i <= num)
        {
            if (i == 1)
            {
                printf("\nIngrese el primer número: ");
                scanf("%d", &m);
            }
            else
            {
                printf("Ingrese el siguiente número: ");
                scanf("%d", &m);
            }
            if (m < 0)
            {
                t = t + m;
                cnt++;
            }
            else
            {
                f = f + m;
                fc++;
            }
            i++;
        }
        printf("\nPromedio positivos: %.2f\nPromedio negativos: %.2f", (f / fc), (t / cnt));
        break;

    case 7:
        i = 1;
        printf("Ingrese N: ");
        scanf("%d", &num);
        while (i <= num)
        {
            if (i == 1)
            {
                printf("\nIngrese el primer número: ");
                scanf("%d", &m);
                suma = m;
                multi = m;
            }
            else
            {
                printf("Ingrese el siguiente número: ");
                scanf("%d", &m);
                if (m < multi)
                {
                    multi = m;
                }
                else if (m > suma)
                {
                    suma = m;
                }
            }
            i++;
        }
        printf("\nMayor: %d\nMenor: %d", suma, multi);
        break;

    case 8:
        i = 1;
        par = 0;
        x = 0;
        multi = 0;
        cnt = 0;
        printf("Inrgrese N: ");
        scanf("%d", &num);
        while (i <= num)
        {
            if (i == 1)
            {
                printf("Ingrese el primer número: ");
                scanf("%d", &m);
            }
            else
            {
                printf("Ingrese el siguiente número: ");
                scanf("%d", &m);
            }
            if (m % 2 == 0)
            {
                par = par + m;
                x++;
            }
            else
            {
                impar = impar + m;
                cnt++;
            }
            i++;
        };
        f = par / x;
        t = impar / cnt;
        printf("\nMedia pares: %.2f\nMedia impares: %.2f", f, t);
        break;

    case 9:
        i = 1;
        printf("Ingrese el valor total del automovil: ");
        scanf("%d", &l);
        printf("Ingrese el valor de la cuota inicial: ");
        scanf("%d", &m);
        printf("Ingrese la cantidad de cuotas: ");
        scanf("%d", &num);
        suma = l - m;
        multi = suma / num;
        if ((num == 12 || num == 24 || num == 36) && (l > 0) && (m > (l / 5)) && m < l)
        {
            while (i <= num)
            {
                printf("\nCuota %d: %d", i, (multi + (suma / 20)));
                i++;
                suma = suma - multi;
            }
        }
        else
        {
            if (!(num == 12 || num == 24 || num == 36))
            {
                printf("\nCantidad de cuotas inválido.");
            }
            else
            {
                if (!(m > (l / 5)) || m > l)
                {
                    printf("\nLa cuota inicial debe ser mayor al 20%% del valor total y menor al valor total.");
                }
                else
                {
                    if (!(l > 0))
                    {
                        printf("\nError con el valor total del auto.");
                    }
                    else
                    {
                        printf("\nError.");
                    }
                }
            }
        }
        break;

    case 11:
        i = 1;
        bono = 0;
        mate = 0;
        fisica = 0;
        quim = 0;
        prom = 0;
        printf("Ingrese la cantidad de estudiantes");
        scanf("%d", &num);
        while (i <= num)
        {
            printf("Estudiante %d", i);
            printf("Ingrese la nota del examen de matemáticas: ");
            scanf("%f", &bono);
            mate = mate + (bono * 9 / 10);
            printf("Ingrese la nota de la primer tarea de matemáticas: ");
            scanf("%f", &bono);
            mate = mate + (bono / 10);
        }
        break;
        
    case 12:
        i = 1;
        f = 0.0;
        printf("Ingrese un numero: ");
        scanf("%d", &num);
        printf("Ingrese otro numero: ");
        scanf("%d", &x);
        if (x > 10 || x < 1)
        {
            printf("\nx debe ser mayor a 1 y menor a 10.");
        }
        else
        {
            l = 1;
            while (i <= num)
            {
                l = l * i;
                t = (pow((x - 1), i)) / l;
                f = f + t;
                i++;
            }
            printf("\nResultado: %.2f", f);
        }
        break;
    }
}
