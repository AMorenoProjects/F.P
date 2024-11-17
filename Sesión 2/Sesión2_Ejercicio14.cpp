////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Calcule el número de segundos que hay entre dos instantes del mismo día.
Cada instante se caracteriza por la hora (entre 0 y 23), minuto (entre 0 y 59) y 
segundo (entre 0 y 59).
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
   
   const double CAMBIOH=3600, CAMBIOM=60;
   int horaI,minutoI,segundoI,horaF,minutoF,segundoF,resultado;
   
   cout << "Deme una hora inicial(entre 0 y 23): ";
   cin >> horaI;
   cout << "Deme un minuto inicial(entre 0 y 59): ";
   cin >> minutoI;
   cout << "Deme un segundo inicial(entre 0 y 59): ";
   cin >> segundoI;
   
   cout << "Deme una hora final(entre 0 y 23): ";
   cin >> horaF;
   cout << "Deme un minuto final(entre 0 y 59): ";
   cin >> minutoF;
   cout << "Deme un segundo final(entre 0 y 59): ";
   cin >> segundoF;
   
   horaI = horaI * CAMBIOH;
   minutoI = minutoI * CAMBIOM;
   
   horaF = horaF * CAMBIOH;
   minutoF = minutoF * CAMBIOM;
   
   resultado = ((horaF+minutoF+segundoF)-(horaI+minutoI+segundoI));
   
   cout << "La diferencia entre las 2 horas diferentes que ha elegido es de: " << resultado << " segundos";
   
   return 0;
}
