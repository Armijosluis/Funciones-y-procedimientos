#include <iostream>
using namespace std;

int encontrarMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;
    
    int mcd = encontrarMCD(num1, num2);
    cout << "El MCD de " << num1 << " y " << num2 << " es: " << mcd << endl;

    return 0;
}
