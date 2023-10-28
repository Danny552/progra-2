#include <stdio.h>

#define MAX_ESTUDIANTES 100

typedef struct {
    int codigo;
    int edad;
} Estudiante;

void MostrarEstudiante(Estudiante e) {
    printf("Estudiante con codigo No %d\n", e.codigo);
    printf("Edad: %d\n", e.edad);
}

Estudiante LeerEstudiante() {
    Estudiante e;
    printf("Ingrese el codigo del estudiante (o -1 para terminar): ");
    scanf("%d", &e.codigo);

    if (e.codigo == -1) {
        e.edad = -1; // Marca especial para indicar el final de la entrada
    } else {
        printf("Ingrese la edad del estudiante: ");
        scanf("%d", &e.edad);
        printf("\n");
    }
    
    return e;
}

int CompararEdades(const void* a, const void* b) {
    const Estudiante* estudianteA = (const Estudiante*)a;
    const Estudiante* estudianteB = (const Estudiante*)b;
    return estudianteB->edad - estudianteA->edad; // Ordena de mayor a menor
}

void OrdenarPorEdad(Estudiante estudiantes[], int n) {
    qsort(estudiantes, n, sizeof(Estudiante), CompararEdades);
}

int main() {
    int n = 0;
    Estudiante curso[MAX_ESTUDIANTES];

    printf("Ingrese los estudiantes. Para finalizar, ingrese el código como -1.\n");

    while (1) {
        Estudiante estudiante = LeerEstudiante();

        if (estudiante.edad == -1) {
            break; // Terminar la entrada
        }

        if (n < MAX_ESTUDIANTES) {
            curso[n++] = estudiante;
        } else {
            printf("Se ha alcanzado el límite máximo de estudiantes.\n");
            break; // Terminar la entrada
        }
    }

    OrdenarPorEdad(curso, n);

    printf("Estudiantes ordenados por edad (de mayor a menor):\n");
    for (int i = 0; i < n; i++) {
        MostrarEstudiante(curso[i]);
        printf("\n");
    }

    return 0;
}
