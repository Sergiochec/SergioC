//
// Created by Checo on 10/04/2025.
//
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <limits>

using namespace std;

// Torres de Hanoi
vector<int> torre1, torre2, torre3;

// Prototipos
void inicializarTorres(int cant);
void mostrarTorres(int cant);
void cambioDeDisco(int cant, int mov1, int mov2, vector<int> &torre1, vector<int> &torre2, vector<int> &torre3);
bool movimientoOptimo(int movimientos, int discos);
bool reiniciarJuego() {
    char opcion;
    cout << "Deseas reiniciar el juego? (S para si / N para no): ";
    while (!(cin >> opcion) || (opcion != 'S' && opcion != 's' && opcion != 'N' && opcion != 'n')) {
        cout << "Opción invalida. Por favor, elige S o N: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    if (opcion == 'S' || opcion == 's') {
        return true; // Indica que el juego debe reiniciarse
    } else {
        cout << "Gracias por jugar. **Hasta luego**" << endl;
        return false; // Termina el proceso
    }
}

int main() {
    do {
        int cant, movimientos = 0;
        cout << "Ingresa el numero de discos (1 a 10): ";
        while (!(cin >> cant) || cant < 1 || cant > 10) {
            cout << "Entrada invalida. Por favor, ingresa un numero entre 1 y 10: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        inicializarTorres(cant);

        // Juego interactivo
        while (torre2.size() != cant && torre3.size() != cant) {
            mostrarTorres(cant);
            int mov1, mov2;
            cout << "Elige la torre de origen (1, 2 o 3): ";
            while (!(cin >> mov1) || mov1 < 1 || mov1 > 3) {
                cout << "Entrada invalida.\nPor favor, elige entre 1, 2 o 3: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            cout << "Elige la torre de destino (1, 2 o 3): ";
            while (!(cin >> mov2) || mov2 < 1 || mov2 > 3) {
                cout << "Entrada invalida.\nPor favor, elige entre 1, 2 o 3: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            cambioDeDisco(cant, mov1, mov2, torre1, torre2, torre3);
            ++movimientos;
        }

        // Resultados
        mostrarTorres(cant);
        cout << " /$$$$$$$$       /$$ /$$           /$$       /$$                 /$$"<< endl;
        cout << "| $$_____/      | $$|__/          |__/      | $$                | $$"<< endl;
        cout << "| $$    /$$$$$$ | $$ /$$  /$$$$$$$ /$$  /$$$$$$$  /$$$$$$   /$$$$$$$  /$$$$$$   /$$$$$$$"<< endl;
        cout << "| $$$$$/$$__  $$| $$| $$ /$$_____/| $$ /$$__  $$ |____  $$ /$$__  $$ /$$__  $$ /$$_____/"<< endl;
        cout << "| $$__/ $$$$$$$$| $$| $$| $$      | $$| $$  | $$  /$$$$$$$| $$  | $$| $$$$$$$$|  $$$$$$ "<< endl;
        cout << "| $$  | $$_____/| $$| $$| $$      | $$| $$  | $$ /$$__  $$| $$  | $$| $$_____/ \\____  $$"<< endl;
        cout << "| $$  |  $$$$$$$| $$| $$|  $$$$$$$| $$|  $$$$$$$|  $$$$$$$|  $$$$$$$|  $$$$$$$ /$$$$$$$/"<< endl;
        cout << "|__/   \\_______/|__/|__/ \\_______/|__/ \\_______/ \\_______/ \\_______/ \\_______/|_______/"<< endl;
        cout << "**Completaste la Torre de Hanoi**"<< endl;
        cout << "Movimientos realizados: " << movimientos << endl;

        if (movimientoOptimo(movimientos, cant)) {
            cout << "**Lograste los movimientos optimos**" << endl;
        } else {
            cout << "No fueron movimientos optimos. El minimo es " << (pow(2, cant) - 1) << "." << endl;
        }
    } while (reiniciarJuego());

    return 0;
}

// Inicializa las torres
void inicializarTorres(int cant) {
    torre1.clear();
    torre2.clear();
    torre3.clear();
    for (int i = cant; i >= 1; --i) {
        torre1.push_back(i);
    }
}

// Muestra las torres graficamente
void mostrarTorres(int cant) {
    vector<vector<int>> torres = {torre1, torre2, torre3};
    string base = string(cant * 2 + 3, '-');

    cout << endl;
    for (int nivel = cant - 1; nivel >= 0; --nivel) {
        for (const auto &torre : torres) {
            if (nivel < torre.size()) {
                int disco = torre[nivel];
                int espacio = cant - disco;
                cout << string(espacio, ' ')   // Espacios a la izquierda
                     << string(disco * 2 - 1, '=')  // Ancho del disco
                     << string(espacio, ' ')   // Espacios a la derecha
                     << "\t"; // Separación entre torres
            } else {
                cout << string(cant, ' ') << "|" << string(cant, ' ') << " ";
            }
        }
        cout << endl;
    }
    cout << base << "\t" << base << "\t" << base << endl;
    cout << "  1\t\t 2\t\t 3\n" << endl;
}

// Mueve un disco entre torres
void cambioDeDisco(int cant, int mov1, int mov2, vector<int> &torre1, vector<int> &torre2, vector<int> &torre3) {
    vector<int> *origen = nullptr, *destino = nullptr;
    switch (mov1) {
        case 1: origen = &torre1; break;
        case 2: origen = &torre2; break;
        case 3: origen = &torre3; break;
        default: cout << "Movimiento invalido." << endl; return;
    }
    switch (mov2) {
        case 1: destino = &torre1; break;
        case 2: destino = &torre2; break;
        case 3: destino = &torre3; break;
        default: cout << "Movimiento invalido." << endl; return;
    }

    if (!origen->empty() && (destino->empty() || origen->back() < destino->back())) {
        destino->push_back(origen->back());
        origen->pop_back();
    } else {
        cout << "Movimiento invalido: no puedes colocar un disco grande sobre uno chico." << endl;
    }
}

// Comprueba si los movimientos fueron óptimos
bool movimientoOptimo(int movimientos, int discos) {
    return movimientos == (pow(2, discos) - 1);
}