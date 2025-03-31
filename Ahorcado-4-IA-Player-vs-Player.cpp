//
// Created by Checo on 29/03/2025.
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <ctime>   // Para la selección aleatoria en el modo IA

using namespace std;

// Funcion para mostrar el estado del ahorcado
void mostrarAhorcado(int intentos) {
    string partes[7] = {
        "  +---+\n  |    \n  |      \n  |    \n ===",
        "  +---+\n  |   O\n  |      \n  |    \n ===",
        "  +---+\n  |   O\n  |   |   \n  |    \n ===",
        "  +---+\n  |   O\n  |  /|   \n  |    \n ===",
        "  +---+\n  |   O\n  |  /|\\  \n  |    \n ===",
        "  +---+\n  |   O\n  |  /|\\  \n  |  /    \n ===",
        "  +---+\n  |   O\n  |  /|\\  \n  |  / \\ \n ==="
    };
    cout << right << partes[6 - intentos] << endl;
}

// Funcion principal del juego
void jugarAhorcado(string palabra) {
    int intentos = 6;
    vector<char> letrasAdivinadas;

    cout << "Adivina la palabra letra por letra" << endl;

    while (intentos > 0) {
        // Mostrar el progreso de la palabra
        cout << "\nPalabra: ";
        bool completada = true;
        for (char letra : palabra) {
            if (find(letrasAdivinadas.begin(), letrasAdivinadas.end(), letra) != letrasAdivinadas.end()) {
                cout << letra << " ";
            } else {
                cout << "_ ";
                completada = false;
            }
        }
        cout << endl;

        if (completada) {
            cout << "Felicidades, Has adivinado la palabra: " << palabra << endl;
            break;
        }
        // Mostrar intentos restantes
        mostrarAhorcado(intentos);
        cout << "Intentos restantes: " << intentos << endl;
        // Entrada del usuario
        char letra;
        cout << "Introduce una letra: ";
        cin >> letra;
        letra = tolower(letra);     //Combierte mayusculas a minusculas

        if (!isalpha(letra)) {      //Verifica que sea una letra del alfabeto de "A,a" a "A,z"
            cout << "Por favor, introduce una letra valida." << endl;
            continue;
        }

        if (find(letrasAdivinadas.begin(), letrasAdivinadas.end(), letra) != letrasAdivinadas.end()) {
            cout << "Ya has adivinado esa letra." << endl;
            continue;
        }

        letrasAdivinadas.push_back(letra);

        // Verificar si la letra esta en la palabra
        if (palabra.find(letra) == string::npos) {
            intentos--;
            cout << "La letra no esta en la palabra. Pierdes un intento." << endl;
        } else {
            cout << "Bien hecho, La letra esta en la palabra." << endl;
        }
    }

    if (intentos == 0) {
        mostrarAhorcado(0);
        cout << "Lo siento, te has quedado sin intentos. La palabra era: " << palabra << endl;
    }
}

int main() {
    cout << "Hola my nombre es (CHECO) y Bienvenido a mi juego del ahorcado, espero y sea de tu agrado." << endl;
    cout << "***Si presentas algun problema no dudes en informarme ya que al investigar como arreglarlo puedo mejorar***" <<endl;
    cout << "\nPor favor, Selecciona el modo de juego:" << endl;
    cout << "1. Jugar contra la IA" << endl;
    cout << "2. Jugar contra otro jugador" << endl;
    cout << "Elige una opcion (1 o 2): ";
    int opcion;
    cin >> opcion;

    switch (opcion) {
        case 1: { //Contra IA
        vector<string> palabras = {
            "python", "computadora", "programacion", "tecnologia", "inteligencia",
            "artificial", "algoritmo", "software", "hardware", "internet",
            "datos", "informacion", "seguridad", "checo",
            "desarrollo", "ingenieria", "sistemas", "automatizacion", "robotica"
        };
        srand(static_cast<unsigned>(time(0)));
        string palabra = palabras[rand() % palabras.size()];
        jugarAhorcado(palabra);
        break;
    }
        case 2: {
            cin.ignore(); // Limpiar el buffer
            string palabra;
            cout << "Jugador 1, introduce una palabra para que el Jugador 2 la adivine:" << endl;
            getline(cin, palabra);
            transform(palabra.begin(), palabra.end(), palabra.begin(), ::tolower);
            jugarAhorcado(palabra);
            break;
        }
    default:
        cout << "Opcion no valida. Intenta de nuevo." << endl;
    break;
    }
    return 0;
}