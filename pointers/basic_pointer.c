#include <stdio.h>

int main() {
    int x = 10;
    int *p;

    p = &x;

    printf("Valor de x: %d\n", x);
    printf("Direccion de x: %p\n", &x);
    printf("Valor de p: %p\n", p);
    printf("Valor apuntado por p: %d\n", *p);

    return 0;
}
// int *p → puntero a entero

// &x → dirección de memoria

// *p → valor al que apunta (desreferencia)