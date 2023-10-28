#include <stdio.h>

#define N 2
#define NUMNOTAS 3


typedef struct {
    int codigo;
    float notas[NUMNOTAS];
} Estudiante;


void MostrarEstudiante(Estudiante &e){
    int i;
    printf("Estudiante con codigo No %d\n", e.codigo);
    for(i = 0; i < NUMNOTAS; i++){
        printf("Nota %d: ", i + 1);
        printf("%f\n", e.notas[i]);
    
    }
}


void LeerEstudiante(Estudiante &e){
    int i;
    printf("Ingrese el codigo del estudiante: ");
    scanf("%d", &e.codigo);
    printf("Ingrese las notas del estudiante\n");
    for(i = 0; i < NUMNOTAS; i++){
        printf("Nota %d: ", i + 1);
        scanf("%f", &e.notas[i]);
    }
    printf("\n");
}


float definitiva(Estudiante &e){
    int i;
    float promedio;
    promedio = 0.0;
    
    for(i = 0; i < NUMNOTAS; i++){
        promedio = promedio + e.notas[i];
    }
    
    promedio = promedio / NUMNOTAS;
    return promedio;
}



float maximo(float A[N]){
    int i;
    float max;
    
    max = A[0];
    
    for(i = 0; i < N; i++){
        if(max < A[i]){
            max = A[i];
        }
    }
    
    return max;
}



int main()
{
    Estudiante curso[N];
    float definitivas[N];
    int i;
    float max;
    for(i = 0; i < N; i++){
        LeerEstudiante(curso[i]);
        definitivas[i] = definitiva(curso[i]);
    }
    
    
    for(i = 0; i < N; i++){
        MostrarEstudiante(curso[i]);
        printf("\n");
    }
    
    max = maximo(definitivas);
    
    
    printf("El mayor promedio fue: %f", max);
    

    return 0;
}