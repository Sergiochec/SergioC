// Created by Checo on 06/02/2025.
#include <stdio.h>
//inicio de main
int main()
{
    int numero = 0;
    int contador5 = 0;
    int contador10 = 0;
    int a = 0;
    int seguir = 0;
    do
    {
        printf("Ingrese un numero, no mayor a 1000: \n");
        scanf("%d", &numero);
        if(numero >= 0 && numero < 500)
        {
            for(a = 0; a <= 100; a++)
            {
                numero = numero + 5;
                printf("El numero es: %d \n", numero);
            }
            contador5 = contador5 + 100;
        } if(numero >= 500 && numero < 1000)
        {
            for(a = 0; a <= 50; a++)
            {
                numero = numero + 10;
                printf("El numero es: %d \n", numero);
            }
            contador10 = contador10 + 50;
        } if(numero >= 1000)
        {
            printf("El numero no es posible\n");
        }
        printf("Aumento 5 un total de: %d veses \n", contador5);
        printf("Aumento 10 un total de: %d veces \n", contador10);
        printf("Desea terminar el programa?\n Si su respuesta es (SI) presione = 1\n Si su respuesta es (NO) presione = 2\n");
        scanf("%d", &seguir);
    } while(seguir == 1);
}