#include <stdio.h>
#include <stdbool.h>

int main(){
    int vect[10] = {7, 2, 8, 3, 5, 1};
    bool sw = true;
    int i, h, j, tem, li = 0;
    int paso = 0;
    int n = 6;
    int opc;
    printf ("Ingrese lo que desea realizar: ");
    scanf ("%d", &opc);
    switch (opc){
        case 2:
        for (i = 0; i < n-1; i++){
            for (j = i + 1; j < n; j++){
                if (vect[i] > vect[j]){
                    tem = vect[i];
                    vect[i] = vect[j];
                    vect[j] = tem;
                    paso++;
                    printf ("\nPaso %d: ", paso);
                    for (h = 0; h < n; h++){
                        printf ("%d ", vect[h]);
                    }
                }
            }
        }
        break;
        case 3:
            do
            {
                li++;
                sw = true;
                for  (i = 0; i < n - li; i++){
                    if (vect[i] > vect[i+1]){
                     tem = vect[i];
                     vect[i] = vect[i+1];
                     vect [i+1] = tem;
                     sw = false;
                     paso++;
                    printf ("\nPaso %d: ", paso);
                    for (h = 0; h < n; h++){
                        printf ("%d ", vect[h]);
                        }
                    }
                }
            } while (!sw);
        break;
    }
}