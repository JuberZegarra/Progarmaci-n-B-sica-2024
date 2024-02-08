//Realice un programa que a partir de proporcionarle la velocidad de un automóvil, expresada en kilómetros por hora, proporcione la velocidad en metros por segundo.
#include <iostream>

using namespace std;

double convertirKmH_a_mS(double velocidadKmH) {
    // 1 km/h = 0.277778 m/s
    return velocidadKmH * 0.277778;
}

int main() {
    double velocidadKmH, velocidadMS;

    cout << "Ingrese la velocidad del automovil en kilometros por hora: ";
    cin >> velocidadKmH;

    velocidadMS = convertirKmH_a_mS(velocidadKmH);

    cout << "La velocidad del automovil es " << velocidadMS << " metros por segundo." << endl;

    return 0;
}
