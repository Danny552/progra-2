#include <stdio.h>

int main() {
    int altura;
    
    printf("Ingresa la altura del moño: ");
    scanf("%d", &altura);
    altura = (altura + 1) / 2;
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            printf("A");
        }
        for (int j = 1; j <= 2 * (altura - i); j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("A");
        }
        printf("\n");
    }
    for (int i = altura - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("A");
        }
        for (int j = 1; j <= 2 * (altura - i); j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("A");
        }
        printf("\n");
    }
}