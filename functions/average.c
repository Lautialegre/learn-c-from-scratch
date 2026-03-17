#include <stdio.h>

float promedio(int arr[], int n) {
    int suma = 0;

    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }

    return (float)suma / n;
}

int main() {
    int numeros[] = {10, 20, 30, 40, 50};
    int n = 5;

    float prom = promedio(numeros, n);

    printf("Promedio: %.2f\n", prom);

    return 0;
}

//Se pasa un array a la función

//n es necesario porque C no sabe el tamaño del array

//(float) → casting para división correcta