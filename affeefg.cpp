#include <iostream>

using namespace std;

int main() {
    int num;
    int factorial = 1;

    cout << "Ingrese un numero: " << endl;
    cin >> num;

    for (int i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

    cout << "El factorial de " << num << " es: " << factorial << endl;

    return 0;
}
