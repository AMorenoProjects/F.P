////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Construya un programa y declare una variable PI. Escriba una sentencia 
con la ecuación anterior. ¿Por qué se produce un error de compilación?
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
   double pi;
   
   /* El programa Dev-C++, al introducirle la ecuación PI => PI/6=asin(0.5), 
   dará error pues el programa no es capa de despejar la incógnita dentro del 
   la expresión */
   
   pi = asin(0.5) * 6; 
   
   cout << "\n El valor de Pi es: " << pi;
   
   return 0;
}
