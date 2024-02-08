/*5. El director de una escuela está organizando un viaje de estudios, y requiere determinar cuanto debe cobrar 
a cada alumno y cuanto debe pagar a la compañía de viajes de servicio. La forma de cobrar es la siguiente: si son 100 alumnos 
o más, el costo por cada alumno es de s./ 65.00; de 50 a 99 alumnos, el costo es de s./ 70.00, de 30 a 49, de s./95, y si son 
menos de 30 el costo de la renta de autobús es de s./4000.00, sin importar el número de alumnos, realice un algoritmo que permita 
determinar pago a la compañía de autobuses y lo que debe pagar cada alumno por el viaje.
Al realizar un análisis del problema, se puede deducir que las variables que se requieren como datos son el numero de alumnos(NA),
Con lo que se puede calcular el pago por alumno (PA) y el costo total de viaje (TOT).*/

#include <iostream>

using namespace std;

int main() {

    int numeroalumnos;
    double costoalumno, costoTotal;

    cout << "Ingrese el numero de alumnos: ";
    cin >> numeroalumnos;

    if (numeroalumnos >= 100) {
        costoalumno = 65.00;
    } else if (numeroalumnos >= 50) {
        costoalumno = 70.00;
    } else if (numeroalumnos >= 30) {
        costoalumno = 95.00;
    } else if (numeroalumnos < 30){
        costoalumno = 4000.00/ numeroalumnos;  
        costoTotal = 4000.00;
    }

    if (costoalumno != 0) {
        costoTotal = costoalumno * numeroalumnos;
    }

    cout << "El costo por alumno es: s/. " << costoalumno << endl;
    cout << "El costo total del viaje es: s/. " << costoTotal << endl;

    return 0;
}
