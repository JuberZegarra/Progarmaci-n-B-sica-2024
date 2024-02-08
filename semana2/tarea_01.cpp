#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Ingresar un numero: ";
    cin >> num;
    int suma = 0;

    for (int i = 1; i <= num; ++i) {
        suma += i;
    }

    cout << "La suma de los numeros del 1 al "<< num << " es: " << suma << endl;

    return 0;
}
