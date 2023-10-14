#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int n;
    printf("Ingrese la longitud de la cont: ");
    scanf("%d", &n);

    char palabra[n + 1];
    printf("Ingrese la palabra base: ");
    scanf("%s", palabra);

    // Reorganizar los caracteres de la palabra de manera aleatoria
    int len = strlen(palabra);
    for (int i = len - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        char temp = palabra[i];
        palabra[i] = palabra[j];
        palabra[j] = temp;
    }

    int num_simbolos;
    printf("Ingrese la cantidad de símbolos que desea agregar: ");
    scanf("%d", &num_simbolos);

    char simbolos[] = "!@#$%^&*()-_+=";

    int num_numeros;
    printf("Ingrese la cantidad de números que desea agregar: ");
    scanf("%d", &num_numeros);

    char caracteres[num_simbolos + num_numeros];
    
    for (int i = 0; i < num_simbolos; i++) {
        caracteres[i] = simbolos[rand() % strlen(simbolos)];
    }
    
    for (int i = 0; i < num_numeros; i++) {
        caracteres[num_simbolos + i] = '0' + rand() % 10;
    }

    // Combinar los caracteres, palabra reorganizada, símbolos y números
    int total_caracteres = len + num_simbolos + num_numeros;
    char cont[n + total_caracteres + 1];
    strncpy(cont, palabra, n);
    strcat(cont, caracteres);
    cont[n + total_caracteres] = '\0';

    printf("Contraseña segura: %s\n", cont);

    return 0;
}