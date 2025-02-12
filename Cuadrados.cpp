// Created by Checo on 11/02/2025.
//PRESENTACION**
//NOMBRE:Sergio Alexander Coronado Huerta
//FECHA: 11/02/2025
//PROGRAMA: Actividad de programacion 6
//CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
//PROFESOR: Sergio Franco Casillas
//DESCRIPCION: Suma de cuadrados
//************************/
#include <iostream>
int main()                             //Inicio de main
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
return 0;
}                                      //Fin de main