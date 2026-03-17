#include <stdio.h>

int main() {
    int numeros[5] = {3, 7, 2, 9, 5};
    int buscado = 9;
    int encontrado = 0;

    for (int i = 0; i < 5; i++) {
        if (numeros[i] == buscado) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado)
        printf("Elemento encontrado\n");
    else
        printf("No encontrado\n");

    return 0;
}