//
// Created by Checo on 13/05/2025.
//

#ifndef ACTIVIDAD4_H
#define ACTIVIDAD4_H

#endif //ACTIVIDAD4_H
#include "Librerias.h"

void actividad4();
void actividad4()
{
    int a;
    int b = 0;
    int c = 1;
    int i;
    int siguiente;
    int seleccion;
    printf("Ingrese la cantidad de numeros a imprimir: \n");
    scanf("%d",&a);
    printf("Elija la funcion a usar: \n");
    printf("1-for: \n");
    printf("2-while: \n");
    printf("3-do while: \n");
    printf("4-Exit / Salir: \n");
    scanf("%d",&seleccion);
    switch (seleccion)                      //Eleccion de casos
    {
        case 1:

            for (int i = 1; i <= a; i++)    // Inicio de for 1
            {
                printf("%d ",b);
                siguiente = b + c;
                b = c;
                c = siguiente;
            }                               //Fin de for 1
        break;                              //Fin de caso 1
        case 2:                             //Inicio caso 2
            i = 1;
        while (i <= a) // Inicio de while
        {
            printf("%d ",b);
            siguiente = b + c;
            b = c;
            c = siguiente;
            i++;
        }
        break;                              // Fin de caso 2
        case 3:                             // Inicio caso 3
            i = 1;
        do // Inicio de do while
        {
            printf("%d ",b);
            siguiente = b + c;
            b = c;
            c = siguiente;
            i++;
        } while (i <= a);
        break;                              // Fin de caso 3
        default:
            printf("Opcion no valida.");
        break;
    }
}