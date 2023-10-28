#include <stdio.h>
#include <string.h>

#define max 100

struct inv
{
struct producto{
    char nif[100];
    char prod[100];
    int cantidad;
    float precio;
    };
    struct cliente{
        
    };
}

int menu(void);
void listar(struct inv lista[]);
void borrar(struct inv lista[]);
void intro(struct inv lista[]);
int busca_libre(struct inv lista[]);
void inic_lista(struct inv lista[]);

int menu(void)
{
    int c;
    printf("1. Introducir un artículo\n2. Borrar artículo\n3. Listar inventario\n4. Salir\n");
    do
    {
        printf("Defina la opción a acceder: ");
        scanf("%i", &c);
    } while (c < 1 || c > 4); // Corregí la condición
    return c;
}

int main(void)
{
    int opcion;
    struct inv lista[max];
    inic_lista(lista); // Llamada para inicializar la lista
    for (;;)
    {
        opcion = menu(); // Corregí el operador "=" en lugar de "-"
        switch (opcion)
        {
        case 1:
            intro(lista);
            break;
        case 2:
            borrar(lista);
            break;
        case 3:
            listar(lista);
            break;
        case 4:
            return 0;
        }
    }
    return 0;
}

void inic_lista(struct inv lista[])
{
    for (int t = 0; t < max; t++)
    {
        lista[t].item[0] = '\0';
        lista[t].coste = 0.0; // Inicialicé el costo
        lista[t].dispo = 0;   // Inicialicé el campo dispo
    }
}

void intro(struct inv lista[])
{
    int sitio = busca_libre(lista); // Corregí la declaración y la llamada
    if (sitio == -1)
    {
        printf("Lista llena\n");
        return;
    }
    else
    {
        printf("Introduzca el artículo: ");
        scanf("%s", lista[sitio].item);
        printf("Introduzca el costo: ");
        scanf("%f", &lista[sitio].coste);
        printf("Introduzca número disponible: ");
        scanf("%i", &lista[sitio].dispo);
    }
}

int busca_libre(struct inv lista[])
{
    for (int t = 0; t < max; t++)
    {
        if (lista[t].item[0] == '\0')
        {
            return t;
        }
    }
    return -1;
}

void borrar(struct inv lista[])
{
    int sitio;
    printf("Introduzca el número del registro: ");
    scanf("%i", &sitio); // Corregí la declaración
    if (sitio >= 0 && sitio < max)
    {
        lista[sitio].item[0] = '\0';
        lista[sitio].coste = 0.0;
        lista[sitio].dispo = 0;
    }
}

void listar(struct inv lista[])
{
    for (int t = 0; t < max; t++)
    {
        if (lista[t].item[0] != '\0')
        {
            printf("Artículo: %s\n", lista[t].item);
            printf("Costo: %.2f\n", lista[t].coste); // Formateo del costo
            printf("Disponible: %i\n", lista[t].dispo);
        }
    }
}