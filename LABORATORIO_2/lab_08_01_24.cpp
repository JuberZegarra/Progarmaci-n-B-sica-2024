//elaborar un programa que a partir de numero de dias, calcule los años, meses y dias que contiene, asi mismo indicar el mes en el recae
#include <iostream>
using namespace std;

int main() {
    int numDias, anios, meses, Diasrestantes;

    cout << "Ingrese el numero de dias: ";
    cin >> numDias;

    anios = numDias / 365;

    meses = (numDias % 365) / 30;

    Diasrestantes = (numDias % 365) % 30;


    string nombreMes;
    switch(meses) {
        case 1: 
            nombreMes = "Enero"; break;
        case 2: 
            nombreMes = "Febrero"; break;
        case 3: 
            nombreMes = "Marzo"; break;
        case 4: 
            nombreMes = "Abril"; break;
        case 5: 
            nombreMes = "Mayo"; break;
        case 6: 
            nombreMes = "Junio"; break;
        case 7: 
            nombreMes = "Julio"; break;
        case 8: 
            nombreMes = "Agosto"; break;
        case 9: 
            nombreMes = "Septiembre"; break;
        case 10: 
            nombreMes = "Octubre"; break;
        case 11: 
            nombreMes = "Noviembre"; break;
        case 12: 
            nombreMes = "Diciembre"; break;
        default: nombreMes = "Error..."; break;
    }

    // Mostrar el resultado
    cout << numDias << " dias equivale a: " << endl;
    cout << "Anios: " << anios << endl;
    cout << "Meses: " << meses << endl;
    cout << "Dias: " << Diasrestantes << endl;
    cout << "El mes en que recae es: " << nombreMes << endl;

    return 0;
}
