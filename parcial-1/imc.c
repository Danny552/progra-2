#include <stdio.h>
int main(){
    float peso;
    float alt;
    printf ("Ingrese su peso (kg): ");
    scanf ("%f", &peso);
    printf ("Ingrese su altura (m): ");
    scanf ("%f", &alt);
    float imc = peso / (alt * alt);
    switch ((int)imc){
        case 0 ... 15:
        printf ("Su IMC es de %.0f \n", imc);
        printf ("Su diagnóstico es: Criterio de ingreso en hospital.");
        break;
        case 16:
        printf ("Su IMC es de %.0f \n", imc);
        printf ("Su diagnóstico es: Infrapeso.");
        break;
        case 17:
        printf ("Su IMC es de %.0f \n", imc);
        printf ("Su diagnóstico es: Bajo peso.");
        case 18 ... 24:
        printf ("Su IMC es de %.0f \n", imc);
        printf ("Su diagnóstico es: Normal (saludable).");
        break;
        case 25 ... 29:
        printf ("Su IMC es de %.0f \n", imc);
        printf ("Su diagnóstico es: Sobrepeso (obesidad grado I).");
        break;
        case 30 ... 34:
        printf ("Su IMC es de %.0f \n", imc);
        printf ("Su diagnóstico es: Sobrepeso crónico (obesidad grado II).");
        break;
        case 35 ... 39:
        printf ("Su IMC es de %.0f \n", imc);
        printf ("Su diagnóstico es: Obesidad premórbida (obesidad grado III).");
        break;
        default:
        printf ("Su IMC es de %.0f \n", imc);
        printf ("Su diagnóstico es: Obesidad mórbida (obesidad grado IV).");
    }
}