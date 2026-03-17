#include <stdio.h>

// Función que devuelve un valor
int multiplicar(int a, int b) {
    return a * b;
}

int main() {
    int resultado = multiplicar(4, 6);
    printf("Resultado: %d\n", resultado);
    return 0;
}