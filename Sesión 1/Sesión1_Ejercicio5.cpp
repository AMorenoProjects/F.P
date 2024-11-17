////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/* Escriba un programa en C++ que lea el valor inicial y final de un producto 
(variables de tipo double) y calcule la variaci�n porcentual del mismo.
 ? Ejemplo de entrada: 5 6
 ? Salida correcta: variaci�n porcentual: 20%
 ? Ejemplo de entrada: 6 5
 ? Salida correcta: variaci�n porcentual: 16.6667% */


#include <iostream>
#include <cmath>      
using namespace std;

int main(){
   
   double valorInicial;
   double valorFinal;
   double variacionPorcentual;
   
   cout << "\n El precio inicial es: ";
   cin >> valorInicial;
   
   cout << "\n El precio final es: ";
   cin >> valorFinal;
   
   variacionPorcentual=abs(100 * ((valorInicial - valorFinal) / valorInicial));
   
   cout << "\n La variacion porcentual es del: " << variacionPorcentual << "%";
   
}

