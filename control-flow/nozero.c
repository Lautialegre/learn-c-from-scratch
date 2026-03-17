#include <stdio.h>

int main() {

    int numero;

    printf("Ingrese un numero (0 para terminar): ");
    scanf("%d", &numero);

    while(numero != 0) {
        printf("Ingresaste: %d\n", numero);

        printf("Ingrese otro numero (0 para terminar): ");
        scanf("%d", &numero);
    }

    printf("Programa terminado\n");

    return 0;
}