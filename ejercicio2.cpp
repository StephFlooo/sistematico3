#include <iostream>
using namespace std;

void numerosParesImpares(int num) {
    cout << "Numeros pares e impares hasta " << num << ":\n";
    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            cout << i << " es un numero par" << endl;
        } else {
            cout << i << " es un numero impar" << endl;
        }
    }
}

int main() {
    int num;
    cout << "Ingrese un numero entero: ";
    cin >> num;
    numerosParesImpares(num);
    return 0;
}
