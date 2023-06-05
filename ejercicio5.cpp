#include <iostream>
using namespace std;


int calcularFactorial(int numero) {
    if (numero < 0) {
        cout << "El numero no puede ser negativo"<< endl;
        return 0;
    }

    int factorial = 1;
    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }

    return factorial;
}

int main() {
    int num;
    cout << "Ingrese un numero entero: " << endl;
    cin >> num;

    int factorial = calcularFactorial(num);
    if (factorial != 0) {
        cout << "El factorial de " << num << " es: " << factorial << endl;
    }

    return 0;
}
