#include <stdio.h>
#include <string.h>

int main() {
    char palabraSecreta[20];
    char palabraAdivinada[20];
    int vidas = 6;
    int longitudPalabra;
    int adivinadas = 0;
    int intentosFallidos = 0;

    printf("Bienvenido al juego de ahorcado.\n");
    printf("Ingrese la palabra a adivinar: ");
    scanf("%s", palabraSecreta);

    longitudPalabra = strlen(palabraSecreta);

    for (int i = 0; i < longitudPalabra; i++) {
        palabraAdivinada[i] = '_';
    }

    palabraAdivinada[longitudPalabra] = '\0';

    while (vidas > 0 && adivinadas < longitudPalabra) {
        printf("Palabra adivinada: %s\n", palabraAdivinada);
        printf("Vidas restantes: %d\n", vidas);

        char letra;
        printf("Ingresa una letra: ");
        scanf(" %c", &letra);

        int acierto = 0;

        for (int i = 0; i < longitudPalabra; i++) {
            if (palabraSecreta[i] == letra && palabraAdivinada[i] != letra) {
                palabraAdivinada[i] = letra;
                acierto = 1;
                adivinadas++;
            }
        }

        if (!acierto) {
            vidas--;
            intentosFallidos++;

            printf("\n");

            if (intentosFallidos == 1) {
                printf("  O\n");
            }
            else if (intentosFallidos == 2) {
                printf("  O\n");
                printf("  |\n");
            }
            else if (intentosFallidos == 3) {
                printf("  O\n");
                printf(" /|\n");
            }
            else if (intentosFallidos == 4) {
                printf("  O\n");
                printf(" /|\\\n");
            }
            else if (intentosFallidos == 5) {
                printf("  O\n");
                printf(" /|\\\n");
                printf(" /\n");
            }
            else if (intentosFallidos == 6) {
                printf("  O\n");
                printf(" /|\\\n");
                printf(" / \\\n");
            }

            if (intentosFallidos == 6) {
                printf("Perdiste. La palabra era: %s\n", palabraSecreta);
                return 0;
            }
        }
    }

    printf("Correcto, la palabra era: %s\n", palabraSecreta);
    return 0;
}