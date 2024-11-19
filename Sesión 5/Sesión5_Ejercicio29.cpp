////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Construya un programa que lea el valor tope obligando a que esté entre 1 y cien
mil, calcule la aproximación de p mediante la anterior serie e imprima el resultado en
pantalla.
Resuelva este problema de tres formas distintas (no hace falta que entregue tres ejercicios: 
baste con que incluya las dos primeras soluciones dentro de un comentario):
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
   
   /* a) Use la función pow (potencia) de cmath para implementar (-1)^i */
   /*
   
   int tope;
   double pi;
   
   do {
      cout << "Introduzca un numero entre 1 y 100.000: ";
      cin >> tope;
      if (tope < 1 || tope > 100000) {
         cout << "Error: El numero debe estar entre 1 y 100.000.\n";
      }
   } while (tope < 1 || tope > 100000);
   pi = 0;

   for(int i = 0; i <= tope; i++){
      pi += (pow(-1, i) / (2 * i + 1));
   }
   
   pi *= 4;

   cout.precision(15);
   cout << fixed << "El valor aproximado de pi es: " << pi << endl;
   */
   
   
   
   /*b) Para cada valor de i, calcule (-1)^i con un bucle, tal y como hizo en el ejercicio
      de la potencia (problema 23 [Factorial y Potencia] )*/
   /*
   int tope,denominador,potencia;
   double pi = 0.0;
   
   do {
      cout << "Introduzca un numero entre 1 y 100.000: ";
      cin >> tope;
      if (tope < 1 || tope > 100000) {
         cout << "Error: El numero debe estar entre 1 y 100.000.\n";
      }
   } while (tope < 1 || tope > 100000);

   for (int i = 0; i <= tope; i++) {
      potencia = 1;  

      for (int j = 0; j < i; j++) {
         potencia *= -1;  
      }

      denominador = 2 * i + 1;
      pi += (potencia / (double)(denominador));  
   }
   
   pi *= 4;

   cout.precision(15);
   cout << fixed << "El valor aproximado de pi es: " << pi << endl;
   */
   
   
   /* c) De una forma más eficiente que las anteriores. Por ejemplo, observe que el valor
      de (-1)^i es 1 para los valores pares de i y -1 para los impares
   */
   
   int tope;
   double pi,numerador;
   
   do {
      cout << "Introduzca un numero entre 1 y 100.000: ";
      cin >> tope;
      if (tope < 1 || tope > 100000) {
         cout << "Error: El numero debe estar entre 1 y 100.000.\n";
      }
   } while (tope < 1 || tope > 100000);
   
   pi = 0;

   for(int i = 0; i <= tope; i++){
      if(i % 2 == 0){
         numerador = 1.0;
      } else{
         numerador = -1.0;
      }
      pi += (numerador / (2 * i + 1));
   }
   
   pi *= 4;

   cout.precision(15);
   cout << fixed << "El valor aproximado de pi es: " << pi << endl;
   
   
   
   return 0;
}
