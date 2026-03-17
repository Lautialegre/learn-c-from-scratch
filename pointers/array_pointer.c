#include <stdio.h>

int main() {
    int numeros[] = {10, 20, 30};
    int *p = numeros;

    for (int i = 0; i < 3; i++) {
        printf("%d\n", *(p + i));
    }

    return 0;
}
// numeros ya es un puntero al primer elemento

// *(p + i) ≡ numeros[i]