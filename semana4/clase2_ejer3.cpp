#include <iostream>
using namespace std;

int main() {
    int tpares ;
    int timpares ;
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    for (int i = 1; i <= num; ++i) {
        if (i % 2 == 0) {
            tpares++;
        } else {
            timpares++;
        }
    }

    cout << "Cantidad de numeros pares del 1 al " << num << " : " << tpares << endl;
    cout << "Cantidad de numeros impares del " << num << " : " << timpares << endl;

    return 0;
}