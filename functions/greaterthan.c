#include <stdio.h>

int mayor(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int x, y;

    printf("Ingrese dos numeros: ");
    scanf("%d %d", &x, &y);

    int resultado = mayor(x, y);

    printf("El mayor es: %d\n", resultado);

    return 0;
}