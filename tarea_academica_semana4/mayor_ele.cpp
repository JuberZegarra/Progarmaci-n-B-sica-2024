#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros;

    cout << "Ingrese numeros al vector (ingrese un numero negativo para finalizar):" << endl;

    while (true) {
        int numero;
        cin >> numero;

        if (numero < 0) {
            break; 
        }

        numeros.push_back(numero);
    }

    int mayorElemento = numeros[0];

    for (size_t i = 1; i < numeros.size(); ++i) {
        if (numeros[i] > mayorElemento) {
            mayorElemento = numeros[i];
            break;
        }
    }

    cout << "El mayor elemento en el vector es: " << mayorElemento << endl;

    return 0;
}