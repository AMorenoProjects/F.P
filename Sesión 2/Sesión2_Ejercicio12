////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Una compañía aérea establece el precio del billete como sigue: 
En primer lugar se fija una tarifa base de 150 euros, la misma para todos 
los destinos. A continuación se suman 10 céntimos por cada kilómetro de 
distancia al destino.
Cree un programa que lea el número de kilómetros al destino y calcule 
el precio final del billete
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
   
   const double CENTIMOS= 0.1;
   int tarifaBase= 150;
   double tarifaFinal,kilometros;
   
   cout << "Bienvenido, Su destino a cuantos kilometros esta?: ";
   cin >> kilometros;
   
   tarifaFinal = tarifaBase + (kilometros * CENTIMOS);
   
   cout << "El precio final que debera pagar es de: "<< tarifaFinal<< " Euros";   
   return 0;
}
