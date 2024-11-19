////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Recupere la solución del ejercicio 5
[Variación porcentual] de la Relación de Problemas I. Modifíquelo para realizar una
lectura de múltiples pares de valores. La entrada de datos se interrumpirá cuando
se introduzca cualquier valor negativo. Para simplificar, supondremos que si el primer
valor introducido es positivo, el usuario también introducirá un positivo como segundo
valor.
Por cada par de valores, el programa mostrará la correspondiente variación porcentual. En este ejercicio puede mezclar entradas de datos con salidas y cómputos, dentro
del mismo bucle.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
   double valorInicial,valorFinal;
   double variacion;
   
   /* Como queremos detener el programa si el primer valor es negativo, realizamos una
   lectura anticipada */
   
   cout << "Introduzca un valor inicial: ";
   cin >> valorInicial;
   
   
   while ( 0 <= valorInicial){
      cout << "Introduca un valor final: ";
      cin >> valorFinal;
      
      variacion = abs(100 * ((valorFinal - valorInicial)/valorInicial));
      
      cout << "El valor porcentual es de: " << variacion << " %" << endl;
      
      cout << "\n Introduzca un valor inicial: ";
      cin >> valorInicial;
   }
   
   return 0;
}
