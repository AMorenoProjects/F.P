////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/* Escriba un programa en C++ que lea el valor inicial y final de un producto 
(variables de tipo double) y calcule la variación porcentual del mismo.
 ? Ejemplo de entrada: 5 6
 ? Salida correcta: variación porcentual: 20%
 ? Ejemplo de entrada: 6 5
 ? Salida correcta: variación porcentual: 16.6667% */


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

