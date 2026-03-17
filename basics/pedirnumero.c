#include <stdio.h>
#include <stdlib.h>

// Aca las variables globales se inicializan en 0 

int main() //funcion principal 
{
    int numero; // declaramos la variable local "numero" tipo entero 
    printf("Introduce un numero: "); // muestra el mensaje no espera el input
    scanf("%d", &numero); // espera el input del teclado pausa el programa, escribis algo, lo lee y lo guarda 
    printf("El numero introducido es: %d\n", numero);
    return 0;
}
