#include <stdio.h>

void duplicar(int *n) {
    *n = (*n) * 2;
}

int main() {
    int x = 7;

    duplicar(&x);

    printf("Resultado: %d\n", x);

    return 0;
}