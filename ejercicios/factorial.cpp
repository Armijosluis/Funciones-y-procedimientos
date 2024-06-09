#include <iostream>

int main() {
    int numero;
    unsigned long long factorial = 1;

    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    std::cout << "Factorial de " << numero << " = ";

    // Calcula el factorial utilizando un bucle for
    for (int i = 1; i <= numero; ++i) {
        factorial *= i;
        if (i != 1) {
            std::cout << " * "; // Muestra el signo de multiplicación
        }
        std::cout << i; // Muestra el número actual
    }

    std::cout << " = " << factorial << std::endl;

    return 0;
}