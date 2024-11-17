////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Suponemos que hay dos participantes y cada uno tiene una caja 
etiquetada con su nombre. Dentro de cada caja hay una cantidad de dinero 
y el objetivo es intercambiar las cantidades que hay dentro. Por ahora, 
sólo se pide construir un programa que haga lo siguiente:
• Debe leer desde teclado dos variables caja_izda y caja_dcha.
• Acontinuación debe intercambiar sus valores y finalmente, mostrarlos en 
pantalla
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
   
   double caja_izda,caja_dcha,caja_auxiliar;
   
   cout << "Dinero en la caja de la derecha: ";
   cin >> caja_dcha;
   cout << "Dinero en la caja de la izquierda: ";
   cin >> caja_izda;
   
   caja_auxiliar = caja_dcha;
   caja_dcha = caja_izda;
   caja_izda = caja_auxiliar;
   
   cout << "Hemos intercambiado el valor de sus cajas quedando de la siquiente manera: ";
   cout << "\nCaja derecha: " << caja_dcha;
   cout << "\nCaja izquierda: " << caja_izda;
   
   return 0;
   
}
