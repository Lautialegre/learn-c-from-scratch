#include <stdio.h>

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int *p = numeros;

    while (p < numeros + 5) {
        printf("%d ", *p);
        p++;
    }

    return 0;
}
// p++ avanza en memoria

// numeros + 5 → fin del array