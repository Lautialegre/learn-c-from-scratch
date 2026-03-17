#include <stdio.h>

void intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 30;

    intercambiar(&x, &y);

    printf("x=%d, y=%d\n", x, y);

    return 0;
}
