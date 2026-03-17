#include <stdio.h>

int main() {
    int opcion;

    printf("Elige una opcion (1-3): ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Elegiste opcion 1\n");
            break;
        case 2:
            printf("Elegiste opcion 2\n");
            break;
        case 3:
            printf("Elegiste opcion 3\n");
            break;
        default:
            printf("Opcion invalida\n");
    }

    return 0;
}