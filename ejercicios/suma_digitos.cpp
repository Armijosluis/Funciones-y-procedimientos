#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    
    int originalNum = num; // Guardar el número original para mostrar al final
    int sum = 0;
    vector<int> digits; // Vector para almacenar los dígitos
    
    // Proceso de suma de dígitos
    for (; num > 0; num /= 10) {
        int digit = num % 10; // Obtener el último dígito
        digits.push_back(digit); // Almacenar el dígito en el vector
        sum += digit; // Sumar el dígito al total
    }
    
    // Mostrar la suma de los dígitos en orden inverso
    cout << "La suma de los digitos es: ";
    for (int i = digits.size() - 1; i >= 0; --i) {
        cout << digits[i];
        if (i != 0)
            cout << " + "; // Mostrar el signo "+" entre los dígitos excepto el último
    }
    
    cout << " = " << sum << endl; // Mostrar la suma total
    
    return 0;
}
