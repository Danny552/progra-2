#include <stdio.h>
#include <windows.h>

int main() {
    int h = 0;
    int m = 0;
    int s = 0;
    int opc = 0;
    do
    {
    printf ("Inserte la opción que desee realizar: ");
    scanf ("%d", &opc);
    switch (opc){
        case 1:
        do
        {
        do
        {
            system("cls");
         printf ("%.2d:%.2d:%.2d", h, m, s);
            s++;
            Sleep(1000);
        } while (s != 60);
        do
        {
            s = 0;
            m++;
        } while (m != 60);
        do
        {
            h++;
            s= 0;
            m = 0;
        } while (h != 12);
                } while (0);
    }
    } while (opc != 0);
}