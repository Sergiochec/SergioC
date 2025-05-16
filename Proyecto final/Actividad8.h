//
// Created by Checo on 13/05/2025.
//

#ifndef ACTIVIDAD8_H
#define ACTIVIDAD8_H

#endif //ACTIVIDAD8_H

#include "Librerias.h"

const int Espaciosmax = 10;
int arreglo[Espaciosmax] = {0};
int elementos = 0;

void mostrarLista(){
    cout << "Valores en el arreglo: ";
    for (int i = 0; i < elementos; ++i) {
        std::cout << arreglo[i] << " ";
    }
    cout << endl;
}

void mostrarSumatoria(){
    int sumatoria = 0;
    for (int i = 0; i < elementos; ++i) {
        sumatoria += arreglo[i];
    }
    cout << "Sumatoria de todos los elementos: " << sumatoria << endl;
}

void actividad8();
void actividad8()
{
    int opcion, valor, indice;

    do {              //Inicio de while
        cout << "Menu:\n";
        cout << "1. Agregar valor\n";
        cout << "2. Mostrar lista de valores\n";
        cout << "3. Mostrar sumatoria de todos los elementos\n";
        cout << "4. Editar un valor\n";
        cout << "5. Borrar un valor\n";
        cout << "6. Vaciar arreglo\n";
        cout << "7. Salir\n";
        cout << "Elija una opcion: ";
        cin >> opcion;

        if (cin.fail())
        {
            cin.clear();cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada no válida. Por favor ingrese un número.\n";
            continue;
        }

        switch (opcion) {       //Inicio de switch
            case 1:
                if (elementos < Espaciosmax) {
                    std::cout << "Ingrese un valor: ";
                    std::cin >> valor;
                    arreglo[elementos++] = valor;
                } else {
                    std::cout << "El arreglo ha llegado al maximo de 10 espacios.\n";
                }
                break;
            case 2:
                mostrarLista();
                break;
            case 3:
                mostrarSumatoria();
                break;
            case 4:
                cout << "Ingrese el valor a editar (0 a " << elementos - 1 << "): ";
                cin >> indice;
                if (indice >= 0 && indice < elementos) {
                    cout << "Ingrese el nuevo valor: ";
                    cin >> valor;
                    arreglo[indice] = valor;
                } else {
                    cout << "Fuera de rango.\n";
                }
                break;
            case 5:
                cout << "Ingrese el valor a borrar (0 a " << elementos - 1 << "): ";
                cin >> indice;
                if (indice >= 0 && indice < elementos) {
                    for (int i = indice; i < elementos - 1; ++i) {
                        arreglo[i] = arreglo[i + 1];
                    }
                    --elementos;
                } else {
                    std::cout << "Fuera de rango.\n";
                }
                break;
            case 6:
                elementos = 0;
                cout << "Arreglo vaciado.\n";
                break;
            case 7:
                cout << "Saliendo del programa...\n";
            break;
            default:
                cout << "Opcion no valida.\n";
                break;
        }                       //Fin de switch
    }while (opcion !=7);                           //Fin de while
}