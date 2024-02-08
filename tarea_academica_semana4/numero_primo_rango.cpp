#include <iostream>
#include <vector>

using namespace std;

int main() {
    int inicio, fin;

    cout << "Ingrese el numero de inicio: ";
    cin >> inicio;

    cout << "Ingrese el numero de fin: ";
    cin >> fin;

    if (inicio >= fin) {
        cout << "Error: El numero de inicio debe ser menor que el ultimo numero." << endl;
        return 1;
    }

    vector<int> primos;

    for (int num = inicio; num <= fin; ++num) {
        bool esPrimo = true;

        if (num <= 1) {
            esPrimo = false;
        } else {
            for (int i = 2; i * i <= num; ++i) {
                if (num % i == 0) {
                    esPrimo = false;
                    break;  
                }
            }
        }

        if (!esPrimo) {
            continue;
        }

        primos.push_back(num);
    }

    cout << "Numeros primos en el rango [" << inicio << ", " << fin << "]: ";
    for (int primo : primos) {
        cout << primo << " ";
    }
    cout << endl;

    return 0;
}