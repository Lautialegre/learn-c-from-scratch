#include <stdio.h>

int main() {
    int numeros[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5 / 2; i++) {
        int temp = numeros[i];
        numeros[i] = numeros[5 - 1 - i];
        numeros[5 - 1 - i] = temp;
    }

    printf("Array invertido:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}