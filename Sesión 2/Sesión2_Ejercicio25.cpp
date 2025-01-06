////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Un intervalo es un espacio métrico comprendido entre dos
valores o cotas, a y b, siendo a la cota inferior y b la cota superior. Cada extremo de
un intervalo puede ser abierto o cerrado.
En este problema, no se consideran intervalos con extremos infinitos como por ejemplo (-oo, oo).

Construya un programa que lea los datos de un intervalo. Para ello, el programa debe
leer los datos en el siguiente orden:

a) Un carácter que represente el tipo de intervalo por la izquierda: el usuario deberá
introducir el carácter '(' si es abierto y '[' si es cerrado.

b) Un número real con la cota izquierda.


c) Un número real con la cota derecha.

d) Un carácter que represente el tipo de intervalo por la derecha: el usuario deberá
introducir el carácter ')' si es abierto y ']' si es cerrado.

El programa mostrará en pantalla el mismo intervalo introducido.
*/

#include <iostream>
using namespace std;

int main(){
   
   double a,b,aux;
   char inicio,final;
   
   cout << "Como está el intervalo al principio '(' abierto o '[' cerrado: ";
   cin >> inicio;
   
   cout << "Introduzca el primer numero: ";
   cin >> a;
   
   cout << "Introduzca el segundo numero: ";
   cin >> b;
   
   cout << "Como está el intervalo al final ')' abierto o ']' cerrado: ";
   cin >> final;
   
   
   if( a > b){
      aux = b;
      b = a;
      a = aux;
   }
   
   cout << "El intervalo es: " << inicio << " " << a << " , " << b << " " << final;
   return 0;
}
