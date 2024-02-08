/*3. Elaborar un programa que el incentivo que recibirá un operario a lo largo de 
su semana laboral (lunes a sábado), se conoce que la producción mínima es 100 unidades*/

#include <iostream>
using namespace std;

int main() {
    int produccion[6]; 
    int totalProduccion = 0; 
    int incentivo = 0;

    for (int i = 0; i < 6; i++) {
        cout << "Ingresa la produccion para el dia " << i + 1 << ": ";
        cin >> produccion[i];
        totalProduccion += produccion[i];
    }

    if (totalProduccion >= 100) {
        incentivo = totalProduccion * 0.5; 
    }

    cout << "El incentivo para la semana es de: " << incentivo << endl;

    return 0;
}