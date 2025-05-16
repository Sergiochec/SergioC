//
// Created by Checo on 13/05/2025.
//

#ifndef ACTIVIDAD6_H
#define ACTIVIDAD6_H

#endif //ACTIVIDAD6_H

#include "Librerias.h"

void actividad6();
void actividad6()
{
    int a;
    int multi;
    int suma;
    printf("Ingrese un numero: \n");
    scanf("%d", &a);

    for(int i = 0; i <= a; i++)
    {                                    //Inicio de for
        multi = i * i;
        suma += multi;                   //suma la multi
        printf("%d \n", multi);

    }                                    //Fin de for
    printf("%d \n", suma);
}
