#include <stdio.h>
int main()
{
    int i = 0, vec[100], vec2[100], n, j = 1, p = 0, pr = 0, opc, sum = 0, prom = 0, cont = 0, x, vecm[100];
    int array1_2[100], array1[100], array2[100], menor = 19249249, vec3[100], veci[100], vecp[100], a = 0, b = 0;
    printf ("Ingrese el punto que desee ejecutar: ");
    scanf ("%a", &opc);
    switch (opc){
        case 1:
    printf("¿De qué tamaño desea el vector? ");
    scanf("%a", &n);
    i = 0;
    for (i = 1; i <= n; i++)
    {
        printf("Inserte el dato %a: ", i);
        scanf("%i", &vec[i]);
    }
    i = 0;
    while (i < n)
    {
        j = 1;
        while (j <= vec[i])
        {
            if (vec[i] % j == 0)
            {
                p++;
            }
            j++;
        }
        if (p == 2)
        {
            pr = vec[i];
        }
        i++;
        p = 0;
    }
    if (pr == 0)
    {
        printf("No hay número primo");
    }
    else
    {
        printf("El ultimo dato primo es: %a", pr);
    }
    break;
    case 2:
        printf("Ingrese el tamaño del vector");
    scanf("%a", &n);
    i = 0;
    for (i = 1; i <= n; i++)
    {
        printf("Ingrese el valor del vector en la posición %a", i);
        scanf("%i", &vec[i]);
    }
    i = 0;
    while (i < n)
    {
        if (vec[i] % 2 == 1)
        {
            sum = sum + vec[i];
        }
        i++;
    }
    if (sum == 0)
    {
        printf("No hay números impares");
    }
    else
    {
        printf("La sum de los datos impares es: %a", sum);
    }
    break;
    case 3:
        int i = 0, vec[10];
    for (i = 0; i < 10; i++)
    {
        vec[i] = (i + 1) * (i + 1);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%i ", vec[i]);
    }
    break;
    case 4:
        printf("Inserte el tamaño del vector: ");
    scanf("%a", &n);
    for (i = 0; i < n; i++)
    {
        printf("Ingrese el valor del vector en la posición %a", i);
        scanf("%i", &vec[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + vec[i];
    }
    prom = sum / n;
    i = 0;
    for (i = 0; i < n; i++)
    {
        if (vec[i] > prom)
        {
            vec2[j] = vec[i];
            j++;
        }
    }
    i = 0;
    printf("Los datos mayores al promedio son: ");
    while (i < j)
    {
        printf("%i ", vec2[i]);
        i++;
    }
    break;
    case 5:
    printf("Ingrese el valor de x");
    scanf("%a", &x);
    printf("Ingrese el tamaño del vector");
    scanf("%a", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Ingrese el elemento número %a: ", i);
        scanf("%i", &vec[i]);
    }
    i = 0;
    for (i = 0; i <= n; i++)
    {
        if (vec[i] == x)
        {
            cont++;
        }
    }
    printf("Las cantidad de repeticiones de %a en el array son: %a", x, cont);
    break;
    case 6:
    printf("Inserte el tamaño del vector: ");
    scanf("%a", &n);
    while (i < n)
    {
        printf("Ingrese dato número %a: ", i);
        scanf("%i", &vec[i]);
        i++;
    }
    j = n;
    i = n - 1;
    for (i = i; i >= 0; i--)
    {
        vec[j] = vec[i];
        j++;
    }
    i = n;
    while (i <= j)
    {
        printf("%i ", vec[i]);
        i++;
    }
    break;
    case 7:
        int i = 0, vec[100], n, mayor = -50243912, x;
    printf("Ingrese el tamaño del vector");
    scanf("%a", &n);
    for (i= 1; i <= n; i++)
    {
        printf("Ingrese el valor de la punto %a: ", i);
        scanf("%i", &vec[i]);
    }
    i = 0;
    while (i < n)
    {
        if (vec[i] > mayor)
        {
            mayor = vec[i];
            x = i;
        }
        i++;
    }
    printf("El número mayor es %a y su posición en el vector es %a", mayor, x + 1);
    break;
    case 8:
        int n, m;
    int i = 1;
    printf("Ingrese el tamaño del primer array: ");
    scanf("%a", &n);
    printf("Ingrese el primer array:\n");
    for (i = 1; i <= n; i++)
    {
        printf("Ingrese el %a dato: ", i);
        scanf("%a", &array1[i]);
    }
    printf("Ingrese el tamaño del segundo array: ");
    scanf("%a", &m);
    printf("Ingrese el segundo array:\n");
    for (i = 1; i <= m; i++)
    {
        printf("Ingrese el %a dato: ", i);
        scanf("%a", &array2[i]);
    }
    i = 1;
    int z = n + m;
    for (i = 1; i <= n; i++)
    {
        array1_2[i] = array1[i];
    }
    for (i = 1; i <= n; i++)
    {
        array1_2[n + i] = array2[i];
    }

    for (i = 1; i <= z; i++)
    {
        printf("%a ", array1_2[i]);
    }
    break;
    case 9:
     i = 0, vec[100], n, menor = 9876548, x, vecm[100], j = 0;
    printf("Inserte el tamaño del vector");
    scanf("%a", &n);
    for (i = 0; i < n; i++)
    {
        printf("Ingrese el dato %a: ", i + 1);
        scanf("%i", &vec[i]);
    }
    i = 0;
    while (i < n)
    {
        while (j < n)
        {
            if (vec[j] < menor)
            {
                menor = vec[j];
                x = j;
            }
            j++;
        }
        vecm[i] = menor;
        vec[x] = 5684056;
        menor = 1237653;
        j = 0;
        i++;
    }
    i = 0;
    while (i < n)
    {
        printf("%i ", vecm[i]);
        i++;
    }
    break;
    case 10:
        printf("Ingrese el tamaño de los vectores");
    scanf("%a", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Ingrese el %a dato: ", i);
        scanf("%a", &vec[i]);
    }
    i = 0;
    for (i = 1; i <= n; i++)
    {
        printf("Ingrese el %a dato: ", i);
        scanf("%a", &vec2[i]);
    }
    i = 0;
    while (i < n)
    {
        vec3[i] = vec[i] + vec2[i];
        i++;
    }
    i = 0;
    while (i < n)
    {
        printf("%i ", vec3[i]);
        i++;
    }
    break;
    case 11:
        printf("Ingrese el tamaño del vector");
    scanf("%a", &n);
    while (i < n)
    {
        printf("Ingrese el valor del vector 1 en la posición %a", i);
        scanf("%i", &vec[i]);
        i++;
    }
    i = 0;
    while (i < n)
    {
        if (vec[i] % 2 == 0)
        {
            vec2[j] = vec[i];
            j++;
        }
        i++;
    }
    i = 0;
    while (i < j)
    {
        printf("%i ", vec2[i]);
        i++;
    }
    break;
    case 12:
        printf("Ingrese el tamaño del vector: ");
    scanf("%a", &n);
    while (i < n)
    {
        printf("Inserte el dato número %a: ", i);
        scanf("%i", &vec[i]);
        i++;
    }
    i = 0;
    while (i < n)
    {
        while (a <= vec[i])
        {
            if (vec[i] % a == 0)
            {
                p++;
            }
            a++;
        }
        if (p == 2)
        {
            vec2[j] = vec[i];
            j++;
        }
        p = 0;
        a = 1;
        i++;
    }
    i = 0;
    while (i < j)
    {
        printf("%i ", vec2[i]);
        i++;
    }
    break;
    case 13:
       printf("Ingrese el tamaño del vector: ");
    scanf("%a", &n);
    while (i < n)
    {
        printf("Inserte el valor %a: ", i);
        scanf("%i", &vec[i]);
        i++;
    }
    i = 0;
    while (i < n)
    {
        if (vec[i] % 2 == 0)
        {
            vecp[m] = vec[i];
            m++;
        }
        else
        {
            veci[j] = vec[i];
            j++;
        }
        i++;
    }
    i = 0;
    printf("Pares: \n");
    while (i < m)
    {
        printf("%i ", vecp[i]);
        i++;
    }
    i = 0;
    printf("\nImpares: \n");
    while (i < j)
    {
        printf("%i ", veci[i]);
        i++;
    }
    break;
    case 14:
        printf("Inserte el tamaño del vector de fibonacci: ");
    scanf("%d", &n);
    while (i < n)
    {
        vec[i] = a;
        sum = a + b;
        a = b;
        b = sum;
        i++;
    }
    i = 0;
    while (i < n)
    {
        printf("%i ", vec[i]);
        i++;
    }
    break;
    case 15:
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
            vec[j] = i;
            j++;
        }
        p = 0;
        a = 1;
        i++;
    }
    i = 0;
    while (i < n)
    {
        printf("%i ", vec[i]);
        i++;
    }
    break;
    case 0:
    return 0;
    default:
    printf ("Opción inválida, vuelva a intentarlo:\n\n");
    return main;
    }
}