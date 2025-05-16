//
// Created by Checo on 13/05/2025.
//

#ifndef ACTIVIDAD2_H
#define ACTIVIDAD2_H

#endif //ACTIVIDAD2_H

#include "Librerias.h"
void actividad2();

void actividad2()
{
  int edad = 19;
  int favorito = 7;
  float promedio = 8.70;
  char frase[] = "Hola Mundo";
  char Genero = 'M';
  double Pi = 3.14159;

//Cadena de control de tipo salida
   cout<<"Actividad 2"<<endl;
   printf("MI edad es de: %d years\n", edad);
   printf("MI numero favorito es el: %i \n", favorito);
   printf("MI promedio es de: %g \n", promedio);
   printf("%s \n", frase);
   printf("Mi genero es: %c \n", Genero);
   printf("El numero Pi es: %lf \n", Pi);

   //Secuencia de escape
   printf("Mi apodo es:\n Checo \n");  //Salta a otra linea
   printf("\"Muy buenos dias\" \n");   //Doble comillas
   printf("Hola \t que \t tal \n");    //Tabula
   printf("Como estas\?");             //Agrega signo de interrogacion
   printf("Hola Bien\r\n");            //Retrocede a la linea anterior
   printf("Hola Mundo\b \n");          //Retrocede una letra
}