////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
 Queremos construir un programa para asignarle a la variable entero el
 número 7 asociado al dígito representado en la variable caracter, es decir, el 7 y
 no el 55. ¿Cómo se le ocurre hacerlo? El programa también imprimirá en pantalla el
 resultado
*/

#include <iostream>
using namespace std;

int main(){
   /* Computo de datos*/
   char caracter;
   int entero;
   
   caracter = '7';
   
   /* Dentro del código ASCII del 48 representa el cero y el 55 representa el siete */
   /* Salida de datos*/
   entero = caracter - 48;
   cout << entero;
   
   return 0;
}
