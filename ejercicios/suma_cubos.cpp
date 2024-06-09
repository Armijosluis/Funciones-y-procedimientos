#include <iostream>

using namespace std;

int sumaCubosPrimerosNNaturales(int n) {
    int suma = 0;
    int i = 1;
    cout << "Proceso de suma de los cubos de los primeros " << n << " numeros naturales:" << endl;

    do {
        if (i != 1) {
            cout << " + ";
        }
        cout << i << "^3";
        suma += i * i * i;
        i++;
    } while (i <= n);

    cout << endl;
    return suma;
}

int main() {
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;
    
    int sumaCubos = sumaCubosPrimerosNNaturales(n);
    cout << "La suma de los cubos de los numeros es: " << sumaCubos << endl;

    return 0;
}
