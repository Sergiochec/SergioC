// Created by Checo on 25/02/2025.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; // Corrige permite usar cout con el 'using namespace std' sin tener que repetir el std

// Declaracion de variables
int a;

// Funciones
void llenar_aleatorio(int matriz[][10], int tam) {
    srand(time(0)); // Inicializar el generador de números aleatorios
    for(int i = 0; i < tam; i++) {
        for(int j = 0; j < tam; j++) {
            matriz[i][j] = rand() % 201 - 100; // Valores entre -100 y 100
        }
    }
}

void llenar_manual(int matriz[][10], int tam) {
    for(int i = 0; i < tam; i++) {
        for(int j = 0; j < tam; j++) {
            cout << "Ingresa el valor para la posicion (" << i << "," << j << "): ";
            cin >> matriz[i][j];
        }
    }
}

void imprime(int matriz[][10], int tam) {
    for(int i = 0; i < tam; i++) {
        for(int j = 0; j < tam; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void sumar(int matriz1[][10], int matriz2[][10], int resultado[][10], int tam) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void restar(int matriz1[][10], int matriz2[][10], int resultado[][10], int tam) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

void multiplicar(int matriz1[][10], int matriz2[][10], int resultado[][10], int tam) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < tam; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

void vaciar(int matriz[][10], int tam) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            matriz[i][j] = 0;
        }
    }
}

void editar_elemento(int matriz[][10], int fila, int columna, int valor) {
    matriz[fila][columna] = valor;
}

void borrar_elemento(int matriz[][10], int fila, int columna) {
    matriz[fila][columna] = 0;
}

// Interfaz de usuario
int main() {                                                    //Inicio de main
    int tam;
    cout << "Hola querido usuario, le pido que siga las indicaciones a la hora de utilizar mi codigo, Gracias " << endl;
    cout << "Ingrese el tamano de la matriz (entre 2 y 10): ";
    cin >> tam;

    if (tam < 2 || tam > 10) {
        cout << "El tamano de la matriz debe ser entre 2 y 10" << endl;
        return 1;
    }

    int matriz1[10][10], matriz2[10][10], resultado[10][10];
    char opcion;

    cout << "Matriz 1:" << endl;
    cout << "Desea llenar la matriz con valores aleatorios? (s/n): ";
    cin >> opcion;
    if (opcion == 's') {
        llenar_aleatorio(matriz1, tam);
    } else {
        llenar_manual(matriz1, tam);
    }

    cout << "Matriz 2:" << endl;
    cout << "Desea llenar la matriz con valores aleatorios? (s/n): ";
    cin >> opcion;
    if (opcion == 's') {
        llenar_aleatorio(matriz2, tam);
    } else {
        llenar_manual(matriz2, tam);
    }

    cout << "Matriz 1:" << endl;
    imprime(matriz1, tam);
    cout << "Matriz 2:" << endl;
    imprime(matriz2, tam);

    // Elegir operación
    int operacion;
    cout << "Que operacion desea realizar? (1= suma, 2= resta, 3= multiplicacion): ";
    cin >> operacion;

    switch (operacion) {
        case 1:
            sumar(matriz1, matriz2, resultado, tam);
            break;
        case 2:
            restar(matriz1, matriz2, resultado, tam);
            break;
        case 3:
            multiplicar(matriz1, matriz2, resultado, tam);
            break;
        default:
            cout << "Operación no valida" << endl;
            return 1;
    }

    cout << "Resultado:" << endl;
    imprime(resultado, tam);

    // Opciones adicionales
    while (true) {                                              //inicio de while
        cout << "Desea editar, borrar elementos o vaciar matrices (1= editar, 2= borrar, 3= vaciar, 4= salir)? ";
        cin >> opcion;

        switch(opcion) {                                        //inicio de switch
            case '1': {
                int fila, columna, valor;
                cout << "Ingrese la fila del elemento a editar: ";
                cin >> fila;
                cout << "Ingrese la columna del elemento a editar: ";
                cin >> columna;
                cout << "Ingrese el nuevo valor: ";
                cin >> valor;
                editar_elemento(resultado, fila, columna, valor);
                cout << "Matriz actualizada:" << endl;
                imprime(resultado, tam);
                break;
            }
            case '2': {
                int fila, columna;
                cout << "Ingrese la fila del elemento a borrar: ";
                cin >> fila;
                cout << "Ingrese la columna del elemento a borrar: ";
                cin >> columna;
                borrar_elemento(resultado, fila, columna);
                cout << "Matriz actualizada:" << endl;
                imprime(resultado, tam);
                break;
            }
            case '3':
                vaciar(resultado, tam);
                cout << "Matriz vaciada:" << endl;
                imprime(resultado, tam);
                break;
            case '4':
                return 0;
            default:
                cout << "Opción no valida" << endl;
        }                                                       //Fin de switch
    }                                                           //Fin de while

    return 0;
}                                                               //Fin de main
