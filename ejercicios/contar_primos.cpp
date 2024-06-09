#include  <iostream>
#include <vector>

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    int i = 2;
    while (i * i <= numero) {
        if (numero % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

std::vector<int> obtenerNumerosPrimosHastaN(int n) {
    std::vector<int> primos;
    int i = 2;
    while (i <= n) {
        if (esPrimo(i)) {
            primos.push_back(i);
        }
        i++;
    }
    return primos;
}

int main() {
    int n;
    std::cout << "Ingrese un numero: ";
    std::cin >> n;
    
    std::vector<int> primos = obtenerNumerosPrimosHastaN(n);
    for (int primo : primos) {
        std::cout << primo << " ";
    }
    std::cout << std::endl;

    int cantidadPrimos = primos.size();
    std::cout << "Hay " << cantidadPrimos << " numeros primos hasta " << n << std::endl;

    return 0;
}
