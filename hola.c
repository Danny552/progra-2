#include <stdio.h>
#include <stdbool.h>

int main()
{
    float lado1, lado2, lado3, perimetro;
    int op, num, num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, mayor, menor, kg, hora, minutos, segundos, años;
    char ch;
    printf("\nIngrese el número del ejercicio que desea ejecutar: ");
    scanf("%d", &op);
    
    switch(op){
        case 1: //Números primos
        printf("\nIngrese un número del 1 al 5 y se le dirá si es o no ese un número primo: ");
        scanf("%d", &num);
            switch(num){
                case 1:
                case 4:
                printf("\nEl número no es primo.");
                break;
                
                case 2:
                case 3:
                case 5:
                printf("\nEl número es primo.");
                break;
                
                default: printf("El número no está entre 1 y 5.");
                break;
            };
        break;
        
        case 2: //Par o impar
        printf("\nIngrese un número entero y se le dirá si es par o no es par: "); 
        scanf("%d", &num);
            switch((num%2)==0){
                case true:
                printf("\nEl número es par.");
                break;
                
                case false:
                printf("\nEl número no es par.");
                break;
                
                default: printf("\nError.");
            };
        break;
        
        case 3: //Día de la semana
        printf("\nIngrese un número del 1 al 7 y se le dará el día de la semana correspondiente: "); 
        scanf("%d", &num);
            switch(num){
            case 1:
            printf("\nLunes");
            break;
            
            case 2:
            printf("\nMartes");
            break;
            
            case 3:
            printf("\nMiércoles");
            break;
            
            case 4:
            printf("\nJueves");
            break;
            
            case 5:
            printf("\nViernes");
            break;
            
            case 6:
            printf("\nSábado");
            break;
            
            case 7:
            printf("\nDomingo");
            break;
            
            default: printf("\nEl número no está entre 1 y 7.");
            break;
            };
        break;
        
        case 4: //Mes del año
        printf("\nIngrese un número del 1 al 12 y se le dirá el mes correspondiente: ");
        scanf("%d", &num);
            switch(num){
                case 1:
                printf("\nEnero");
                break;
                
                case 2:
                printf("\nFebrero");
                break;
                
                case 3:
                printf("\nMarzo");
                break;
                
                case 4:
                printf("\nAbril");
                break;
                
                case 5:
                printf("\nMayo");
                break;
                
                case 6:
                printf("\nJunio");
                break;
                
                case 7:
                printf("\nJulio");
                break;
                
                case 8:
                printf("\nAgosto");
                break;
                
                case 9:
                printf("\nSeptiembre");
                break;
                
                case 10:
                printf("\nOctubre");
                break;
                
                case 11:
                printf("\nNoviembre");
                break;
                
                case 12:
                printf("\nDiciembre");
                break;
                
                default: printf("\nEl número no está entre 1 y 12");
                break;
            };
        break;
        
        case 5: //De menor a mayor
        printf("\nIngrese el primer número: ");
        scanf("%d", &num1);
        printf("\nIngrese el segundo número: ");
        scanf("%d", &num2);
        printf("\nIngrese el tercer número: ");
        scanf("%d", &num3);
            switch((num1 < num2) && (num1 < num3)){
                case true:
                    switch(num2 < num3){
                        case true:
                        printf("\n%d < %d < %d", num1, num2, num3);
                        break;
                        
                        default:
                        printf("\n%d < %d < %d", num1, num3, num2);
                        break;
                    };
                    
                default:
                switch((num2 < num1) && (num2 < num3)){
                    case true:
                    switch(num1 < num3){
                        case true:
                        printf("\n%d < %d < %d", num2, num1, num3);
                        break;
                        
                        default:
                        printf("\n%d < %d < %d", num2, num3, num1);
                        break;
                    };
                    break;
                    
                    default:
                        switch((num3 < num1) && (num3 < num2)){
                            case true:
                            switch(num1 < num2){
                                case true:
                                printf("\n%d < %d < %d", num3, num1, num2);
                                break;
                                
                                default:
                                printf("\n%d < %d < %d", num3, num2, num1);
                                break;
                            };
                            break;
                            
                            default: printf("\nError.");
                            break;
                        };
                    break;
                };
                break;
            };
        break;
        
        case 6: //De mayor a menor
        printf("\nIngrese el primer número: ");
        scanf("%d", &num1);
        printf("\nIngrese el segundo número: ");
        scanf("%d", &num2);
        printf("\nIngrese el tercer número: ");
        scanf("%d", &num3);
            switch((num1 > num2) && (num1 > num3)){
                case true:
                    switch(num2 > num3){
                        case true:
                        printf("\n%d > %d > %d", num1, num2, num3);
                        break;
                        
                        default:
                        printf("\n%d > %d > %d", num1, num3, num2);
                        break;
                    };
                    
                default:
                switch((num2 > num1) && (num2 > num3)){
                    case true:
                    switch(num1 > num3){
                        case true:
                        printf("\n%d > %d > %d", num2, num1, num3);
                        break;
                        
                        default:
                        printf("\n%d > %d > %d", num2, num3, num1);
                        break;
                    };
                    break;
                    
                    default:
                        switch((num3 > num1) && (num3 > num2)){
                            case true:
                            switch(num1 > num2){
                                case true:
                                printf("\n%d > %d > %d", num3, num1, num2);
                                break;
                                
                                default:
                                printf("\n%d > %d > %d", num3, num2, num1);
                                break;
                            };
                            break;
                            
                            default: printf("\nError.");
                            break;
                        };
                    break;
                };
                break;
            };
        break;
        case 7:
        printf("\nIngrese el primer número: ");
        scanf("%d", &num1);
        printf("\nIngrese el segundo número: ");
        scanf("%d", &num2);
        printf("\nIngrese el tercer número: ");
        scanf("%d", &num3);
            switch((num1 > num2) && (num1 > num3)){
                case true:
                printf("\n%d", num1);
                    switch((num2 > num3)){
                        case true:
                            printf("\n%d", num2);
                            printf("\n%d", num3);
                        break;
                        
                        case false:
                            switch((num2 == num3)){
                                case true:
                                    printf("\n%d = %d", num2, num3);
                                break;
                                
                                case false:
                                    switch((num2 < num3)){
                                        case true:
                                            printf("\n%d", num3);
                                            printf("\n%d", num2);
                                        break;
                                        
                                        default: printf("\nError.");
                                        break;
                                    };
                                break;
                            };
                        break;
                        };
                break;
            };
            switch((num2 > num1) && (num2 > num3)){
                case true:
                printf("\n%d", num2);
                    switch((num1 > num3)){
                        case true:
                            printf("\n%d", num1);
                            printf("\n%d", num3);
                        break;
                        
                        case false:
                            switch((num1 == num3)){
                                case true:
                                    printf("\n%d = %d", num1, num3);
                                break;
                                
                                case false:
                                    switch((num1 < num3)){
                                        case true:
                                            printf("\n%d", num3);
                                            printf("\n%d", num1);
                                        break;
                                        
                                        default: printf("\nError.");
                                        break;
                                    };
                                break;
                            };
                        break;
                        };
                break;
            };
            switch((num3 > num2) && (num3 > num1)){
                case true:
                printf("\n%d", num3);
                    switch((num2 > num1)){
                        case true:
                            printf("\n%d", num2);
                            printf("\n%d", num1);
                        break;
                        
                        case false:
                            switch((num2 == num1)){
                                case true:
                                    printf("\n%d = %d", num2, num1);
                                break;
                                
                                case false:
                                    switch((num2 < num1)){
                                        case true:
                                            printf("\n%d", num1);
                                            printf("\n%d", num2);
                                        break;
                                        
                                        default: printf("\nError.");
                                        break;
                                    };
                                break;
                            };
                        break;
                        };
                break;
            };
        break;        
        case 8: //Positivo o negativo
        printf("Ingrese un número: ");
        scanf("%d", &num);
        bool b = (num > 0);
        bool b2 = (num == 0);
        switch(b2){
            case 1:
            printf("\nEl número es cero.");
            break;
            
            case 0:
            switch(b){
                case 1:
                printf("\nEl número es positivo.");
                break;
                
                case 0:
                printf("\nEl número es negativo.");
                break;
            };
            break;
            
            default: printf("\nError.");
        };
        break;
        
        default: printf("Error.");
        break;
        case 9: //Acepta S o N
        printf ("Inserte un caracter, SÓLO SE ACEPTA 'S' Y 'N': ");
        scanf ("%c", &ch);
        switch (ch){
            case 'S':
            case 'N': printf ("En efecto, presionó S o N");
            break;
            default : printf ("NO HA SEGUIDO INSTRUCCIONES");
            break;
        }
        break;
        case 10: // Numero mayor que 100
        printf ("digite un número: ");
        scanf ("%d", &num);
        switch (num < 100){
            case true : printf ("Es mayor que 100");
            break;
            case false: printf ("Es menor que 100");
            break;
            default: printf ("Error");
        }
        break;
        case 11: //si es vocal o no
        printf ("Inserte un caracter para detectar si es vocal o no: ");
        scanf ("%d", &ch);
        switch (ch){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
            printf ("Si es vocal");
            break;
            default: printf ("No es vocal");
            break;
        }
        break;
        case 12 : //orden creciente
        printf ("Inserte el primer número");
        scanf ("%d", &num1);
        printf ("Inserte el segundo número");
        scanf ("%d", &num2);
        printf ("Inserte el tercer número");
        scanf ("%d", &num3);
        switch (num1 > num2 && num1 > num3){
            case true : printf ("Están en orden creciente");
            break;
            case false: printf ("No están en orden creciente");
            break;
            default : printf ("Error");
        }
        case 13 : //orden decreciente
         printf ("Inserte el primer número");
        scanf ("%d", &num1);
        printf ("Inserte el segundo número");
        scanf ("%d", &num2);
        printf ("Inserte el tercer número");
        scanf ("%d", &num3);
        switch (num1 < num2 && num1 < num3){
            case true : printf ("Están en orden decreciente");
            break;
            case false: printf ("NO están en orden decreciente");
            break;
            default : printf ("Error");
        }
        break;
        case 14 : // mayor de 10
        printf ("Ingrese el primer número: ");
        scanf ("%d", &num1);
        mayor = menor = num1;

        printf ("Ingrese el segundo número: ");
        scanf ("%d", &num2);
        switch (num2 > mayor){
            case true : mayor = num2;
            break;
            case false: 
            switch (num2 < menor){
                case true: menor = num2;
                break;
        }
        break;
        }
        printf ("Ingrese el tercer número: ");
        scanf ("%d", &num3);
        switch (num3 > mayor){
            case true : mayor = num3;
            break;
            case false: 
            switch (num3 < menor){
                case true: menor = num3;
                break;
        }
        break;
        }
        printf ("Ingrese el cuarto número: ");
        scanf ("%d", &num4);
        switch (num4 > mayor){
            case true : mayor = num4;
            break;
            case false: 
            switch (num4 < menor){
                case true: menor = num4;
                break;
        }
        break;
        }
        printf ("Ingrese el quinto número: ");
        scanf ("%d", &num5);
        switch (num5 > mayor){
            case true : mayor = num5;
            break;
            case false: 
            switch (num5 < menor){
                case true: menor = num5;
                break;
        }
        break;
        }
        printf ("Ingrese el sexto número: ");
        scanf ("%d", &num6);
        switch (num6 > mayor){
            case true : mayor = num6;
            break;
            case false: 
            switch (num6 < menor){
                case true: menor = num6;
                break;
        }
        break;
        }
        printf ("Ingrese el séptimo número: ");
        scanf ("%d", &num7);
        switch (num7 > mayor){
            case true : mayor = num7;
            break;
            case false: 
            switch (num7 < menor){
                case true: menor = num7;
                break;
        }
        break;
        }
        printf ("Ingrese el octavo número: ");
        scanf ("%d", &num8);
        switch (num8 > mayor){
            case true : mayor = num8;
            break;
            case false: 
            switch (num8 < menor){
                case true: menor = num8;
                break;
        }
        break;
        }
        printf ("Ingrese el noveno número: ");
        scanf ("%d", &num9);
        switch (num9 > mayor){
            case true : mayor = num9;
            break;
            case false: 
            switch (num9 < menor){
                case true: menor = num9;
                break;
        }
        break;
        }
        printf ("Ingrese el décimo número: ");
        scanf ("%d", &num10);
        switch (num10 > mayor){
            case true : mayor = num10;
            break;
            case false: 
            switch (num10 < menor){
                case true: menor = num10;
                break;
        }
        break;
    }
    break;
    case 15 : //comprobar si n3 es la suma de num1 y num2
    printf ("Inserte tres números, (separado por espacios)");
    scanf ("%d %d %d", &num1, &num2, &num3);
    num4 = num1 + num2;
    switch (num3 == num4){
        case true: printf ("%d + %d = %d", num1, num2, num3);
        break;
        case false: printf ("%d + %d no es %d", num1, num2, num3);
        break;
    }
    break;
    case 16: //opciones
    printf ("Inserte la opción que desee realizar\n");
    printf ("1. Archivo\num2. Buscar\n3. Salir\n");
    scanf ("%d", &num);
    switch (num){
        case 1 : printf ("Usted escogió archivo");
        break;
        case 2 : printf ("Usted escogió buscar");
        break;
        case 3 : printf ("Adiós");
        break;
        default: printf ("Error, opción inválida");
    }
    break;
    case 17: //algo
       printf ( "Ingrese los números" );
        scanf ( "%d %d", &num1, &num2 );
        switch( ( ( num1>=1 ) & ( num1 <= 5 ) ) & ( ( num2>=1 ) & ( num2 <= 5 ) ) )
        {
        case true:
            {
            switch(!( num1==4|num1==1 )&!( num2==4|num2==1 ))
            {
            case true:
            {
                printf ( "Ambos números son primos" );
                break;
            }
            case false:
            {
                printf ( "No ambos números son primos" );
                break;
            }
            }
            break;
            }
        case false:
        printf ( "El o los números no son parte del rango" );
        break;
        }
    break;
    case 18: // par o no
            printf ( "Ingrese un número" );
        scanf ( "%d", &num1 );
        printf ( "Ingrese otro número" );
        scanf ( "%d", &num2 );
        switch( num1%2==0 )
        {
        case 1:
            printf("%d es par\n",num1);
            break;
            case 0:
            printf("%d no es par\n",num1);
        }
        switch(num2%2==0)
        {
            case 1:
            printf("%d es par\n",num2);
            break;
            case 0:
            printf("%d no es par\n",num2);
        }
    break;
    case 19: //igual multi
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer número: ");
    scanf("%d", &num3);
    num4=num1*num2;
    switch(num4==num3){
        case 1:
        printf("La multiplicación de %d por %d es igual a %d.\n", num1, num2, num3);
        break;
        case 0:
        printf("La multiplicación de %d por %d no es igual a %d.\n", num1, num2, num3);
        break;
    }
    break;
    case 20: //division igual
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer número: ");
    scanf("%d", &num3);
    num4=num1%num2;
    switch(num4==num3)
    {
        case 1:
        printf("El resto de la división de %d entre %d es igual a %d.\n", num1, num2, num3);
        break;
        case 0:
        printf("El resto de la división de %d entre %d no es igual a %d.\n", num1, num2, num3);
        break;
    }
    break;
    case 21: //calculadora triángulos
    printf("Calculadora de perimetro de triangulo\n");
    printf("(1) Triangulo Equilatero\n");
    printf("(2) Triangulo Isosceles\n");
    printf("(3) Triangulo Escaleno\n");
    printf("Selecciona una opción: ");
    scanf("%d", &num);
    switch(num)
    {
        case 1:
        printf("Ingrese la longitud de un lado del triangulo equilatero: ");
        scanf("%f", &lado1);
        perimetro=3*lado1;
        break;
        case 2:
        printf("Ingrese la longitud de dos lados iguales del triangulo isosceles: ");
        scanf("%f %f", &lado1, &lado2);
        printf("Ingrese la longitud del tercer lado del triangulo isosceles: ");
        scanf("%f", &lado3);
        perimetro=lado1+lado2+lado3;
        break;
        case 3:
        printf("Ingrese la longitud de los tres lados del triangulo escaleno: ");
        scanf("%f %f %f", &lado1, &lado2, &lado3);
        perimetro=lado1+lado2+lado3;
        break;
        default:
        printf("Opción no valida.\n");
        break;
    }
    printf("El perimetro del triangulo seleccionado es: %.2f\n", perimetro);
    break;
    case 22: //kg a otra cosa
    printf("Escribe la masa en kg:");
    scanf("%i", &kg);
    printf("Las opciones son las siguientes: \n1. Hectogramo\n2. Decagramo\n3. Gramo\n4. Decigramo\n");
    printf("Elija la opcion:");
    scanf("%i", &num);
    switch(num)
    {
        case 1:
        printf("Elegiste de kg a Hectogramo -> ");
        kg=kg*10;
        printf("%i", kg);
        break;
        case 2:
        printf("Elegiste de kg a Decagramo -> ");
        kg=kg*100;
        printf("%i", kg);
        break;
        case 3:
        printf("Elegiste de kg a Gramo -> ");
        kg=kg*1000;
        printf("%i", kg);
        break;
        case 4:
        printf("Elegiste de kg a Decigramo -> ");
        kg=kg*10000;
        printf("%i", kg);
        break;
        default:
        printf("Elegiste una opción incorrecta");
        break;
    }
    break;
    case 23: //neto o bruto
        printf("¿Su importe es mayor a 15000? (s/n):");
    switch (num = getchar())
    {
        case 's':
        case 'S':
        printf("Ingrese el importe bruto: ");
        scanf("%d", &num1);
        num2=num1-(num1*0.16);
        printf("El importe neto es: %.2f", num2);
        break;
        default:
        printf("Ingrese el importe bruto: ");
        scanf("%d", &num1);
        num2=num1-(num1*0.1);
        printf("El importe neto es: %.2f", num2);
        break;
    }
    break;
    case 24: //reloj +1
        printf("Ingresa la hora (formato 24 horas):");
    scanf("%d %d %d", &hora, &minutos, &segundos);
    switch( hora<0|hora>23|minutos<0|minutos>59|segundos<0|segundos>59)
    {
    case 1:
    printf("Hora invalida. Asegurate de ingresar valores validos.\n");
    break;
    case 0:
    {
        segundos++;
        switch (segundos)
        {
            case 60:
            segundos=0;
            minutos++;
            case 61:
            switch(minutos==60)
            {
                case 1:
                minutos=0;
                hora++;
            }
            case 62:
            switch(hora==24)
            {
                case 1:
                {
                    hora=0;
                }
                break;
            }
            default:
            break;
        }
    }
    }
    printf("La hora un segundo después  es: %02d:%02d:%02d\n", hora, minutos, segundos);
    break;
    case 25: //sueldos
    printf("Por favor digite los años en la empresa para calcular el sueldo con su respectivo aumento:");
    float sueldoAumentado, sueldo=40000.0;
    scanf("%i", &años);
    switch (años)
    {
        case 1:
        case 2:
        case 3:
        sueldoAumentado=sueldo+sueldo*0.03;
        printf("El sueldo es de: %.2f", sueldoAumentado);
        break;
        case 4:
        case 5:
        sueldoAumentado=sueldo+sueldo*0.05;
        printf("El sueldo es de: %.2f", sueldoAumentado);
        break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        sueldoAumentado=sueldo+sueldo*0.07;
        printf("El sueldo es de: %.2f", sueldoAumentado);
        break;
        default:
        sueldoAumentado=sueldo+sueldo*0.1;
        printf("El sueldo es de: %.2f", sueldoAumentado);
        break;
    }
    };
    
    return main();
}