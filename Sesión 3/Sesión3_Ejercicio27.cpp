////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
 Queremos construir un programa para asignarle a la variable entero el
 n�mero 7 asociado al d�gito representado en la variable caracter, es decir, el 7 y
 no el 55. �C�mo se le ocurre hacerlo? El programa tambi�n imprimir� en pantalla el
 resultado
*/

#include <iostream>
using namespace std;

int main(){
   /* Computo de datos*/
   char caracter;
   int entero;
   
   caracter = '7';
   
   /* Dentro del c�digo ASCII del 48 representa el cero y el 55 representa el siete */
   /* Salida de datos*/
   entero = caracter - 48;
   cout << entero;
   
   return 0;
}
