////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Recupere la soluci�n del ejercicio 8 [Inter�s bancario] de
la Relaci�n de Problemas I. Construya un programa para calcular cu�ntos a�os han
de pasar hasta llegar a doblar, como m�nimo, el capital inicial. Los datos que han de
leerse desde teclado son el capital inicial y el inter�s anual.
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

   cout << "Para al menos doblar la cantidad inicial han de pasar "<< year << " a�os";

   return 0;
}
