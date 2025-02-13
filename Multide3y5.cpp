// Created by Checo on 12/02/2025.
//Solicita un número entre 0 y 1000 al usuario
#include <stdio.h>

int main() {
    //inicio de main
    int a;
    int i;
    int total;
    int multiplo3;
    int multiplo5;
    printf("Por favor ingrese un numero entre 0 y 1000: ");
    scanf("%d", &a);

                                    // Verificar que el número esté en el rango solicitado
    if (a >= 1 && a <= 1000){       //Inicializar contadores
        multiplo3 = 0;
        multiplo5 = 0;
        for ( i = 1; i <= a; i++)   //inicio de For
        {
            if ( i % 3 == 0) {
                multiplo3 += 1;
            } else if ( i % 5 == 0) {
                multiplo5 += 1;
            }
            total = multiplo3 + multiplo5;
        }                           //Fin for
        printf("Cantidad de multiplos de 3: %d \n", multiplo3);
        printf("Cantidad de multiplos de 5: %d\n", multiplo5);
        printf("Total de multiplos encontrados: %d \n", multiplo3 + multiplo5);
    }                               //fin if 1
}                                   //Fin de main
