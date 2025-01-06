////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Un intervalo es un espacio m�trico comprendido entre dos
valores o cotas, a y b, siendo a la cota inferior y b la cota superior. Cada extremo de
un intervalo puede ser abierto o cerrado.
En este problema, no se consideran intervalos con extremos infinitos como por ejemplo (-oo, oo).

Construya un programa que lea los datos de un intervalo. Para ello, el programa debe
leer los datos en el siguiente orden:

a) Un car�cter que represente el tipo de intervalo por la izquierda: el usuario deber�
introducir el car�cter '(' si es abierto y '[' si es cerrado.

b) Un n�mero real con la cota izquierda.


c) Un n�mero real con la cota derecha.

d) Un car�cter que represente el tipo de intervalo por la derecha: el usuario deber�
introducir el car�cter ')' si es abierto y ']' si es cerrado.

El programa mostrar� en pantalla el mismo intervalo introducido.
*/

#include <iostream>
using namespace std;

int main(){
   
   double a,b,aux;
   char inicio,final;
   
   cout << "Como est� el intervalo al principio '(' abierto o '[' cerrado: ";
   cin >> inicio;
   
   cout << "Introduzca el primer numero: ";
   cin >> a;
   
   cout << "Introduzca el segundo numero: ";
   cin >> b;
   
   cout << "Como est� el intervalo al final ')' abierto o ']' cerrado: ";
   cin >> final;
   
   
   if( a > b){
      aux = b;
      b = a;
      a = aux;
   }
   
   cout << "El intervalo es: " << inicio << " " << a << " , " << b << " " << final;
   return 0;
}
