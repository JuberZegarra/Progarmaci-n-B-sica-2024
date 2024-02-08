#include <iostream>
#include <stack>
#include <cstdlib>
#include <vector>
#include <algorithm> 

using namespace std;

char notaALetra(int nota) {
    if (nota >= 18) return 'A';
    else if (nota >= 16) return 'B';
    else if (nota >= 14) return 'C';
    else if (nota >= 12) return 'D';
    else if (nota >= 10) return 'E';
    else return 'F';
}

int main() {
    stack<int> pilaNotas;
    vector<char> letrasOrdenadas;


    for (int i = 0; i < 6; ++i) {
        int nota = rand() % 21;
        cout << "Nota " << i + 1 << ": " << nota << endl;

        pilaNotas.push(nota);
    }

    cout << "\nNotas convertidas a letras y ordenadas:\n";


    while (!pilaNotas.empty()) {
        int nota = pilaNotas.top();
        char letra = notaALetra(nota);
        letrasOrdenadas.push_back(letra);
        pilaNotas.pop();
    }

    sort(letrasOrdenadas.begin(), letrasOrdenadas.end()); 
   
    for (char letra : letrasOrdenadas) {
        cout << letra << endl;
    }

    return 0;
}