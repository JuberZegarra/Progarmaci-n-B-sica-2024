#include <iostream>

using namespace std;

int main() {
    char caracter;
    int contadorVocales = 0;

    // Solicitar al usuario ingresar una oración
    std::cout << "Ingrese una oracion: ";

    while (cin.get(caracter) && caracter != '\n') {
        // Convertir el caracter a minúsculas para comparación
        char lowercaseChar = std::tolower(caracter);

        // Verificar si es una vocal
        if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' ||
            lowercaseChar == 'o' || lowercaseChar == 'u') {
            contadorVocales++;
        }
    }

    // Mostrar el resultado
    std::cout << "Cantidad de vocales en la oracion: " << contadorVocales << std::endl;

    return 0;
}