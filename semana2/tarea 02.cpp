#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;
    int mayor, menor;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    while (num2 == num1) 
	{
        cout << "El segundo numero debe ser diferente al primero. Ingresar otro numero: ";
        cin >> num2;
    }

    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    while (num3 == num1 || num3 == num2) 
	{
        cout << "El tercer numero debe ser diferente a los dos anteriores. Ingresar otro numero: ";
        cin >> num3;
    }

    mayor = menor = num1;

    if (num2 > mayor) {
        mayor = num2;
    } else if (num2 < menor) {
        menor = num2;
    }

    if (num3 > mayor) {
        mayor = num3;
    } else if (num3 < menor) {
        menor = num3;
    }

    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;

    return 0;
}
