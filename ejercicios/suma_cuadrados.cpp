#include <iostream>

using namespace std;

int sumaCuadradosPrimerosNNaturales(int n) {
    int suma = 0;
    cout << "Proceso de suma de los cuadrados de los primeros " << n << " numeros naturales:" << endl;
    int i = 1; // Inicializamos el contador fuera del bucle
    while (i <= n) {
        if (i != 1) {
            cout << " + ";
        }
        cout << i << "^2";
        suma += i * i;
        i++; // Incrementamos el contador en cada iteración
    }
    cout << endl;
    return suma;
}

int main() {
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;
    
    int sumaCuadrados = sumaCuadradosPrimerosNNaturales(n);
    cout << "La suma de los cuadrados de los numeros es: " << sumaCuadrados << endl;

    return 0;
}
