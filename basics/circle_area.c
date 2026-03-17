#include <stdio.h>
#define PI 3.1416

int main() {
    double radio;

    printf("Ingrese el radio del circulo: ");
    scanf("%lf", &radio);

    double area = PI * radio * radio;

    printf("El area del circulo es: %.2lf\n", area);

    return 0;
}