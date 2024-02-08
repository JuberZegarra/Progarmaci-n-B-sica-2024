//elaborar un sistema que solicite al usuario que ingrese un numero 
//del 1 al 7 y que el sistema retorne el nombre del dia 

#include<iostream>

using namespace std;
int main()
{
    int dia;
    while(true){
    cout << "Ingrese un numero del 1 al 7 o 0 para salir del programa: ";
    cin >> dia;

    // while (dia > 7 && dia <=0)
    
    if (dia == 0) {
            cout << "Saliendo del programa..." << endl;
            break;
        }

    if (dia >= 1 && dia <= 7) {
    switch(dia)
        {
        case 1: 
            cout << "Lunes" << endl;
        break;
        case 2: 
            cout << "Martes" << endl;
        break;
        case 3: 
            cout << "Miercoles" << endl;
        break;
        case 4: 
            cout << "Jueves" << endl;
        break;
        case 5: 
            cout << "viernes" << endl;
        break;
        case 6: 
            cout << "sabado" << endl;
        break;
        case 7: 
            cout << "domingo" << endl;
        break;
        default:
        cout << "error, ingrese un numero del 1 al 7";
        }
    } 
    else 
    {
            cout << "Error: Ingresa un número del 1 al 7" << endl;
    }
}

    return 0;
}