#include<stdio.h>
int main(){
    int opc = 0;
    printf("1) Ingresar un número del 1 al 5 y verificar si es primo\n2) Ingresar un número y decir si es par o impar");
    scanf ("%d", &opc);
    if (opc == 1){
     int num;
    scanf ("%d", &num);
    if (num >= 1 && num <= 5){
    if ((num == 2)|| (num == 3) || (num == 5)){
        printf ("es primo");
    }
    else{
        printf ("no es primo");
    }
    }
    else{
        printf("No se encuentra en el rango");
    } 
    }
    if (opc == 2){
        int num;
        scanf ("%d", &num);
        if (num % 2 == 0){
            printf("el número %d es par", num);
        }
        else{
            printf ("el número %d es impar", num);
        }
        return main();
    }
    if (opc == 3){
                int dia;
        scanf ("%d", dia);
        if(dia == 1){
            printf ("hoy es lunes");
        }
         if (dia == 2){
         printf ("hoy es martes");
            }
            if(dia == 3){
            printf ("hoy es miércoles");
        }
         if (dia == 4){
         printf ("hoy es jueves");
            }
            if(dia == 5){
            printf ("hoy es viernes");
        }
         if (dia == 6){
         printf ("hoy es sábado");
            }
            if(dia == 7){
            printf ("hoy es domingo");
        }
    }
    if (opc == 4){
        int mes;
        scanf ("%d", mes);
        if(mes == 1){
            printf ("es enero");
        }
         if (mes == 2){
         printf ("es febrero");
            }
            if(mes == 3){
            printf ("es marzo");
        }
         if (mes == 4){
         printf ("es abril");
            }
            if(mes == 5){
            printf ("es mayo");
        }
         if (mes == 6){
         printf ("es junio");
            }
            if(mes == 7){
            printf ("es julio");
        }
        if(mes == 8){
            printf ("es agosto");
        }
         if (mes == 9){
         printf ("es septiembre");
            }
            if(mes == 10){
            printf ("es octubre");
        }
         if (mes == 11){
         printf ("es noviembre");
            }
            if(mes == 12){
            printf ("es diciembre");
    }
}
    if (opc == 5){
        int num1, num2, num3;
        scanf ("%d", &num1);
        scanf ("%d", &num2);
        scanf ("%d", &num3);
        if(num1 < num2 && num1 < num2){
            printf ("%d, ", num1);
            if(num2 < num3){
                printf("%d, %d", num2, num3);
            }
            else{
                printf("%d, %d", num3, num2);
            }
        }
                if(num2 < num1 && num2 < num3){
            printf ("%d, ", num2);
            if(num1 < num3){
                printf("%d, %d", num1, num3);
            }
            else{
                printf("%d, %d", num3, num1);
            }
        }
                if(num3 < num2 && num3 < num1){
            printf ("%d, ", num3);
            if(num3 < num2){
                printf("%d, %d", num3, num2);
            }
            else{
                printf("%d, %d", num2, num3);
            }
        }
    }
    if (opc == 6){
        int num1, num2, num3;
        scanf ("%d", &num1);
        scanf ("%d", &num2);
        scanf ("%d", &num3);
        if(num1 > num2 && num1 > num2){
            printf ("%d, ", num1);
            if(num2 > num3){
                printf("%d, %d", num2, num3);
            }
            else{
                printf("%d, %d", num3, num2);
            }
        }
                if(num2 > num1 && num2 > num3){
            printf ("%d, ", num2);
            if(num1 > num3){
                printf("%d, %d", num1, num3);
            }
            else{
                printf("%d, %d", num3, num1);
            }
        }
                if(num3 > num2 && num3 > num1){
            printf ("%d, ", num3);
            if(num3 > num2){
                printf("%d, %d", num3, num2);
            }
            else{
                printf("%d, %d", num2, num3);
            }
        }
    }
    if (opc == 7){
        int num1, num2, num3;
        scanf ("%d", &num1);
        scanf ("%d", &num2);
        scanf ("%d", &num3);
        if(num1 > num2 && num1 > num2){
            printf ("%d, ", num1);
            if(num2 > num3){
                printf("%d\n %d\n", num2, num3);
            }
            else{
                printf("%d\n %d\n", num3, num2);
            }
        }
                if(num2 > num1 && num2 > num3){
            printf ("%d\n", num2);
            if(num1 > num3){
                printf("%d\n%d\n", num1, num3);
            }
            else{
                printf("%d\n%d\n", num3, num1);
            }
        }
                if(num3 > num2 && num3 > num1){
            printf ("%d\n", num3);
            if(num3 > num2){
                printf("%d\n%d\n", num3, num2);
            }
            else{
                printf("%d\n%d\n", num2, num3);
            }
        }
    }
    if (opc == 8){
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    if(num > 0){
        printf("El número es positivo.\n");
    }
    if(num < 0){
        printf("El número es negativo.\n");
    }
    else{
        printf("El número es 0.\n");
    }
    }
    if (opc == 9){
        char c;
        scanf ("%c", &c);
        if (c == 'S' || c == 'N'){
            printf ("si es");
        }
        else{
            printf ("no es");
        }
    }
    if (opc == 10){
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    if(num > 100){
        printf("El número es mayor que 100.\n");
    }
    if(num < 100){
        printf("El número es menor que 100.\n");
    }
    else{
        printf("El número es 100.\n");
    }  
    }
    if (opc == 11){
        char c;
        scanf ("%c", &c);
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'u'){
            printf ("si es");
        }
        else{
            printf ("no es");
        }
    }
    if (opc == 12){
     int num1, num2, num3;
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer número: ");
    scanf("%d", &num3);
    if (num1 < num2 && num2 < num3) {
        printf("Los números están en orden creciente.\n");
        } 
    else{
        printf("Los números no están en orden creciente.\n");
        }
    }
    if (opc == 13){
    int num1, num2, num3;
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer número: ");
    scanf("%d", &num3);
    if (num1 > num2 && num2 > num3) {
        printf("Los números están en orden decreciente.\n");
        } 
    else{
        printf("Los números no están en orden decreciente.\n");
        }
    }
    if (opc == 14){
        int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
        printf ("ingrese esa vaina: ");
        scanf ("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d",&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9,&num10);
        if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5 && num1 > num6 && num1 > num7 && num1 > num8 && num1 > num9 && num1 > num10){
        printf ("es mayor el %d", num1);
        }
        if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5 && num2 > num6 && num2 > num7 && num2 > num8 && num2 > num9 && num2 > num10){
        printf ("es mayor el %d", num2);
        }
         if (num3 > num2 && num3 > num1 && num3 > num4 && num3 > num5 && num3 > num6 && num3 > num7 && num3 > num8 && num3 > num9 && num3 > num10){
        printf ("es mayor el %d", num3);
        }
        if (num4 > num2 && num4 > num3 && num4 > num1 && num4 > num5 && num4 > num6 && num4 > num7 && num4 > num8 && num4 > num9 && num4 > num10){
        printf ("es mayor el %d", num4);
        }
        if (num5 > num2 && num5 > num3 && num5 > num4 && num5 > num1 && num5 > num6 && num5 > num7 && num5 > num8 && num5 > num9 && num5 > num10){
        printf ("es mayor el %d", num5);
        }
        if (num6 > num2 && num6 > num3 && num6 > num4 && num6 > num5 && num6 > num1 && num6 > num7 && num6 > num8 && num6 > num9 && num6 > num10){
        printf ("es mayor el %d", num6);
        }
        if (num7 > num2 && num7 > num3 && num7 > num4 && num7 > num5 && num7 > num6 && num7 > num2 && num7 > num8 && num7 > num9 && num7 > num10){
        printf ("es mayor el %d", num7);
        }
        if (num8 > num2 && num8 > num3 && num8 > num4 && num8 > num5 && num8 > num6 && num8 > num7 && num8 > num1 && num8 > num9 && num8 > num10){
        printf ("es mayor el %d", num8);
        }
        if (num9 > num2 && num9 > num3 && num9 > num4 && num9 > num5 && num9 > num6 && num9 > num7 && num9 > num8 && num9 > num1 && num9 > num10){
        printf ("es mayor el %d", num9);
        }
        if (num10 > num2 && num10 > num3 && num10 > num4 && num10 > num5 && num10 > num6 && num10 > num7 && num10 > num8 && num10 > num9 && num10 > num1){
        printf ("es mayor el %d", num10);
        }
    //los menores 
        if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5 && num1 < num6 && num1 < num7 && num1 < num8 && num1 < num9 && num1 < num10){
        printf ("es menor el %d", num1);
        }
        if (num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5 && num2 < num6 && num2 < num7 && num2 < num8 && num2 < num9 && num2 < num10){
        printf ("es menor el %d", num2);
        }
         if (num3 < num2 && num3 < num1 && num3 < num4 && num3 < num5 && num3 < num6 && num3 < num7 && num3 < num8 && num3 < num9 && num3 < num10){
        printf ("es menor el %d", num3);
        }
        if (num4 < num2 && num4 < num3 && num4 < num1 && num4 < num5 && num4 < num6 && num4 < num7 && num4 < num8 && num4 < num9 && num4 < num10){
        printf ("es menor el %d", num4);
        }
        if (num5 < num2 && num5 < num3 && num5 < num4 && num5 < num1 && num5 < num6 && num5 < num7 && num5 < num8 && num5 < num9 && num5 < num10){
        printf ("es menor el %d", num5);
        }
        if (num6 < num2 && num6 < num3 && num6 < num4 && num6 < num5 && num6 < num1 && num6 < num7 && num6 < num8 && num6 < num9 && num6 < num10){
        printf ("es menor el %d", num6);
        }
        if (num7 < num2 && num7 < num3 && num7 < num4 && num7 < num5 && num7 < num6 && num7 < num2 && num7 < num8 && num7 < num9 && num7 < num10){
        printf ("es menor el %d", num7);
        }
        if (num8 < num2 && num8 < num3 && num8 < num4 && num8 < num5 && num8 < num6 && num8 < num7 && num8 < num1 && num8 < num9 && num8 < num10){
        printf ("es menor el %d", num8);
        }
        if (num9 < num2 && num9 < num3 && num9 < num4 && num9 < num5 && num9 < num6 && num9 < num7 && num9 < num8 && num9 < num1 && num9 < num10){
        printf ("es menor el %d", num9);
        }
        if (num10 < num2 && num10 < num3 && num10 < num4 && num10 < num5 && num10 < num6 && num10 < num7 && num10 < num8 && num10 < num9 && num10 < num1){
        printf ("es menor el %d", num10);
        }
    }
}