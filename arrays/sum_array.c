#include <stdio.h>

int main() {
    int numeros[5] = {1, 2, 3, 4, 5};
    int suma = 0;

    for (int i = 0; i < 5; i++) {
        suma += numeros[i];
    }

    printf("Suma total: %d\n", suma);

    return 0;
}