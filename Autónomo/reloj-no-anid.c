#include <stdio.h>
#include <windows.h>
int main() {
    int h;
    int s;
    int m;
    int mili = 1000;
    printf ("Inserte la hora hh:mm:ss");
    scanf ("%d:%d:%d", &h, &m, &s);
    while (1){
        s++;
        if (s > 59){
            m++;
            s = 0;
        }
        if (m > 59){
            h++;
            m = 0;
        }
        if (h > 12){
            s = 0;
            m = 0;
            h = 1;
            return 0;
        }
        printf ("%02d:%02d:%02d", h, m, s);
        Sleep(mili);
        system("cls");
    }
}