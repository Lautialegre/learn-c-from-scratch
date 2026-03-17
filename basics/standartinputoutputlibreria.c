#include <stdio.h>

int main() {

    int edad;

    printf("Ingrese su edad: "); // sirve para mostrar texto o variables en la pantalla.
    scanf("%d", &edad); // sirve para leer datos que escribe el usuario.

    printf("Tu edad es: %d\n", edad);

    return 0;
}
//programa empieza
//      ↓
//printf → muestra texto
//      ↓
//scanf → espera que el usuario escriba
//      ↓
//usuario escribe
//      ↓
//scanf guarda el valor
//      ↓
//printf muestra el resultado