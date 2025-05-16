//
// Created by Checo on 13/05/2025.
//

#ifndef INICIO_H
#define INICIO_H

#endif //INICIO_H
#include "Librerias.h"

void inicio();
void presentacion();
void adios();

void inicio()
{
    //Instrucciones
    FECHA: 9/05/2025;
    int continuar2;
    cout << endl;
    cout << "                            ********************************************************************************" << endl;
    cout << "                            *************                 [Instrucciones de uso]                ************" << endl;
    cout << "                           **               ~Siga las indicaciones al pie de la letra.                     **"<< endl;
    cout << "                           **               ~Cada actividad dara indicaciones a seguir.                    **" << endl;
    cout << "                           **               ~Seleccione una actividad que quiera ejecutar.                 **" << endl;
    cout << "                           **               ~Ingrese el numero de la actividad seleccionada.               **" << endl;
    cout << "                           **               ~Si ingresa un caracter no valido pedira reintentar.           **" << endl;
    cout << "                           **               ~Seleccione '0' en caso de querer Terminar el programa.        **" << endl;
    cout << "                           **               ~Al finalizar se podra elegir (Reiniciar) o (Finalizar).       **" << endl;
    cout << "                           **               ~Seleccione (s) o (n) en su respectiva eleccion.               **" << endl;
    cout << "                            *************                 [Fin de Instrucciones]                ************" << endl;
    cout << "                            ********************************************************************************" << endl;
    cout << "                                               Ingrese cualquier tecla para continuar: " <<endl;
    cin >> continuar2;
    cout << "Elija una actividad." << endl;
    cout << "Actividad 1 [1]." << endl;
    cout << "Actividad 2 [2]." << endl;
    cout << "Actividad 3 [3]." << endl;
    cout << "Actividad 4 [4]." << endl;
    cout << "Actividad 5 [5]." << endl;
    cout << "Actividad 6 [6]." << endl;
    cout << "Actividad 7 [7]." << endl;
    cout << "Actividad 8 [8]." << endl;
    cout << "Actividad 9 [9]." << endl;
    cout << "Actividad 10 [10]." << endl;
    cout << "Actividad 11 [11]." << endl;
    cout << "Actividad 12 [12]." << endl;
    cout << "Finalizar y Cerrar programa [0]" << endl;

}

void presentacion() {
    FECHA: 9/05/2025;
    int continuar1;
    cout << "                        /$$$$$$$  /$$                                                   /$$       /$$" << endl;
    cout << "                       | $$__  $$|__/                                                  |__/      | $$" << endl;
    cout << "                       | $$  \\ $$ /$$  /$$$$$$  /$$$$$$$  /$$    /$$ /$$$$$$  /$$$$$$$  /$$  /$$$$$$$  /$$$$$$ " << endl;
    cout << "                       | $$$$$$$ | $$ /$$__  $$| $$__  $$|  $$  /$$//$$__  $$| $$__  $$| $$ /$$__  $$ /$$__  $$" << endl;
    cout << "                       | $$__  $$| $$| $$$$$$$$| $$  \\ $$ \\  $$/$$/| $$$$$$$$| $$  \\ $$| $$| $$  | $$| $$  \\ $$" << endl;
    cout << "                       | $$  \\ $$| $$| $$_____/| $$  | $$  \\  $$$/ | $$_____/| $$  | $$| $$| $$  | $$| $$  | $$" << endl;
    cout << "                       | $$$$$$$/| $$|  $$$$$$$| $$  | $$   \\  $/  |  $$$$$$$| $$  | $$| $$|  $$$$$$$|  $$$$$$/" << endl;
    cout << "                       |_______/ |__/ \\_______/|__/  |__/    \\_/    \\_______/|__/  |__/|__/ \\_______/ \\______/ "<<endl;
    cout << "                                               Ingrese cualquier tecla para continuar: " <<endl;
    cin >> continuar1;
}

void adios()
{
    cout << "                                           $$$$$$\\        $$\\ $$\\ \n"
         << "                                          $$  __$$\\       $$ |\\__| \n"
         << "                                          $$ /  $$ | $$$$$$$ |$$\\  $$$$$$\\   $$$$$$$\\ \n"
         << "                                          $$$$$$$$ |$$  __$$ |$$ |$$  __$$\\ $$  _____|\n"
         << "                                          $$  __$$ |$$ /  $$ |$$ |$$ /  $$ |\\$$$$$$\\ \n"
         << "                                          $$ |  $$ |$$ |  $$ |$$ |$$ |  $$ | \\____$$\\ \n"
         << "                                          $$ |  $$ |\\$$$$$$$ |$$ |\\$$$$$$  |$$$$$$$  | \n"
         << "                                          \\__|  \\__| \\_______|\\__| \\______/ \\_______/ \n" << endl;
}
