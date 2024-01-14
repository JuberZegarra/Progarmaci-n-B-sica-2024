//elaborar un sistema que solicite al usuario que ingrese un numero 
//del 1 al 12 y que el sistema retorne el nombre del mes 

#include<iostream>
using namespace std;

int main() {
    char nota;

    while (true) {
        cout << "Ingrese una letra (A-B-C-D-E) o 0 para salir del programa: ";
        cin >> nota;

        if (nota == '0') {
            cout << "Saliendo del programa..." << endl;
            break;
        }

        switch (nota) {
            case 'A':
                cout << "Nota : 19 - 18" << endl;
                break;
            case 'B':
                cout << "Nota : 17 - 14" << endl;
                break;
            case 'C':
                cout << "Nota : 14- 11" << endl;
                break;
            case 'D':
                cout << "Nota : 10 - 5" << endl;
                break;
            case 'E':
                cout << "Nota : 5 - 0" << endl;
                break;
            default:
                cout << "Error: Ingresa una letra valida (A-B-C-D-E) o 0 para salir." << endl;
        }
    }

    return 0;
}