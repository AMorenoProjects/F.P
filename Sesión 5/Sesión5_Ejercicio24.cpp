////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Supongamos ahora que se quiere reinvertir todo el dinero obtenido (el original C m�s
los intereses producidos) en otro plazo fijo a un a�o y as�, sucesivamente. Construya
un programa para que lea el capital, el inter�s I y un n�mero de a�os N, y calcule e
imprima todo el dinero obtenido durante cada uno de los N a�os, suponiendo que todo
lo ganado (incluido el capital original C) se reinvierte a plazo fijo durante el siguiente
a�o.
Para resolver este ejercicio debe plantear una estructura repetitiva. Si lo desea, puede
comprobar que el resultado es correcto, compar�ndolo con el de la f�rmula del inter�s
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
   cout << "Introduzca los a�os que estar� invirtiendo -->";
   cin >> years;
   
   year = 0;
   
   for(int i = 1; i <= years; i++){
      year = year + 1;
      capital = capital + ((capital * interes)/100.0);
   
      cout << "El a�o " << year << " usted gano " << capital << " euros" << endl;
   }

   return 0;
}

