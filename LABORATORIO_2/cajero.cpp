#include <iostream>

using namespace std;

int main() {
    float saldo = 0.0;
    int opcion;
    float monto;

    do {
        // Menú de opciones
        cout << "\nOpciones del Cajero Automatico:" << endl;
        cout << "1) Consultar Saldo" << endl;
        cout << "2) Depositar Dinero" << endl;
        cout << "3) Retirar Dinero" << endl;
        cout << "4) Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Saldo actual: S/." << saldo << endl;
                break;
            case 2:
                cout << "Ingrese el monto a depositar: S/.";
                cin >> monto;
                if (monto > 0) {
                    saldo += monto;
                    cout << "Deposito exitoso! " << endl;
                    cout << "Saldo actual: S/." << saldo << endl;
                } else {
                    cout << "Error: El monto debe ser mayor que cero." << endl;
                }
                break;
            case 3:
                cout << "Ingrese el monto a retirar: S/.";
                cin >> monto;
                if (monto > 0 && monto <= saldo) {
                    saldo -= monto;
                    cout << "Retiro exitoso!" << endl;
                    cout << "Saldo actual: S/." << saldo << endl;
                } else {
                    cout << "Error: Fondos insuficientes." << endl;
                }
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida..." << endl;
        }
    } while (opcion != 4);

    return 0;
}