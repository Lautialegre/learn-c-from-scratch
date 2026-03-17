#include <stdio.h>

int main() {

    int a;
    int b;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    if(a > b) {
        printf("El mayor es %d\n", a);
    } else if(a < b){
        printf("El mayor es %d\n", b);
    } else {
        printf("Son iguales\n");
    }
    return 0;
}