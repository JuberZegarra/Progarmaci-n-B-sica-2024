#include <iostream>

using namespace std;

int main() {
    const int maxFilasColumnas = 10;
    int matriz[maxFilasColumnas][maxFilasColumnas];
    int filas, columnas;

    cout << "Ingrese el numero de filas y columnas de la matriz (max " << maxFilasColumnas << "): ";
    cin >> filas;

    if (filas <= 0 || filas > maxFilasColumnas) {
        cout << "Tamanio de matriz invalido. Debe ser un valor entre 1 y " << maxFilasColumnas << "." << endl;
        return 1;  
    }

    columnas = filas;

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }

    int transpuesta[maxFilasColumnas][maxFilasColumnas];
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    cout << "\nMatriz Original:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nMatriz Transpuesta:" << endl;
    for (int i = 0; i < columnas; ++i) {
        for (int j = 0; j < filas; ++j) {
            cout << transpuesta[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}