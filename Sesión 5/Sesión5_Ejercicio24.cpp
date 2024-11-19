////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Supongamos ahora que se quiere reinvertir todo el dinero obtenido (el original C más
los intereses producidos) en otro plazo fijo a un año y así, sucesivamente. Construya
un programa para que lea el capital, el interés I y un número de años N, y calcule e
imprima todo el dinero obtenido durante cada uno de los N años, suponiendo que todo
lo ganado (incluido el capital original C) se reinvierte a plazo fijo durante el siguiente
año.
Para resolver este ejercicio debe plantear una estructura repetitiva. Si lo desea, puede
comprobar que el resultado es correcto, comparándolo con el de la fórmula del interés
compuesto que obtiene directamente el capital final acumulado:
C * (1 + I/100)^N
*/

#include <iostream>
using namespace std;

int main(){
   double interes;               
   double capital;              
   int year,years;         

   cout << "Interes bancario\n\nIntroduzca capital inicial --> ";
   cin >> capital;
   cout << "Introduzca interes --> ";
   cin >> interes;
   cout << "Introduzca los años que estará invirtiendo -->";
   cin >> years;
   
   year = 0;
   
   for(int i = 1; i <= years; i++){
      year = year + 1;
      capital = capital + ((capital * interes)/100.0);
   
      cout << "El año " << year << " usted gano " << capital << " euros" << endl;
   }

   return 0;
}

