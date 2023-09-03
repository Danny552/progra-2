 #include <stdio.h>
 #include <ctype.h>

int main(){
    char basura;
    int opc;
    char ch;
    int dia;
    int eleccion;
    char eleccionch;
    printf ("Inserte un programa: \n");
    scanf ("%d", &eleccion);
    scanf ("%c", &basura);
    switch(eleccion){
        case 1 :
            printf ("Qué opreración desea realizar: \n");
            scanf ("%d", &opc);
            switch(opc){
                case 1 : printf("Consignación");
                break;
                case 2 : printf ("Retiro");
                break;
                case 3 : printf ("Pago de servicios");
                break;
                case 4 : printf ("Cambio de clave");
                break;
                case 5 : printf ("Consulta de saldo");
                break;
                default : printf ("ERROR");
        }
        break;
        case 2 :
            printf ("Qué dia es hoy?: \n");
            scanf ("%d", &dia);
            switch(dia){
                case 1 : printf("Lunes");
                break;
                case 2 : printf ("Martes");
                break;
                case 3 : printf ("Miércoles");
                break;
                case 4 : printf ("Jueves");
                break;
                case 5 : printf ("Viernes");
                break;
                case 6 : printf ("Sábado");
                break;
                case 7 : printf ("Domingo");
                break;
                default : printf ("ERROR");
        }
        break;
        case 3 :
            printf ("Inserte una vocal: \n");
            scanf ("%c", &ch);
            switch(ch){
                case 'a' : printf("Se ha pulsado: 'a'");
                break;
                case 'e' : printf ("Se ha pulsado: 'e'");
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