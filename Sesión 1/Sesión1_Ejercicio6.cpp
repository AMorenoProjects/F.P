////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/* Construya un programa para leer el valor de una variable
 salario_base de tipo double, la incremente un 2% e imprima el resultado en pan
talla. Para realizar este cómputo, multiplique por 1.02 el valor original.

 a) Directamente hacer el cómputo 1.02 * salario_base dentro de la sentencia
 cout
 b) Introducir una variable salario_final, asignarle la expresión anterior y 
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
