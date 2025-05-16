//
// Created by Checo on 13/05/2025.
//

#ifndef ACTIVIDAD11_H
#define ACTIVIDAD11_H

#endif //ACTIVIDAD11_H

#include "Librerias.h"

// Función para calcular la secuencia de Collatz
    vector<int> calcularSecuencia(int n) {
        vector<int> secuencia;
        while (n != 1) {
            secuencia.push_back(n);
            if (n % 2 == 0) {
                n /= 2;
            } else {
                n = 3 * n + 1;
            }
        }
        secuencia.push_back(1); // Añadimos el 1 al final de la secuencia
        return secuencia;
    }

void actividad11();

void actividad11()
{
    int num1, num2;

    // Solicitar dos valores al usuario
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Calcular las secuencias
    vector<int> secuencia1 = calcularSecuencia(num1);
    vector<int> secuencia2 = calcularSecuencia(num2);

    // Mostrar las secuencias
    cout << "Secuencia para " << num1 << ": ";
    for (int num : secuencia1) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Secuencia para " << num2 << ": ";
    for (int num : secuencia2) {
        cout << num << " ";
    }
    //2
    cout << endl;
    // Comparar las longitudes de las secuencias
    if (secuencia1.size() > secuencia2.size()) {
        cout << "El numero " << num1 << " genera mas resultados que " << num2 << "." << endl;
    } else if (secuencia1.size() < secuencia2.size()) {
        cout << "El numero " << num2 << " genera mas resultados que " << num1 << "." << endl;
    } else {
        cout << "Ambos numeros generan la misma cantidad de resultados." << endl;
    }
}
