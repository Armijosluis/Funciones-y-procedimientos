#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    
    int originalNum = num; // Guardar el número original para mostrar al final
    
    cout << "El numero en reversa es: ";
    for (; originalNum > 0; originalNum /= 10) {
        int digit = originalNum % 10; // Obtener el último dígito
        cout << digit; // dígito inverso
    }
    
    return 0;
}
