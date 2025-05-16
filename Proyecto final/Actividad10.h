//
// Created by Checo on 13/05/2025.
//

#ifndef ACTIVIDAD10_H
#define ACTIVIDAD10_H

#endif //ACTIVIDAD10_H

#include "Librerias.h"

// Funcion para insertar un valor en un conjunto
void insertarValor(vector<int>& conjunto, int valor) {
    conjunto.push_back(valor);
}

// Funcion para borrar un valor de un conjunto
void borrarValor(vector<int>& conjunto, int valor) {
    conjunto.erase(remove(conjunto.begin(), conjunto.end(), valor), conjunto.end());
}

// Funcion para editar un valor en un conjunto
void editarValor(vector<int>& conjunto, int valorAntiguo, int valorNuevo) {
    replace(conjunto.begin(), conjunto.end(), valorAntiguo, valorNuevo);
}

// Funcion para vaciar un conjunto
void vaciarConjunto(vector<int>& conjunto) {
    conjunto.clear();
}

// Funcion para la union de dos conjuntos
vector<int> unionConjuntos(const vector<int>& conjunto1, const vector<int>& conjunto2) {
    vector<int> resultado(conjunto1);
    resultado.insert(resultado.end(), conjunto2.begin(), conjunto2.end());
    sort(resultado.begin(), resultado.end());
    auto it = unique(resultado.begin(), resultado.end());
    resultado.resize(distance(resultado.begin(), it));
    return resultado;
}

// Funcion para la interseccion de dos conjuntos
vector<int> interseccionConjuntos(const vector<int>& conjunto1, const vector<int>& conjunto2) {
    vector<int> resultado;
    set_intersection(conjunto1.begin(), conjunto1.end(), conjunto2.begin(), conjunto2.end(),
                     back_inserter(resultado));
    return resultado;
}

// Funcion para la diferencia de dos conjuntos
vector<int> diferenciaConjuntos(const vector<int>& conjunto1, const vector<int>& conjunto2) {
    vector<int> resultado;
    set_difference(conjunto1.begin(), conjunto1.end(), conjunto2.begin(), conjunto2.end(),
                   back_inserter(resultado));
    return resultado;
}

// Funcion para el complemento de un conjunto con respecto a un universo
vector<int> complementoConjunto(const vector<int>& conjunto, const vector<int>& universo) {
    return diferenciaConjuntos(universo, conjunto);
}

void actividad10();

void actividad10()
{
    srand(time(0)); // Inicializar el generador de numeros aleatorios

    // Inicializar dos conjuntos
    vector<int> conjunto1;
    vector<int> conjunto2;

    // Decidir si los valores son introducidos por el usuario o generados aleatoriamente
    char opcion;
    cout << "Deseas introducir los valores de los conjuntos manualmente (M) o generar aleatoriamente (A)? ";
    cin >> opcion;

    if (opcion == 'M' || opcion == 'm') {
        cout << "Introduce 10 valores para el conjunto1: ";
        for (int i = 0; i < 10; i++) {
            int valor;
            cin >> valor;
            insertarValor(conjunto1, valor);
        }
        cout << "Introduce 10 valores para el conjunto2: ";
        for (int i = 0; i < 10; i++) {
            int valor;
            cin >> valor;
            insertarValor(conjunto2, valor);
        }
    } else if (opcion == 'A' || opcion == 'a') {
        for (int i = 0; i < 10; i++) {
            insertarValor(conjunto1, rand() % 100 + 1); // Valores aleatorios entre 1 y 100
            insertarValor(conjunto2, rand() % 100 + 1); // Valores aleatorios entre 1 y 100
        }
    } else {
        cout << "Opcion invalida. Terminando el programa." << endl;
        return;
    }

    vector<int> universo = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    // Realizar las operaciones de conjuntos
    cout << "Union de los conjuntos: ";
    vector<int> unionResultado = unionConjuntos(conjunto1, conjunto2);
    for (int valor : unionResultado) {
        cout << valor << " ";
    }
    cout << endl;

    cout << "Interseccion de los conjuntos: ";
    vector<int> interseccionResultado = interseccionConjuntos(conjunto1, conjunto2);
    for (int valor : interseccionResultado) {
        cout << valor << " ";
    }
    cout << endl;

    cout << "Diferencia de los conjuntos: ";
    vector<int> diferenciaResultado = diferenciaConjuntos(conjunto1, conjunto2);
    for (int valor : diferenciaResultado) {
        cout << valor << " ";
    }
    cout << endl;

    cout << "Complemento del conjunto1 con respecto al universo: ";
    vector<int> complementoResultado = complementoConjunto(conjunto1, universo);
    for (int valor : complementoResultado) {
        cout << valor << " ";
    }
    cout << endl;
    return;
}