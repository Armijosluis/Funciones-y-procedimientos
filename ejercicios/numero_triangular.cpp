#include <iostream>

int calcularNumeroTriangular(int n) {
    int triangular = 0;
    int i = 1;

    // Calcular la suma de la serie aritmética usando while
    while (i <= n) {
        triangular += i;
        i++;
    }

    return triangular;
}

void mostrarSerie(int n) {
    int i = 1;

    // Mostrar cada término de la serie usando do-while
    std::cout << "Serie aritmetica: ";
    do {
        std::cout << i;
        if (i < n) {
            std::cout << " + ";
        }
        i++;
    } while (i <= n);

    std::cout << std::endl;
}

int main() {
    int n;

    // Solicitar al usuario el número de términos usando for
    for (bool validInput = false; !validInput;) {
        std::cout << "Ingrese un valor: ";
        std::cin >> n;
        if (n > 0) {
            validInput = true;
        } else {
            std::cout << "Por favor ingrese un numero positivo." << std::endl;
        }
    }

    mostrarSerie(n); // Mostrar la serie aritmética
    int numeroTriangular = calcularNumeroTriangular(n); // Calcular el número triangular
    std::cout << "El numero triangular en la posicion " << n << " es: " << numeroTriangular << std::endl;

    return 0;
}
