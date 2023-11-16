/*#include <stdio.h>

void ingresarDatos(int *arreglo, int tamano) {
    printf("Ingrese %d elementos:\n", tamano);
    for (int i = 0; i < tamano; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", arreglo + i);
    }
}

void ordenarArreglo(int *arreglo, int tamano) {
    for (int i = 0; i < tamano - 1; i++) {
        for (int j = 0; j < tamano - i - 1; j++) {
            if (*(arreglo + j) > *(arreglo + j + 1)) {
                int temp = *(arreglo + j);
                *(arreglo + j) = *(arreglo + j + 1);
                *(arreglo + j + 1) = temp;
            }
        }
    }
}

int busquedaBinaria(int *arreglo, int tamano, int elemento) {
    int izquierda = 0, derecha = tamano - 1, medio;

    while (izquierda <= derecha) {
        medio = izquierda + (derecha - izquierda) / 2;

        if (*(arreglo + medio) == elemento)
            return medio;
        else if (*(arreglo + medio) < elemento)
            izquierda = medio + 1;
        else
            derecha = medio - 1;
    }

    return -1;
}

int main() {
    int tamano;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tamano);

    int arreglo[tamano];

    // a) Ingresar datos para los arreglos
    ingresarDatos(arreglo, tamano);

    // b) Método de ordenamiento - Algoritmo de Burbuja
    ordenarArreglo(arreglo, tamano);

    // Mostrar arreglo ordenado
    printf("\nArreglo ordenado: ");
    for (int i = 0; i < tamano; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    // c) Búsqueda Binaria
    int elemento;
    printf("Ingrese el elemento a buscar: ");
    scanf("%d", &elemento);

    int posicion = busquedaBinaria(arreglo, tamano, elemento);

    if (posicion != -1)
        printf("El elemento %d está en la posición %d.\n", elemento, posicion);
    else
        printf("El elemento %d no se encuentra en el arreglo.\n", elemento);

    return 0;
} */

/*#include <stdio.h>

int main() {
    int tamano;

    // Solicitar al usuario el tamaño del arreglo
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tamano);

    int arreglo[tamano];

    // Solicitar al usuario ingresar los elementos del arreglo
    printf("Ingrese %d elementos:\n", tamano);
    for (int i = 0; i < tamano; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    // a) Ordenar un arreglo teniendo en cuenta solo las posiciones pares, incluyendo el índice 0
    for (int *i = arreglo; i < arreglo + tamano; i += 2) {
        for (int *j = i + 2; j < arreglo + tamano; j += 2) {
            if (*i > *j) {
                // Intercambiar elementos si están en el orden incorrecto
                int temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }

    // b) Mostrar el elemento con mayor número de repeticiones
    int maxRepeticiones = 0, elementoMaxRepeticiones = -1;
    for (int *i = arreglo; i < arreglo + tamano; i++) {
        int repeticiones = 1;

        for (int *j = i + 1; j < arreglo + tamano; j++) {
            if (*i == *j) {
                repeticiones++;
            }
        }

        if (repeticiones > maxRepeticiones) {
            maxRepeticiones = repeticiones;
            elementoMaxRepeticiones = *i;
        }
    }

    // c) Mostrar el arreglo después de realizar las operaciones
    printf("Después de ejecutar el programa:\n");
    for (int i = 0; i < tamano; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    printf("El número con mayor número de repeticiones es el \"%d\"\n", elementoMaxRepeticiones);

    return 0;
}*/

/*#include <stdio.h>
#include <ctype.h>

void leerCadena(char *cadena, int longitud) {
    printf("Ingrese una cadena de hasta %d caracteres: ", longitud - 1);
    fgets(cadena, longitud, stdin);

    char *posicionSaltoLinea = strchr(cadena, '\n');
    if (posicionSaltoLinea != NULL) {
        *posicionSaltoLinea = '\0';
    }
}

int esPalindromo(const char *cadena) {
    const char *inicio = cadena;
    const char *fin = cadena + strlen(cadena) - 1;

    while (inicio < fin) {
        while (isspace(*inicio)) {
            inicio++;
        }
        while (isspace(*fin)) {
            fin--;
        }

        if (tolower(*inicio) != tolower(*fin)) {
            return 0; 
        }

        inicio++;
        fin--;
    }

    return 1; 
}

int main() {
    int longitudMaxima = 100;
    char cadena[longitudMaxima];

    leerCadena(cadena, longitudMaxima);

    if (esPalindromo(cadena)) {
        printf("La cadena ingresada es un palíndromo.\n");
    } else {
        printf("La cadena ingresada no es un palíndromo.\n");
    }

    return 0;
}*/

#include <stdio.h>
#include <math.h>

void ingresarDatos(double *vector, int longitud) {
    printf("Ingrese %d elementos:\n", longitud);
    for (int i = 0; i < longitud; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%lf", vector + i);
    }
}

double calcularRango(const double *vector, int longitud) {
    double maximo = *vector;
    double minimo = *vector;

    for (const double *ptr = vector + 1; ptr < vector + longitud; ptr++) {
        if (*ptr > maximo) {
            maximo = *ptr;
        } else if (*ptr < minimo) {
            minimo = *ptr;
        }
    }

    return maximo - minimo;
}

double calcularMedia(const double *vector, int longitud) {
    double suma = 0;

    for (const double *ptr = vector; ptr < vector + longitud; ptr++) {
        suma += *ptr;
    }

    return suma / longitud;
}

double calcularVarianza(const double *vector, int longitud, double media) {
    double sumaCuadradosDiferencias = 0;

    for (const double *ptr = vector; ptr < vector + longitud; ptr++) {
        double diferencia = *ptr - media;
        sumaCuadradosDiferencias += diferencia * diferencia;
    }

    return sumaCuadradosDiferencias / longitud;
}

double calcularDesviacionEstandar(double varianza) {
    return sqrt(varianza);
}

int main() {
    int longitud;
    printf("Ingrese la longitud del vector: ");
    scanf("%d", &longitud);

    double vector[longitud];

    ingresarDatos(vector, longitud);

    double media = calcularMedia(vector, longitud);

    double varianza = calcularVarianza(vector, longitud, media);

    double desviacionEstandar = calcularDesviacionEstandar(varianza);

    printf("Rango: %.2lf\n", calcularRango(vector, longitud));
    printf("Media: %.2lf\n", media);
    printf("Varianza: %.2lf\n", varianza);
    printf("Desviación estándar: %.2lf\n", desviacionEstandar);

    return 0;
}
