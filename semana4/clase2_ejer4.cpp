#include <iostream>
using namespace std;

int main() {
    
    int calif;

    cout << "Ingrese una calificacion entre 1 y 20: ";
    cin >> calif;

    if (calif >= 19 && calif <= 20) {
        cout << "La calificacion es: A" << endl;
    } else if (calif >= 16 && calif <= 18) {
        cout << "La calificacion es: B" << endl;
    } else if (calif >= 10 && calif<= 12) {
        cout << "La calificacion es: D" << endl;
    } else if (calif >= 1 && calif <= 9) {
        cout << "La calificacion es: E" << endl;
    } else {
        cout << "La calificacion ingresada no es valida." << endl;
    }

    return 0;
}