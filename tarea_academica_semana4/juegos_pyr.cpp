#include <iostream>

using namespace std;

int main() {
    int respuestasCorrectas = 0;
    int respuestasIncorrectas = 0;

    // Pregunta 1
    cout << "1. ¿Cual es la capital de Francia?" << endl;
    cout << "a) Madrid   b) Paris   c) Roma   d) Berlin" << endl;
    char respuesta1;
    cin >> respuesta1;

    if (respuesta1 == 'b' || respuesta1 == 'B') {
        cout << "¡Correcto!" << endl;
        respuestasCorrectas++;
    } else {
        cout << "Incorrecto. La respuesta correcta es Paris." << endl;
        respuestasIncorrectas++;
    }

    // Pregunta 2
    cout << "\n2. ¿Cuantos lados tiene un triangulo?" << endl;
    cout << "a) 3   b) 4   c) 5   d) 6" << endl;
    char respuesta2;
    cin >> respuesta2;

    if (respuesta2 == 'a' || respuesta2 == 'A') {
        cout << "¡Correcto!" << endl;
        respuestasCorrectas++;
    } else {
        cout << "Incorrecto. Un triangulo tiene 3 lados." << endl;
        respuestasIncorrectas++;
    }

    // Pregunta 3
    cout << "\n2. ¿Cuantas regiones tiene el Peru?" << endl;
    cout << "a) 30   b) 24   c) 25   d) 18" << endl;
    char respuesta3;
    cin >> respuesta3;

    if (respuesta3 == 'c' || respuesta3 == 'C') {
        cout << "¡Correcto!" << endl;
        respuestasCorrectas++;
    } else {
        cout << "Incorrecto. El Peru tiene 25 regiones." << endl;
        respuestasIncorrectas++;
    }

    // Pregunta 4
    cout << "\n2. ¿Que dia de octubre es el aniversario de Tingo Maria?" << endl;
    cout << "a) 15   b) 25   c) 14   d) 16" << endl;
    char respuesta4;
    cin >> respuesta4;

    if (respuesta4 == 'a' || respuesta4 == 'A') {
        cout << "¡Correcto!" << endl;
        respuestasCorrectas++;
    } else {
        cout << "Incorrecto. El aniversario de Tingo Maria es el 15 de octubre." << endl;
        respuestasIncorrectas++;
    }

    cout << "\nResultados:" << endl;
    cout << "Respuestas correctas: " << respuestasCorrectas << endl;
    cout << "Respuestas incorrectas: " << respuestasIncorrectas << endl;

    return 0;
}