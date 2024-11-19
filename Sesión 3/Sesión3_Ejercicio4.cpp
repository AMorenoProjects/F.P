////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
 La forma de calcular la tarifa final del billete cambia ahora de la forma siguiente: la
 tarifa base sigue siendo de 150 euros, la misma para todos los destinos. Ahora bien,
 si el destino está a menos de 300 kilómetros, el precio final es la tarifa base. Para
 destinos a más de 300 Km, se suman 10 céntimos por cada kilómetro de distancia al
 destino (a partir del Km 301).
 Cree un programa para que lea el número de kilómetros al destino y calcule el precio
 final del billete.
*/

#include <iostream>
using namespace std;

int main(){
   
   const int TARIFABASE = 150,LIMITE = 300;
   float tarifaFinal,kilometros;
   
   cout << "Bienvenido/a a aerolineas Manoli, digame la distancia de su vuelo: ";
   cin >> kilometros;
   
   if (kilometros >= LIMITE){
      
      kilometros = kilometros - LIMITE;
      tarifaFinal = TARIFABASE + (kilometros*0.1);
      
      cout << "Tendrá que pagar: " << tarifaFinal;
   } else {
      tarifaFinal = TARIFABASE;
      
      cout << "Tendra que pagar: " << tarifaFinal;
   }
   
   return 0;
}
