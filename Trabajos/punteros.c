#include <stdio.h>

int main() {
    int x, *p, **q;
    x = 10;
    p = &x;
    q = &p;
    
    printf("el valor de q es : %p\n", q); // dirección de memoria de p
    printf("el valor de &*q es : %p\n", &*q); // dirección de memoria de p
    printf("el valor de &x es : %p\n", &x); // dirección de memoria de x
    printf("el valor de *q es : %p\n", *q); // dirección memoria de x
    printf("el valor de p es : %p\n", p); // dirección memoria de x
    printf("el valor de &**q es : %p\n", &**q); // dirección memoria de x
    printf("el valor de **q es : %d\n", **q); // valor de 10
    printf("el valor de *p es : %d\n", *p); // valor de 10
    printf("el valor de *&x es : %d\n", *&x); // valor de 10

    return 0;
}
