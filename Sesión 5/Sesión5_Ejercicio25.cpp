////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Recupere la solución del ejercicio 8 [Interés bancario] de
la Relación de Problemas I. Construya un programa para calcular cuántos años han
de pasar hasta llegar a doblar, como mínimo, el capital inicial. Los datos que han de
leerse desde teclado son el capital inicial y el interés anual.
*/

#include <iostream>
using namespace std;

int main(){
   const int DOBLE = 2;
   double interes;               
   double capitalInicial,capitalFinal;              
   int year;         

   cout << "Interes bancario\n\nIntroduzca capital inicial --> ";
   cin >> capitalInicial;
   cout << "Introduzca interes --> ";
   cin >> interes;
   
   year=0;
   capitalFinal = capitalInicial;
   
   while(capitalFinal < (DOBLE*capitalInicial)){
      year = year + 1;
      
      capitalFinal = capitalFinal + ((capitalFinal * interes)/100.0);
   }

   cout << "Para al menos doblar la cantidad inicial han de pasar "<< year << " años";

   return 0;
}
