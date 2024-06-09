#include <iostream>

using namespace std;

float productoSerieFraccionarios(int n) {
    float producto = 1.0;
    int i = 1;

    do {
        if (i != 1) {
            cout << " * ";
        }
        cout << "1/" << i;
        producto *= 1.0 / i;
        i++;
    } while (i <= n);

    cout << endl;
    return producto;
}

int main() {
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;
    
    float producto = productoSerieFraccionarios(n);
    cout << "El producto de la serie es: " << producto << endl;

    return 0;
}
