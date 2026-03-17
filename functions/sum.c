#include <stdio.h>

// Función que recibe dos números
void sumar(int a, int b) {
    int resultado = a + b;
    printf("Resultado: %d\n", resultado);
}

int main() {
    sumar(3, 5);
    return 0;
}