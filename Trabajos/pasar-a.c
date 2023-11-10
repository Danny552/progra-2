#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>

struct estructura_amigo {
    char nombre[30];
    char apellido[40];
    char telefono[10];
    int edad;
};

struct estructura_amigo amigo[3] = {
    {"Juan", "Martinez", "1234", 30},
    {"Maria", "Jimenez", "2345", 15},
    {"Carmen", "Jaramillo", "124432", 10}
};

struct estructura_amigo *p_amigo;
void suma(struct estructura_amigo *arg_amigo){
    int i;
    for (i=0; i<3; i++){
        arg_amigo->edad=45;
        *arg_amigo++;
    }
}
int main() {
    system("CLS");
    int j;
    p_amigo = &amigo[0];

    for (j = 0; j < 3; j++) {
        suma(&amigo[j]);
        printf("%s Tiene %d años y su teléfono es: %s\n", p_amigo->apellido, p_amigo->edad, p_amigo->telefono);
        p_amigo++;
    }

    getch();
    return 0;
}






