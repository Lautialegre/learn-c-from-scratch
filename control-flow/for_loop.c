#include <stdio.h>

int main() {

    int i;

    for(i = 1; i <= 10; i++) { // for(inicializacion ; condicion ; cambio)
        printf("5 x %d = %d\n", i, 5 * i);
    }

    return 0;
}
//Funcionamiento del printf 
//leer string
//↓
//encontrar %d
//↓
//reemplazar con valor de i
//↓
//encontrar siguiente %d
//↓
//reemplazar con 5*i
//↓
//mostrar resultado