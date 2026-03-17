#include <stdio.h>

int main() {

    int total = 0;       // El "acumulador" en memoria
    int *ptr = &total;   // Puntero a esa dirección
    int numero;         // Variable para leer el teclado


    printf("Ingrese un numero (0 para terminar): ");
    scanf("%d", &numero);

    while(numero != 0) {
        *ptr += numero; // Accedemos a la memoria y sumamos el nuevo número
        printf("Suma actual en memoria: %d\n", *ptr);
        printf("%p\n", ptr);
        printf("Ingrese otro numero (0 para terminar): ");
        scanf("%d", &numero);
        
    }

    printf("Resultado final: %d\n", *ptr);
    return 0;
}
