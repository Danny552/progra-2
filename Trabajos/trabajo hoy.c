void intro(void);
void eliminar(void);
void revisar(void);
void salir(void);

int menu(void);

void (*opciones[])(void) = {
    intro,
    eliminar,
    revisar,
    salir
};

int main(void) {
    int i;
    int (*pMenu)(void) = menu;
    void (*pFunc)(void);

    i = pMenu();
    pFunc = opciones[i];
    pFunc();
    return 0;
}

int menu(void) {
    char ch;
    do {
        printf("1. Introducción\n");
        printf("2. Eliminar\n");
        printf("3. Revisar\n");
        printf("4. Salir\n");
        printf("Seleccionar un numero\n");
        ch = getch();
        printf("\n");
    } while (!strchr("1234", ch));

    return ch - '1';
}

void intro(void) {
    printf("Entre introducción\n");
}

void eliminar(void) {
    printf("En eliminar\n");
}

void revisar(void) {
    printf("En revisar\n");
}

void salir(void) {
    printf("En salir\n");
    exit(0);
}
