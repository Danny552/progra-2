#include <stdio.h>

int main() {
    int b1, b2;
    int acarr = 0;
    int sum_reves = 0;
    int valor_pos = 1;

    printf("Ingrese el primer número binario: ");
    scanf("%d", &b1);
    printf("Ingrese otro número binario: ");
    scanf("%d", &b2);

    while (b1 != 0 || b2 != 0) {
        int bit1 = b1 % 10;
        int bit2 = b2 % 10;
        int sum_bit = (bit1 + bit2 + acarr) % 2;
        acarr = (bit1 + bit2 + acarr) / 2;

        sum_reves = sum_reves + sum_bit * valor_pos;
        valor_pos *= 10;

        b1 = b1 / 10;
        b2 = b2 / 10;
    }

    if (acarr != 0) {
        sum_reves = sum_reves + acarr * valor_pos;
    }

    printf("La suma de los dos números binarios es: %d", sum_reves);

    return 0;
}