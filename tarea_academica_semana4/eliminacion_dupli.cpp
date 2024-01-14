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

    for (size_t i = 0; i < numeros.size(); ++i) {
        for (size_t j = i + 1; j < numeros.size(); ++j) {
            if (numeros[i] == numeros[j]) {
                numeros.erase(numeros.begin() + j);
                --j;  
                continue;
            }
        }
    }

   
    cout << "Vector despues de eliminar duplicados: ";
    for (int numero : numeros) {
        cout << numero << " ";
    }
    cout << endl;

    return 0;
}