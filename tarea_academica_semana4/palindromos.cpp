#include <iostream>
#include <string>

using namespace std;

int main() {
    string palabra;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    bool esPalindromo = true;
    int longitud = palabra.length();

    for (int i = 0; i < longitud / 2; ++i) {
        if (palabra[i] != palabra[longitud - i - 1]) {
            esPalindromo = false;
            break;
        }
    }

    if (esPalindromo) {
        cout << "La palabra '" << palabra << "' es un palindromo." << endl;
    } else {
        cout << "La palabra '" << palabra << "' no es un palindromo." << endl;
    }

    return 0;
}