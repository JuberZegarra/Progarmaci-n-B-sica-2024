//Desarrolle un programa que permita leer 4 números y ordenarlos de menor a mayor, si es el caso.
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int numeros[4];

    cout << "Ingrese 4 numeros:" << endl;
    for (int i = 0; i < 4; ++i) 
    {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    sort(numeros, numeros + 4);

    cout << "Los numeros ordenados de menor a mayor son:" << endl;
    for (int i = 0; i < 4; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
