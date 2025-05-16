//
// Created by Checo on 09/05/2025.
//
#include "Inicio.h"
#include "Actividad1.h"
#include "Actividad2.h"
#include "Actividad3.h"
#include "Actividad4.h"
#include "Actividad5.h"
#include "Actividad6.h"
#include "Actividad7.h"
#include "Actividad8.h"
#include "Actividad9.h"
#include "Actividad10.h"
#include "Actividad11.h"
#include "Actividad12.h"
using namespace std;

int main()
{
    char eleccion; //elegir si reiniciar o finalizar programa.
  presentacion();
    do {
        inicio();
        int opcion;

        // Validar la entrada correctamente
        while (!(cin >> opcion)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada invalida. Por favor, ingrese un numero: ";
        }

        if (opcion == 0)
        {
            cout << "Programa Finalizado";
            cout << endl;
            cout << "Gracias por tu tiempo" <<endl;
            adios();
            return 0;
        }
        switch(opcion)
        { //Actividad 1
            case 1:
                actividad1();
            break;
//Actividad2
            case 2:
                actividad2();
            break;
//Actividad 3
            case 3:
                actividad3();
            break;
//Actividad 4
            case 4:
                actividad4();
            break;
//Actividad 5
            case 5:
                actividad5();
            break;
//Actividad 6
            case 6:
                actividad6();
            break;
//Actividad 7
            case 7:
                actividad7();
            break;
//Actividad 8
            case 8:
                actividad8();
            break;
//Actividad 9
            case 9:
                actividad9();
            break;
//Actividad 10
            case 10:
                actividad10();
            break;
//Actividad 11
            case 11:
                actividad11();
            break;
//Actividad 12
            case 12:
                actividad12();
            break;
            default:
                cout <<"Error" << endl;
        } //fin switch
        cout << endl;
        cout << "Quiere reiniciar el programa?" << endl;
        cout << "Si = [s], No = [n]." << endl;
        cin >> eleccion;
    } while (eleccion == 's' || eleccion == 'S');
    cout << "Programa Terminado" <<endl;
    cout << endl;
    cout << "Gracias por tu tiempo" <<endl;
    adios();

return 0;
}