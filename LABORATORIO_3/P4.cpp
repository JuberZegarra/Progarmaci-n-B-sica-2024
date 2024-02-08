//4.Elaborar un programa que calcule el área de un triangulo conociendo sus 3 lados e identifique que tipo de triangulo es.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double lado_1, lado_2, lado_3;
    double A, P;
    
    cout << "Ingrese el primer lado del triangulo: ";
    cin >> lado_1;

    cout << "Ingrese el segundo lado del triangulo: ";
    cin >> lado_2;

    cout << "Ingrese el tercer lado del triangulo: ";
    cin >> lado_3;

    P = (lado_1 + lado_2 + lado_3) / 2;
    A = sqrt(P * (P - lado_1) * (P - lado_2) * (P - lado_3));


    if (lado_1 == lado_2 && lado_2 == lado_3) {
        cout << "El triangulo es equilatero." << endl;
    } else if (lado_1 == lado_2 || lado_1 == lado_3 || lado_2 == lado_3) {
        cout << "El triangulo es isosceles." << endl;
    } else {
        cout << "El triangulo es escaleno." << endl;
    }

    cout << "El area del triangulo es: " << A << endl;

    return 0;
}