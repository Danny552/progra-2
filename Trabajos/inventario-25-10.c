#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct DatosFactura //Secundaria
{
    char numero[10];
    char fecha[10];
};

struct DatosCliente //Secundaria
{
    char nombre[50];
    char NIT[15];
    char celular[10];
};

struct Venta //Secundaria
{
    int cantidad;
    char concepto[50];
    int ValorUnitario;
    int ValorTotal;
};

struct Factura //Principal
{
    struct DatosFactura DatFac;
    struct DatosCliente DatClie;
    struct Venta productos[10];
    int valor;
};

struct DatosProducto //Secundaria
{
    char producto[50];
    float coste;
    int cantidad;
};

struct Inventario //Principal
{
    struct DatosProducto DatPro;
};

struct Cliente //Principal
{
    char nombre[50];
    char cedula[15];
    char celular[10];
};

//Funciones auxiliares

//Inicia el inventario
void IniciaInven(struct Inventario I[])
{
    //Producto 1
    strcpy(I[0].DatPro.producto , "Pollo entero");
    I[0].DatPro.coste = 30000;
    I[0].DatPro.cantidad = 20;
    
    //Producto 2
    strcpy(I[1].DatPro.producto , "Kilo de res");
    I[1].DatPro.coste = 35000;
    I[1].DatPro.cantidad = 50;
    
    //Producto 3
    strcpy(I[2].DatPro.producto , "Kilo de cerdo");
    I[2].DatPro.coste = 32000;
    I[2].DatPro.cantidad = 50;
    
    //Producto 4
    strcpy(I[3].DatPro.producto , "Libra de arroz");
    I[3].DatPro.coste = 3000;
    I[3].DatPro.cantidad = 40;
    
    //Producto 5
    strcpy(I[4].DatPro.producto , "Bolsa de chocolates");
    I[4].DatPro.coste = 9000;
    I[4].DatPro.cantidad = 35;
    
    //Producto 6
    strcpy(I[5].DatPro.producto , "Resma de papel carta");
    I[5].DatPro.coste = 20000;
    I[5].DatPro.cantidad = 70;
    
    //Producto 7
    strcpy(I[6].DatPro.producto , "Resma de papel oficio");
    I[6].DatPro.coste = 25000;
    I[6].DatPro.cantidad = 70;
    
    //Producto 8
    strcpy(I[7].DatPro.producto , "Panal de huevos");
    I[7].DatPro.coste = 17000;
    I[7].DatPro.cantidad = 20;
    
    //Producto 9
    strcpy(I[8].DatPro.producto , "Caja de lapiceros");
    I[8].DatPro.coste = 10000;
    I[8].DatPro.cantidad = 25;
    
    //Producto 10
    strcpy(I[9].DatPro.producto , "Gaseosa 2.5 Litros");
    I[9].DatPro.coste = 5000;
    I[9].DatPro.cantidad = 30;
}

//Muestra el Inventario
void ImprimirInventario(struct Inventario I[])
{
    printf("Inventario:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Producto %d:\n", (i + 1));
        printf("Nombre: %s\n", I[i].DatPro.producto);
        printf("Costo: %.2f\n", I[i].DatPro.coste);
        printf("Cantidad: %d\n", I[i].DatPro.cantidad);
    }
}

//Inicia los vectores
void InicVec(struct Factura F[])
{
    int i;
    for(i=0;i<100;i++)
    {
        F[i].DatFac.numero[0] = '\0';
        F[i].DatFac.fecha[0] = '\0';
        F[i].DatClie.nombre[0] = '\0';
        F[i].DatClie.NIT[0] = '\0';
        F[i].DatClie.celular[0] = '\0';
        for(int j=0;j<10;j++)
        {
            F[i].productos[j].cantidad = 0;
            F[i].productos[j].concepto[0] = '\0';
            F[i].productos[j].ValorUnitario = 0;
            F[i].productos[j].ValorTotal = 0;
        };
        F[i].valor = 0;
    }
}

//Registra un cliente
int RegistrarCliente(struct Cliente C[], int contador)
{
    printf("Ingrese el nombre del cliente: ");
    scanf("%s", &C[contador].nombre);
    printf("Ingrese el número de cedula del cliente: ");
    scanf("%s", &C[contador].cedula);
    printf("Ingrese el número de celular del cliente: ");
    scanf("%s", &C[contador].celular);
    printf("Registrado con éxito.\n");
    return (contador + 1);
}

//Busca el nombre de un cliente
char NombreCliente(char cedula[], struct Cliente C[])
{
    for(int i=0;i<100;i++)
    {
        if(C[i].cedula == cedula)
        {
            return (C[i].nombre);
        }
    }
    return ('\0');
}

//Busca el celular de un cliente
char CelularCliente(char cedula[], struct Cliente C[])
{
    for(int i=0;i<100;i++)
    {
        if(C[i].cedula == cedula)
        {
            return (C[i].celular);
        }
    }
    return ('\0');
}

//Regresa concepto
char ConceptoPorNum(int concepto)
{
    switch(concepto)
    {
        case 1:
            return "Pollo entero";
        
        case 2:
            return "Kilo de res";
            
        case 3:
            return "Kilo de cerdo";
            
        case 4:
            return "Libra de arroz";
            
        case 5:
            return "Bolsa de chocolates";
            
        case 6:
            return "Resma de papel carta";
            
        case 7:
            return "Resma de papel oficio";
            
        case 8:
            return "Panal de huevos";
            
        case 9:
            return "Caja de lapiceros";
            
        case 10:
            return "Gaseosa 2.5 Litros";
    };
    return '\0';
}

//Busca en Inventario
void BuscarYDisminuir(struct Inventario I[], int cantidad, int producto)
{
    for(int i=0;i<10;i++)
    {
        if(I[i].DatPro.producto == ConceptoPorNum(producto))
        {
            I[i].DatPro.cantidad = I[i].DatPro.cantidad - cantidad;
        };
    }
}

//Crea una factura
int IngresarDatosFac(struct Factura F[], int contador, struct Cliente C[], struct Inventario I[])
{
    float a, b, t = 0;
    int c = 0, d = 1, p;
    int ci = 0;
    char ced[10];
    printf("Llenar la factura\nProductos:\n");
    printf("Código de factura: ");
    scanf("%s", &F[contador].DatFac.numero);
    printf("Fecha de la factura (DD/MM/AAAA): ");
    scanf("%s", &F[contador].DatFac.fecha);
    printf("NIT del cliente: ");
    scanf("%s", &ced);
    strcpy(F[contador].DatClie.NIT , ced);
    if(NombreCliente(ced,C) != '\0')
    {
    strcpy(F[contador].DatClie.nombre , NombreCliente(ced,C));
    strcpy(F[contador].DatClie.celular , CelularCliente(ced,C));
    }
    else
    {
        printf("Cliente no registrado.\n");
        return contador;
    }
    
    do{
        printf("Producto a comprar (Número): ");
        scanf("%d", &p);
        strcpy(F[contador].productos[ci].concepto , ConceptoPorNum(p));
        printf("Cantidad del producto: ");
        scanf("%f", &a);
        F[contador].productos[ci].cantidad = a;
        BuscarYDisminuir(I,a,p);
        if(I[p].DatPro.cantidad <= 0)
        {
            printf("Cantidad inválida.\n");
            I[p].DatPro.cantidad = I[p].DatPro.cantidad + a;
        };
        b = I[p].DatPro.coste;
        F[contador].productos[ci].ValorUnitario = b;
        F[contador].productos[ci].ValorTotal = a * b;
        t = t + (a*b);
        c++;
        if(c < 10)
        {
            printf("Desea facturar más productos\n1. Si - 2. No - ");
            scanf("%d", &d);
        }
        else
        {
            printf("Límite de productos facturados alcanzado.\n");
        }
        ci++;
    }while(d != 2 && c < 10);
    
    F[contador].valor = t;
    
    return (contador + 1);
}

//Muestra los clientes registrados
void MostrarClientes(struct Cliente C[], int contador)
{
    int i;
    printf("Clientes registrados:\n");
    for(i=0;i<contador;i++)
    {
        printf("Cliente %d:\n", i);
        printf("Nombre: %s", C[i].nombre);
        printf("Cédula: %s", C[i].cedula);
        printf("Celular: %s", C[i].celular);
    }
}

//Muestra una factura por su número/Código
void BuscarFacCod(struct Factura F[], char numero[], int contador)
{
    int i, j, c = 1;
    for(i=0;i<contador;i++)
    {
        if(F[i].DatFac.numero == numero)
        {
            printf("Resultado %d.\n", c);
            printf("Número de factura: %s", F[i].DatFac.numero);
            printf("Fecha de la factura: %s", F[i].DatFac.fecha);
            //Datos cliente
            for(j=0;F[i].productos[j].cantidad != 0 && F[i].productos[j].concepto[0] != '\0' && F[i].productos[j].ValorUnitario != 0 && F[i].productos[j].ValorTotal != 0 && j<10;j++)
            {
                printf("Producto %d\n", (j + 1));
                printf("Cantidad: %d\n", F[i].productos[j].cantidad);
                printf("Concepto: %s\n", F[i].productos[j].concepto);
                printf("Valor unitario: %d\n", F[i].productos[j].ValorUnitario);
                printf("Valor total: %d\n", F[i].productos[j].ValorTotal);
            }
            c++;
        };
    }
}

//Muestra todas las facturas
void MostrarFac(struct Factura F[], int contador)
{
    int i, j;
    for(i=0;i<contador;i++)
    {
        printf("Factura %d.\n", i);
        printf("Número de factura: %s", F[i].DatFac.numero);
        printf("Fecha de la factura: %s", F[i].DatFac.fecha);
        //Datos cliente
        for(j=0;F[i].productos[j].cantidad != 0 && F[i].productos[j].concepto[0] != '\0' && F[i].productos[j].ValorUnitario != 0 && F[i].productos[j].ValorTotal != 0 && j<10;j++)
        {
            printf("Producto %d\n", (j + 1));
            printf("Cantidad: %d\n", F[i].productos[j].cantidad);
            printf("Concepto: %s\n", F[i].productos[j].concepto);
            printf("Valor unitario: %d\n", F[i].productos[j].ValorUnitario);
            printf("Valor total: %d\n", F[i].productos[j].ValorTotal);
        }
    };
}


//Función principal
int main()
{
    //system("clear");
    struct Inventario Inv[10];
    struct Factura Facts[100];
    struct Cliente Clientes[100];
    InicVec(Facts);
    int contF = 0;
    int contC = 0;
    int opcion;
    IniciaInven(Inv);
    char num[10];
    
    printf("\tMenú\n0.Salir\n1.Mostrar productos\n2. Agregar Cliente.\n3. Mostrar Clientes\n4. Crear Factura\n5. Buscar Factura por código\n6.Mostrar todas las facturas\n");
    printf("Ingrese su opción: ");
    scanf("%d", &opcion);
    
    do
    {
        switch(opcion)
        {
            case 1:
            ImprimirInventario(Inv);
            break;
            
            case 2:
            contC = RegistrarCliente(Clientes, contC);
            break;
            
            case 3:
            MostrarClientes(Clientes, contC);
            break;
            
            case 4:
            contF = IngresarDatosFac(Facts, contF, Clientes, Inv);
            break;
            
            case 5:
            printf("Ingrese el número de la factura: ");
            scanf("%s", &num);
            BuscarFacCod(Facts, num, contF);
            break;
            
            case 6:
            MostrarFac(Facts,contF);
            break;
        }
    }while(opcion != 0);

    return 0;
}|