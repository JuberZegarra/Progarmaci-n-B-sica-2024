//elaborar un sistema que solicite al usuario que ingrese un numero 
//del 1 al 12 y que el sistema retorne el nombre del mes 

#include<iostream>

using namespace std;
int main()
{
    int mes;

    while(true){

    cout << "Ingrese un numero del 1 al 12 o 0 para salir del programa: ";
    cin >> mes;

    // while (dia > 7 && dia <=0)
    
    if (mes == 0) {
            cout << "Saliendo del programa..." << endl;
            break;
        }

    if (mes >= 1 && mes <= 12) {
    switch(mes)
        {
        case 1: 
            cout << "Enero" << endl;
        break;
        case 2: 
            cout << "Febrero" << endl;
        break;
        case 3: 
            cout << "Marzo" << endl;
        break;
        case 4: 
            cout << "Abril" << endl;
        break;
        case 5: 
            cout << "Mayo" << endl;
        break;
        case 6: 
            cout << "Junio" << endl;
        break;
        case 7: 
            cout << "Julio" << endl;
        break;
        case 8: 
            cout << "Agosto" << endl;
        break;
        case 9: 
            cout << "Setiembre" << endl;
        break;
        case 10: 
            cout << "Octubre" << endl;
        break;
        case 11: 
            cout << "Noviembre" << endl;
        break;
        case 12: 
            cout << "Diciembre" << endl;
        break;
        }
    } 

    else 
    {
            cout << "Error: Ingresa un número del 1 al 12" << endl;
    }
}

    return 0;
}