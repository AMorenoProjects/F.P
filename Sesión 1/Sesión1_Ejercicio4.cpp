////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Construya un programa y declare una variable PI. Escriba una sentencia 
con la ecuaci�n anterior. �Por qu� se produce un error de compilaci�n?
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
   double pi;
   
   /* El programa Dev-C++, al introducirle la ecuaci�n PI => PI/6=asin(0.5), 
   dar� error pues el programa no es capa de despejar la inc�gnita dentro del 
   la expresi�n */
   
   pi = asin(0.5) * 6; 
   
   cout << "\n El valor de Pi es: " << pi;
   
   return 0;
}
