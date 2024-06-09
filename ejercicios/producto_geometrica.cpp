#include <iostream>

int main() {
    int numero;
    int terms;

    std::cout << "Ingrese el primer numero de la serie: ";
    std::cin >> numero;
    std::cout << "Ingrese la cantidad de terminos de la serie: ";
    std::cin >> terms;

    std::cout << "Serie geometrica: \n";
    int currentTerm = numero;
    int i = 0;
    while (i < terms) {
        std::cout << currentTerm << " ";
        currentTerm *= numero;
        i++;
    }

    int termsToMultiply;
    std::cout << "\nIngrese la cantidad de terminos que desea utilizar para calcular el producto: ";
    std::cin >> termsToMultiply;

    long long product = 1;
    currentTerm = numero;
    i = 0;
    while (i < termsToMultiply) {
        product *= currentTerm;
        currentTerm *= numero;
        i++;
    }

    std::cout << "Producto de los primeros " << termsToMultiply << " terminos: " << product << std::endl;

    return 0;
}
