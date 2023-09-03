 #include <stdio.h>
 #include <ctype.h>

int main(){
    char basura;
    char ch;
    int num;
    int eleccion;
    char eleccionch;
    printf ("Inserte un programa: \n");
    scanf ("%d", &eleccion);
    scanf ("%c", &basura);
    switch(eleccion){
        case 1 :
            printf ("Inserte un numero del 1 al 5: \n");
            scanf ("%d", &num);
            switch(num){
                case 1 : printf("No es primo");
                break;
                case 2 : printf ("Si es primo");
                break;
                case 3 : printf ("Si es primo");
                break;
                case 4 : printf ("No es primo");
                break;
                case 5 : printf ("Si es primo");
                break;
                default : printf ("ERROR");
        }
        break;
        case 2 :
            printf ("Inserte un número para ver si es par o impar: \n");
            scanf ("%d", &num);
            switch((num % 2)){
                case 0 : printf ("Par");
                break;
                case 1 : printf("Impar");
                break;
                default : printf ("ERROR");
        }
        break;
        case 3 :
            printf ("Inserte 3 números, se mostrarán de menor a mayor: \n");
            scanf ("%d %d %d", &num1 &num2 &num3);
            switch(num1, num2, num3){
                case ((num1 < num2) && (num1 < num3)) : printf("%d, ", num1);
                case ((num2 < num3)) : printf ("%d, %d",num2 ,num3);
                default : printf ("%d, %d", num3, num2); 
                break;
                case ((num2 < num1) && (num2 < num3)) : printf("%d, ", num2);
                case ((num1 < num3)) : printf ("%d, %d",num1 ,num3);
                default : printf ("%d, %d", num3, num1); 
                break;
                case 'i' : printf ("Se ha pulsado: 'i'");
                break;
                case 'o' : printf ("Se ha pulsado: 'o'");
                break;
                case 'u' : printf ("Se ha pulsado: 'u'");
                break;
                default : printf ("Error");
        }
        break;
        case 4 : 
            printf ("Inserte un color (r, b, a): \n");
            switch(eleccionch = getchar()){
                case 'r' :
                case 'R' : printf("ROJO");
                break;
                case 'b' :
                case 'B' : printf ("BLANCO");
                break;
                case 'a' :
                case 'A' : printf ("AZUL");
                break;
                default : printf ("Error");
        }     
        break;
        case 5 :
            printf ("Inserte un color (r, b, a): \n");
            switch(eleccionch = toupper(getchar())){
                case 'R' : printf("ROJO");
                break;
                case 'B' : printf ("BLANCO");
                break;
                case 'A' : printf ("AZUL");
                break;
            default : printf ("Error");
        }
        break;
        default : printf ("Error");
    }
}