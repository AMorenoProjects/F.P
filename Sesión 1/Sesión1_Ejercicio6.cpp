////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/* Construya un programa para leer el valor de una variable
 salario_base de tipo double, la incremente un 2% e imprima el resultado en pan
talla. Para realizar este c�mputo, multiplique por 1.02 el valor original.

 a) Directamente hacer el c�mputo 1.02 * salario_base dentro de la sentencia
 cout
 b) Introducir una variable salario_final, asignarle la expresi�n anterior y 
 mostrar su contenido en la sentencia cout
 c) Modificar la variable original salario_base con el resultado de 
 incrementarla un 2%
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
   const double PORCENTAJE = 1.02;
   double salario_base;
   double subidaSueldo;
   
   cout << "\nSu salario es de: ";
   cin >> salario_base;
   
   subidaSueldo = (salario_base * PORCENTAJE);
   
   cout << "Su salario final es de: " << subidaSueldo;
   
}
