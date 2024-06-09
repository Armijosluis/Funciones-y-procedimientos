#include <iostream>

int main() {
    int n;
    int suma = 0;

    // Solicitar al usuario el número de términos
    std::cout << "Ingrese el numero de terminos: ";
    std::cin >> n;

    // Calcular la suma de la serie aritmética y mostrar cada término
    std::cout << "Suma de la serie aritmetica: ";
    int i = 1;
    do {
        suma += i;
        std::cout << i;
        if (i < n) {
            std::cout << " + ";
        } else {
            std::cout << " = ";
        }
        i++;
    } while (i <= n);

    // Mostrar la suma total
    std::cout << suma << std::endl;

    return 0;
}
