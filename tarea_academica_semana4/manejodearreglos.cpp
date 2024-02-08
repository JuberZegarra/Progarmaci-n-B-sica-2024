#include <iostream>

using namespace std;

int main() {
    const int cantidadNumeros = 10;
    int numeros[cantidadNumeros];
    int suma = 0;

    cout << "Ingrese 10 numeros enteros:" << endl;
    for (int i = 0; i < cantidadNumeros; ++i) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    double promedio = static_cast<double>(suma) / cantidadNumeros;

    int mayoresQuePromedio = 0;
    for (int i = 0; i < cantidadNumeros; ++i) {
        if (numeros[i] > promedio) {
            mayoresQuePromedio++;
        }
    }


    cout << "\nPromedio de los numeros ingresados: " << promedio << endl;
    cout << "Cantidad de numeros mayores que el promedio: " << mayoresQuePromedio << endl;

    return 0;
}