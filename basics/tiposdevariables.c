#include <stdio.h>

int main() {

    int edad = 20;          // entero
    float altura = 1.75;    // número decimal
    double peso = 70.5;     // decimal más preciso
    char letra = 'A';       // un solo carácter

    printf("Edad: %d\n", edad);
    printf("Altura: %f\n", altura);
    printf("Peso: %lf\n", peso);
    printf("Letra: %c\n", letra);

    return 0;
}
//| tipo   | tamaño  |
//| ------ | ------- |
//| char   | 1 byte  |
//| int    | 4 bytes |
//| float  | 4 bytes |
//| double | 8 bytes |
