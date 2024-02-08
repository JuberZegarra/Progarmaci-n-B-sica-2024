/*2. Elaborar un programa que permita calcular el puntaje de un equipo de futbol luego de 20 partidos, por cada partido ganado 
el puntaje se incrementa en 3 puntos y por cada partido empatado 1 punto y por cada partido perdido 0 puntos.*/

#include <iostream>
using namespace std;
int main() {
    int PartidoGanado = 0;
    int PartidoEmpatado = 0;
    int PartidoPerdido = 0;
    char respuesta;
    int puntajeTotal;

    for (int i = 0; i < 20; i++) {
        cout << "Ingrese el resultado del partido "<< i + 1 <<"(G=ganado E=empatado P=perdido): ";
        cin >> respuesta;

        if (respuesta == 'G'||'g') {
            PartidoGanado++;
        } else if (respuesta == 'E'||'e') {
            PartidoEmpatado++;
        } else if (respuesta == 'P'||'p') {
            PartidoPerdido++;
        }
    }

    puntajeTotal = PartidoGanado * 3 + PartidoEmpatado * 1;

    cout << "El puntaje total del equipo de futbol es es: " << puntajeTotal << std::endl;

    return 0;
}