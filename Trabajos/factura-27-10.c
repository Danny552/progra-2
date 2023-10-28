#include <stdio.h>
#include <string.h>

struct Cliente
{
    char cedula[15];
    char nombreCompleto[100];
    char direccion[100];
    char numeroCelular[15];
};

struct Producto
{
    int codigo;
    char nombre[100];
    float precioUnitario;
    int cantidad;
};

struct Factura
{
    int codigoFactura;
    struct Cliente cliente;
    struct Producto productos[10];
    int numProductos;
    float total;
};

void ingresarProducto(struct Producto inventario[10], int *totalProductos)
{
    printf("Ingrese el codigo del producto: ");
    scanf("%d", &inventario[*totalProductos].codigo);
    printf("Nombre del producto: ");
    scanf("%s", inventario[*totalProductos].nombre);
    printf("Precio unitario: ");
    scanf("%f", &inventario[*totalProductos].precioUnitario);
    printf("Cantidad en stock: ");
    scanf("%d", &inventario[*totalProductos].cantidad);
    (*totalProductos)++;
}

void mostrarInventario(struct Producto inventario[10], int totalProductos)
{
    printf("Inventario de productos:\n");
    for (int i = 0; i < totalProductos; i++)
    {
        printf("Codigo: %d, Nombre: %s, Precio unitario: $%.2f, Cantidad en stock: %d\n",
               inventario[i].codigo, inventario[i].nombre, inventario[i].precioUnitario, inventario[i].cantidad);
    }
}

void ingresarCliente(struct Cliente clientes[10], int *totalClientes)
{
    printf("Cedula: ");
    scanf("%s", clientes[*totalClientes].cedula);
    while (getchar() != '\n')
        ;
    printf("Nombre completo: ");
    fgets(clientes[*totalClientes].nombreCompleto, sizeof(clientes[*totalClientes].nombreCompleto), stdin);
    clientes[*totalClientes].nombreCompleto[strcspn(clientes[*totalClientes].nombreCompleto, "\n")] = '\0';
    printf("Dirección: ");
    fgets(clientes[*totalClientes].direccion, sizeof(clientes[*totalClientes].direccion), stdin);
    clientes[*totalClientes].direccion[strcspn(clientes[*totalClientes].direccion, "\n")] = '\0';
    printf("Numero de celular: ");
    scanf("%s", clientes[*totalClientes].numeroCelular);
    (*totalClientes)++;
}

void mostrarClientes(struct Cliente clientes[10], int totalClientes)
{
    printf("Lista de clientes:\n");
    for (int i = 0; i < totalClientes; i++)
    {
        printf("Cedula: %s, Nombre: %s, Direccion: %s, Celular: %s\n",
               clientes[i].cedula, clientes[i].nombreCompleto,
               clientes[i].direccion, clientes[i].numeroCelular);
    }
}

void imprimirFactura(struct Factura factura)
{
    printf("Cliente:\n");
    printf("Cedula: %s\n", factura.cliente.cedula);
    printf("Nombre: %s\n", factura.cliente.nombreCompleto);
    printf("Dirección: %s\n", factura.cliente.direccion);
    printf("Celular: %s\n", factura.cliente.numeroCelular);
    printf("Productos en la factura:\n");
    float total = 0;
    for (int i = 0; i < factura.numProductos; i++)
    {
        float precioTotalProducto = factura.productos[i].precioUnitario * factura.productos[i].cantidad;
        printf("Producto: %s, Cantidad: %d, Precio unitario: $%.2f, PrecioTotal: %.2f\n",
               factura.productos[i].nombre, factura.productos[i].cantidad,
               factura.productos[i].precioUnitario, precioTotalProducto);
        total += precioTotalProducto;
    }
    printf("Total de la factura: $%.2f\n", total);
}

int main()
{
    struct Cliente clientes[10];
    struct Producto inventario[10];
    struct Factura facturas[10];
    int totalClientes = 0;
    int totalProductos = 0;
    int totalFacturas = 0;
    int opcion;

    do
    {
        printf("\nMenu:\n");
        printf("1. Ingresar producto\n");
        printf("2. Mostrar inventario\n");
        printf("3. Ingresar cliente\n");
        printf("4. Mostrar lista de clientes\n");
        printf("5. Imprimir factura\n");
        printf("6. Mostrar última factura\n");
        printf("7. Guardar factura\n");
        printf("8. Mostrar factura por código\n");
        printf("9. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            ingresarProducto(inventario, &totalProductos);
            break;
        case 2:
            mostrarInventario(inventario, totalProductos);
            break;
        case 3:
            ingresarCliente(clientes, &totalClientes);
            break;
        case 4:
            mostrarClientes(clientes, totalClientes);
            break;
        case 5:
            printf("Ingrese la cedula del cliente: ");
            scanf("%s", facturas[totalFacturas].cliente.cedula);
            facturas[totalFacturas].numProductos = 0;
            facturas[totalFacturas].total = 0;
            do
            {
                printf("Ingrese el codigo del producto: ");
                int codigo;
                scanf("%d", &codigo);
                int encontrado = 0;
                for (int i = 0; i < totalProductos; i++)
                {
                    if (inventario[i].codigo == codigo)
                    {
                        int cantidad;
                        printf("Ingrese la cantidad: ");
                        scanf("%d", &cantidad);
                        if (cantidad <= inventario[i].cantidad)
                        {
                            facturas[totalFacturas].productos[facturas[totalFacturas].numProductos] = inventario[i];
                            facturas[totalFacturas].productos[facturas[totalFacturas].numProductos].cantidad = cantidad;
                            facturas[totalFacturas].numProductos++;
                            inventario[i].cantidad -= cantidad;
                            if (inventario[i].cantidad == 0)
                            {
                                for (int j = i; j < totalProductos - 1; j++)
                                {
                                    inventario[j] = inventario[j + 1];
                                }
                                totalProductos--;
                            }
                            encontrado = 1;
                        }
                        else
                        {
                            printf("No hay suficiente stock para esta cantidad.\n");
                        }
                        break;
                    }
                }
                if (!encontrado)
                {
                    printf("Producto no encontrado.\n");
                }
                printf("¿Desea ingresar otro producto a la factura? (1 para sí, 0 para no): ");
                int deseaContinuar;
                scanf("%d", &deseaContinuar);
                if (!deseaContinuar)
                {
                    break;
                }
            } while (1);
            for (int i = 0; i < totalClientes; i++)
            {
                if (strcmp(clientes[i].cedula, facturas[totalFacturas].cliente.cedula) == 0)
                {
                    strcpy(facturas[totalFacturas].cliente.nombreCompleto, clientes[i].nombreCompleto);
                    strcpy(facturas[totalFacturas].cliente.direccion, clientes[i].direccion);
                    strcpy(facturas[totalFacturas].cliente.numeroCelular, clientes[i].numeroCelular);
                    break;
                }
            }
            imprimirFactura(facturas[totalFacturas]);
            totalFacturas++;
            break;
        case 6:
            if (totalFacturas > 0)
            {
                imprimirFactura(facturas[totalFacturas - 1]);
            }
            else
            {
                printf("No hay facturas registradas.\n");
            }
            break;
        case 7:
            if (totalFacturas > 0)
            {
                int codigoFactura;
                printf("Ingrese el código de la factura: ");
                scanf("%d", &codigoFactura);
                int facturaEncontrada = 0;
                for (int i = 0; i < totalFacturas; i++)
                {
                    if (facturas[i].codigoFactura == codigoFactura)
                    {
                        imprimirFactura(facturas[i]);
                        facturaEncontrada = 1;
                        break;
                    }
                }
                if (!facturaEncontrada)
                {
                    printf("Factura no encontrada.\n");
                }
            }
            else
            {
                printf("No hay facturas guardadas.\n");
            }
            break;
        case 8:
            if (facturas[totalFacturas - 1].numProductos > 0)
            {
                facturas[totalFacturas] = facturas[totalFacturas - 1];
                totalFacturas++;
                printf("Factura guardada con éxito.\n");
            }
            else
            {
                printf("No se puede guardar una factura vacía.\n");
            }
            break;
        case 9:
            printf("Saliendo del programa.\n");
            break;
        default:
            printf("Opcion no valida.\n");
        }
    } while (opcion != 9);

    return 0;
}