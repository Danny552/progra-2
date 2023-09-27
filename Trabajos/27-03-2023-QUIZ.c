#include <stdio.h>

int main(){
    int U[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int X[6] = {1, 2, 3, 4, 5, 6};
    int Z[7] = {1, 2, 4, 5, 7, 8, 9};
    int opc;
    int tem;
    int a = 0;
    int j = 0;
    int n = 13;
    int vecu[13];
    int vecc[13];
    int veci[13];
    do
    {
    printf ("Qué desea realizar:\n1) Unión\n2)Intersección\n");
    scanf ("%d", &opc);
    switch (opc){
        case 1:
        for (int i = 0; i < 7; i++){
            vecu[i] = Z[i];
        }
        for (int i = 0; i < 6; i++){
            vecu[i+7] = X[i];
        }
        for (int i = 0; i < n-1; i++){
            for (int j = i + 1; j < n; j++){
                if (vecu[i] > vecu[j]){
                    tem = vecu[i];
                    vecu[i] = vecu[j];
                    vecu[j] = tem;
                    }
                }
            }
    int tam = n;
    for (int i = 0; i < tam; i++) {
        for (int j = i + 1; j < tam;) {
            if (vecu[i] == vecu[j]) {
                for (int k = j; k < tam - 1; k++) {
                    vecu[k] = vecu[k + 1];
                }
                tam--;
            } else {
                j++;
            }
        }
    }
    for (int i = 0; i < tam; i++){
        printf ("%d ", vecu[i]);
    }
    break;
    case 2:
    for (int i = 0; i < 7; i++){
        for (j = 0; j < 7; j++){
        if(X[i] == Z[j]){
            veci[a] = X[i];
            a++;
        }
    }
    }
    for (int i = 0; i < a; i++){
        printf ("%d ", veci[i]);
    }
    break;
    case 3:

    for (int i = 0; i < 10; i++) { // Tamaño de U
        int encontrado = 0; // Indica si el elemento U[i] se encuentra en X.
        
        for (int j = 0; j < 6; j++) { // Tamaño de X
            if (U[i] == X[j]) {
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            vecc[a] = U[i];
            a++;
        }
    }

    printf("Complemento de X con respecto a U: ");
    for (int i = 0; i < a; i++) {
        printf("%d ", vecc[i]);
    }
        }
    } while (opc != 0);
    
}