#include <stdio.h>

int main() {
    int numeros[5] = {12, 45, 7, 89, 23};
    int mayor = numeros[0];

    for (int i = 1; i < 5; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }

    printf("El mayor es: %d\n", mayor);

    return 0;
}