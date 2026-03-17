#include <stdio.h>

int main() {
    int x = 5;
    int *p = &x;

    *p = 20;

    printf("x ahora vale: %d\n", x);

    return 0;
}
// *p = 20 cambia directamente el valor de x

// No es copia → es la variable real