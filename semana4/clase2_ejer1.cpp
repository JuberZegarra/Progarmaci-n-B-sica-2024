#include <iostream>
using namespace std;

int main() {
    int A, B, C;

    while(true) {

    cout << "Ingrese el valor de A: ";
    cin >> A;
    cout << "Ingrese el valor de B: ";
    cin >> B;
    cout << "Ingrese el valor de C: ";
    cin >> C;

    if (A == B || A == C || B == C) {
        cout << "Alerta: Los valores ingresados no son distintos. Por favor, ingrese valores diferentes." << endl;
    } else {
    
            break;
        }
    }
        if (A > B && A > C) {
            cout << "A es el mayor valor." << endl;
            if (B < C) {
                cout << "B es el menor valor." << endl;
            } else {
                cout << "C es el menor valor." << endl;
            }
        } else if (B > A && B > C) {
            cout << "B es el mayor valor." << endl;
            if (A < C) {
                cout << "A es el menor valor." << endl;
            } else {
                cout << "C es el menor valor." << endl;
            }
        } else {
            cout << "C es el mayor valor." << endl;
            if (A < B) {
                cout << "A es el menor valor." << endl;
            } else {
                cout << "B es el menor valor." << endl;
            }
        }
    

    return 0;
}