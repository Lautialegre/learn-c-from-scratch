#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;

    p = (int *)malloc(sizeof(int));

    if (p == NULL) {
        printf("Error de memoria\n");
        return 1;
    }

    *p = 100;

    printf("Valor: %d\n", *p);

    free(p);

    return 0;
}