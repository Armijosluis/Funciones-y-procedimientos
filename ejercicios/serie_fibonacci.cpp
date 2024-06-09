#include <iostream>

void fibonacci(int n) {
    std::cout << "Serie de Fibonacci: ";
    std::cout << "0 "; // Imprimir el primer término
    
    int a = 0, b = 1;
    int i = 1; // Comenzamos con i = 1 para ya haber impreso el primer término
    while (i < n) {
        std::cout << b << " ";
        int temp = a;
        a = b;
        b = temp + b;
        i++; // Incrementamos el contador en cada iteración
    }
}

int main() {
    int n;
    std::cout << "Ingrese el numero de elementos que desea generar: ";
    std::cin >> n;
    
    fibonacci(n);
    
    return 0;
}


