//
// Created by Checo on 13/05/2025.
//

#ifndef ACTIVIDAD7_H
#define ACTIVIDAD7_H

#endif //ACTIVIDAD7_H

#include "Librerias.h"

int cuantos, numero;
int suma = 0;
char op;
bool seguir = true;
// Función para verificar si un número es primo
bool primo(int numero) {
    if (numero <= 1) return false;
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0)
            return false;
    }
    return true;
}

void actividad7();
void actividad7()
{
        cout << "Bienvenido a los numeros primos" << endl;

        while (seguir)
        {
            cout << "Selecciona la opcion que deseas realizar \n 1- Iniciar programa\t 2- Cerrar programa\n Respuesta: ";
            cin >> op;
            switch (op) {
                case '1':                                       //inicio case 1
                    cout << "Bienvenido\n";
                cout << "En que limite quieres encontrar numeros primos?: ";
                cin >> cuantos;
                for (int i = 2; i <= cuantos; i++)
                {
                    if (primo(i))                               //ingresa la variable de primo que para ejecutar lo anterior
                    {
                        cout <<"NP:"<< i << "\n";               //Imprime los numeros primos
                        suma += i;
                    }
                }
                cout<<"La suma total es:" << suma << endl;
                break;                                          //Fin case 1
                case '2':                                       //Inicio Caso 2
                    cout << "Adios" << endl;
                seguir = false;
                break;
                //4
                default:
                    cout << "Opción inválida" << endl;
                break;
            }
        }                                                       //Fin de while
    }