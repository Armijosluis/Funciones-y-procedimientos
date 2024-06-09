#include <iostream>
#include <cmath>

int main() {
    int na;
    printf("Ingrese un numero: ");
    scanf("%d", &na);

    int menos = na;
    int x = 1; // Inicializamos x fuera del bucle

    while (menos > 0) {
        menos -= (x * x * x);
        printf("%d", menos);
        if (menos > 0) {
            printf("-");
        }
        x++; // Incrementamos x en cada iteración
    }

    printf("\n");

    double ra = cbrt(na); // Utilizamos cbrt() para calcular la raíz cúbica

    printf("La raiz cubica es: %.2f\n", ra); // Cambiamos el formato de salida para imprimir un número de punto flotante

    return 0;
}
