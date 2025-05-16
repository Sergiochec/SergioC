//
// Created by Checo on 13/05/2025.
//

#ifndef ACTIVIDAD12_H
#define ACTIVIDAD12_H

#endif //ACTIVIDAD12_H

#include "Librerias.h"

void actividad12();
void actividad12()
{
    string cadena;
    int vocales = 0;
    int consonantes = 0;
    int numeros = 0;
    int nrc = 0; // Caracteres no reconocidos

    cout << "Ingrese la palabra: ";
    cin >> cadena;

    // Recorremos la cadena
    for (int i = 0; i < cadena.length(); i++){
        char caracter = tolower(cadena[i]); // Convertir a minuscula para comparacion uniforme

        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            vocales++;
        } else if (isalpha(caracter)) { // Verifica si es una letra
            consonantes++;
        } else if (isdigit(caracter)) { // Verifica si es un numero
            numeros++;
        } else {
            nrc++;
        }
    }

    cout << "Hay " << vocales << " vocales, " << consonantes << " consonantes, " << numeros << " numeros y " << nrc << " caracteres no reconocidos." << endl;
}
