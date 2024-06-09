#include <iostream>

int main() {
    int n1, n2; // Variables para almacenar los valores ingresados por el usuario
    int resultado = 1; // Inicializamos resultado en 1 para la multiplicación

    // Solicitar al usuario que ingrese los valores de n1 y n2
    printf("Ingrese el valor base: ");
    scanf("%d", &n1);
    printf("Ingrese el exponente: ");
    scanf("%d", &n2);

    // Calcular la potencia y mostrar el resultado
    int i = 0;
    do {
        resultado *= n1; // Multiplicar la base al resultado en cada iteración
        i++;
    } while (i < n2);

    // Imprime la operación de potenciación
    printf("Operacion de potenciacion:\n");
    int suma = 0;
    i = 0;
    do {
        printf("%d", n1);
        suma += n1;
        if (i < resultado / n1 - 1) {
            printf(" + "); // Solo imprime "+" si no es el último término
        }
        else if (n2==0){
            n1=0;
            suma += 0;
            resultado=0;
            printf("\nResultado= %d\n", resultado); 
            return 0; 
        }
        i++;
    } while (suma < resultado);

    // Imprime el resultado final
    printf("\nResultado= %d\n", resultado); // Muestra el resultado final

    return 0;
}
