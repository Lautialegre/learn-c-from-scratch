#include <stdio.h>

int main() {
    int numeros[5];

    for (int i = 0; i < 5; i++) {
        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("\nValores cargados:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}