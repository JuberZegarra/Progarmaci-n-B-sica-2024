#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, nota3, promedio;

    cout << "Ingrese la nota 1: ";
    cin >> nota1;

    cout << "Ingrese la nota 2: ";
    cin >> nota2;

    cout << "Ingrese la nota 3: ";
    cin >> nota3;

    promedio = (nota1 * 0.15) + (nota2 * 0.35) + (nota3 * 0.50);

    cout << "El promedio del estudiante es: " << promedio << endl;

    return 0;
}