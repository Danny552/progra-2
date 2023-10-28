#include <stdio.h>
#include <string.h>

struct estruc_existencias
{
    int discos;
    int cintas;
    int cd;
};

struct estruc_proveedor
{
    char nombre_proveedor[40];
    char telefono[10];
    char direcc[40];
};

struct struct_inventario
{
    char titulo[30];
    char autor[40];
    struct estruc_existencias existencias;
    struct estruc_proveedor proveedor;
};

int llenar(struct struct_inventario I[], int contador);
void mostrarTodo(const struct struct_inventario I[], int contador);
int eliminar(struct struct_inventario I[], int contador);
void mostrarPorNombre(const struct struct_inventario I[], int contador);

int main()
{
    struct struct_inventario I[100]; // Capacidad para 100 registros
    int contador = 0;
    int opcion;
    char basura;

    do
    {
        printf("Menú:\n");
        printf("1. Llenar\n");
        printf("2. Mostrar Todo\n");
        printf("3. Eliminar Uno\n");
        printf("4. Mostrar por Nombre\n");
        printf("5. Salir\n");
        printf("Selecciona una opción: ");
        scanf("%d", &opcion);
        scanf("%c", &basura);

        switch (opcion)
        {
        case 1:
            contador = llenar(I, contador);
            break;
        case 2:
            mostrarTodo(I, contador);
            break;
        case 3:
            contador = eliminar(I, contador);
            break;
        case 4:
            mostrarPorNombre(I, contador);
            break;
        case 5:
            printf("Saliendo del programa.\n");
            break;
        default:
            printf("Opción no válida. Introduce un número del 1 al 5.\n");
            break;
        }
    } while (opcion != 5);

    return 0;
}

int llenar(struct struct_inventario I[], int contador)
{
    printf("Llenar los datos del registro:\n");
    printf("Título: ");
    scanf("%s", I[contador].titulo);
    printf("Autor: ");
    scanf("%s", I[contador].autor);
    printf("Existencias:\n");
    printf("Discos: ");
    scanf("%d", &I[contador].existencias.discos);
    printf("Cintas: ");
    scanf("%d", &I[contador].existencias.cintas); 
    printf("Cd: ");
    scanf("%d", &I[contador].existencias.cd);
    printf("Proveedor - Nombre: ");
    scanf("%s", I[contador].proveedor.nombre_proveedor);
    printf("Proveedor - Teléfono: ");
    scanf("%s", I[contador].proveedor.telefono);
    printf("Proveedor - Dirección: ");
    scanf("%s", I[contador].proveedor.direcc);
    return contador + 1;
}

void mostrarTodo(const struct struct_inventario I[], int contador)
{
    printf("Registros en el inventario:\n");
    for (int i = 0; i < contador; i++)
    {
        printf("Registro %d:\n", i + 1);
        printf("Título: %s\n", I[i].titulo);
        printf("Autor: %s\n", I[i].autor);
        printf("Existencias (Discos Cintas CD): %d %d %d\n", I[i].existencias.discos, I[i].existencias.cintas, I[i].existencias.cd);
        printf("Proveedor - Nombre: %s\n", I[i].proveedor.nombre_proveedor);
        printf("Proveedor - Teléfono: %s\n", I[i].proveedor.telefono);
        printf("Proveedor - Dirección: %s\n", I[i].proveedor.direcc);
    }
}

int eliminar(struct struct_inventario I[], int contador)
{
    char nombre[40];
    printf("Introduce el nombre del autor a eliminar: ");
    scanf("%s", nombre);

    for (int i = 0; i < contador; i++)
    {
        if (strcmp(I[i].autor, nombre) == 0)
        {
            for (int j = i; j < contador - 1; j++)
            {
                I[j] = I[j + 1];
            }
            printf("Registro eliminado exitosamente.\n");
            return contador - 1;
        }
    }
    printf("Autor no encontrado en el inventario.\n");
    return contador;
}

void mostrarPorNombre(const struct struct_inventario I[], int contador)
{
    char nombre[40];
    printf("Introduce el nombre del autor a buscar: ");
    scanf("%s", nombre);

    for (int i = 0; i < contador; i++)
    {
        if (strcmp(I[i].autor, nombre) == 0)
        {
            printf("Autor encontrado:\n");
            printf("Título: %s\n", I[i].titulo);
            printf("Existencias (Discos Cintas CD): %d %d %d\n", I[i].existencias.discos, I[i].existencias.cintas, I[i].existencias.cd);
            printf("Proveedor - Nombre: %s\n", I[i].proveedor.nombre_proveedor);
            printf("Proveedor - Teléfono: %s\n", I[i].proveedor.telefono);
            printf("Proveedor - Dirección: %s\n", I[i].proveedor.direcc);
            return;
        }
    }
    printf("Autor no encontrado en el inventario.\n");
}