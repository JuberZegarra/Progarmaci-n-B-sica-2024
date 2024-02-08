/*1.Elaborar un programa que solicite el numero de respuestas de un postulante, por cada respuesta correcta se 
incrementa su puntaje en 4, por cada respuesta incorrecta -2 y por cada respuesta en blanco 0, se pide calcular 
el puntaje total del postulante de una prueba de 20 preguntas.*/

#include <iostream>
using namespace std;
int main() {
    int respuestaCorrecta = 0;
    int respuestaIncorrecta = 0;
    int respuestaBlanco = 0;
    char respuesta;
    int puntajeTotal;

    for (int i = 0; i < 20; i++) {
        cout << "Ingrese la respuesta C: correcta I: incorrecta B: en blanco para la pregunta " << i + 1 << ": ";
        cin >> respuesta;

        if (respuesta == 'C'||'c') {
            respuestaCorrecta++;
        } else if (respuesta == 'I'||'i') {
            respuestaIncorrecta++;
        } else if (respuesta == 'B'||'b') {
            respuestaBlanco++;
        }
    }

    puntajeTotal = respuestaCorrecta * 4 - respuestaIncorrecta * 2;

    cout << "El puntaje total del postulante es: " << puntajeTotal << std::endl;

    return 0;
}