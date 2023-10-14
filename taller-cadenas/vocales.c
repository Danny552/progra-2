#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    int i, longitud;
    int vocales[5] = {0};
    int maxVocalCount = 0;

    printf("Ingresa una cadena de texto: ");
    gets(cadena);

    longitud = strlen(cadena);

    for (i = 0; i < longitud; i++) {
        char c = tolower(cadena[i]);

        if (c == 'a') {
            vocales[0]++;
        } else if (c == 'e') {
            vocales[1]++;
        } else if (c == 'i') {
            vocales[2]++;
        } else if (c == 'o') {
            vocales[3]++;
        } else if (c == 'u') {
            vocales[4]++;
        }
    }
    for (i = 0; i < 5; i++) {
        if (vocales[i] > maxVocalCount) {
            maxVocalCount = vocales[i];
        }
    }
    for (i = maxVocalCount; i > 0; i--) {
        for (int j = 0; j < 5; j++) {
            if (vocales[j] >= i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("A E I O U\n");
}

