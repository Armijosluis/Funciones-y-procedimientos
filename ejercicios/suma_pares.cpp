#include <iostream>

using namespace std;

int sumarParesHastaN(int n) {
    int suma = 0;
    int i = 2; // Inicializar el contador en 2 para empezar desde el primer número par
    
    cout << "Proceso de suma de numeros pares hasta " << n << ":" << endl;
    while (i <= n) {
        if (i != 2) {
            cout << " + ";
        }
        cout << i;
        suma += i;
        i += 2; // Incrementar el contador en 2 para obtener números pares
    }
    cout << endl;
    return suma;
}

int main() {
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;
    
    int sumaPares = sumarParesHastaN(n);
    cout << "La suma de los numeros pares hasta " << n << " es: " << sumaPares << endl;

    return 0;
}
