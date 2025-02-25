// Created by Checo on 18/02/2025.
#include <iostream>

const int Espaciosmax = 10;
int arreglo[Espaciosmax] = {0};
int elementos = 0;

void mostrarLista() {
    std::cout << "Valores en el arreglo: ";
    for (int i = 0; i < elementos; ++i) {
        std::cout << arreglo[i] << " ";
    }
    std::cout << std::endl;
}

void mostrarSumatoria() {
    int sumatoria = 0;
    for (int i = 0; i < elementos; ++i) {
        sumatoria += arreglo[i];
    }
    std::cout << "Sumatoria de todos los elementos: " << sumatoria << std::endl;
}

int main() {
    int opcion, valor, indice;

    while (true) {
        std::cout << "Menu:\n";
        std::cout << "1. Agregar valor\n";
        std::cout << "2. Mostrar lista de valores\n";
        std::cout << "3. Mostrar sumatoria de todos los elementos\n";
        std::cout << "4. Editar un valor\n";
        std::cout << "5. Borrar un valor\n";
        std::cout << "6. Vaciar arreglo\n";
        std::cout << "7. Salir\n";
        std::cout << "Elija una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
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
                std::cout << "Ingrese el valor a editar (0 a " << elementos - 1 << "): ";
                std::cin >> indice;
                if (indice >= 0 && indice < elementos) {
                    std::cout << "Ingrese el nuevo valor: ";
                    std::cin >> valor;
                    arreglo[indice] = valor;
                } else {
                    std::cout << "Fuera de rango.\n";
                }
                break;
            case 5:
                std::cout << "Ingrese el valor a borrar (0 a " << elementos - 1 << "): ";
                std::cin >> indice;
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
                std::cout << "Arreglo vaciado.\n";
                break;
            case 7:
                return 0;
            default:
                std::cout << "Opcion no valida.\n";
                break;
        }
    }
}
