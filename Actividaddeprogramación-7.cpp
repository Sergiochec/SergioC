// Created by Checo on 18/02/2025.
#include <iostream>
using namespace std;
int cuantos,numero, i, suma;
char op;
bool seguir = true;
bool primo(int numero) {
    if (numero <= 1) return false;
    for (i = 2; i * i <= numero; i++) {
        if (numero % i == 0) return false;                  //El bool cuando pones un numero menor a 1 o es igual a uno
        //for multiplica por si mismo para imprimir los valores que se dividan y su residuo sea cero
    }
    return true;
}
int main() {
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
    return 0;
}                                                           //Fin de main
