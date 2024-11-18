////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*

Modifique la soluci�n al ejercicio 10
[Cambia capitalizaci�n] cuyo c�digo puede descargar del siguiente enlace:
https://decsai.ugr.es/jccubero/FP/II_Mayuscula.cpp
para que, dependiendo de c�mo era la letra introducida, imprima en pantalla alguno
de los siguientes mensajes:
� La letra era una may�scula. Una vez convertida es ...
� La letra era una min�scula. Una vez convertida es ...
� El car�cter no era una letra.
H�galo separando entradas y salidas de los c�mputos. Para ello, utilice una variable de
tipo enumerado que represente las opciones de que un car�cter sea una may�scula,
una min�scula o un car�cter no alfab�tico.
�Cu�l ser�a el inconveniente de usar dos variables de tipo bool?

*/

#include <iostream>
using namespace std;

/*
Se quiere leer un car�cter letra_original desde teclado, y comprobar con
una estructura condicional si es una letra may�scula.
En dicho caso, hay que calcular la min�scula correspondiente almacenando
el resultado en una variable llamada letra_convertida .
En el caso de que no sea una may�scula, le asignaremos a
letra_convertida el valor que tenga letra_original .
Finalmente, imprimiremos en pantalla el valor de letra_convertida .
No pueden usarse las funciones tolower ni toupper de la biblioteca cctype
*/

int main(){

   char letra_convertida, letra_original;
   const int DISTANCIA_MAY_MIN = 'a'-'A';

   cout << "\nIntroduzca una letra  --> ";
   cin >> letra_original;

   if ((letra_original >= 'A') && (letra_original <= 'Z')){
      
      letra_convertida = letra_original + DISTANCIA_MAY_MIN;
      
      cout << "� La letra era una may�scula. Una vez convertida es ... " << letra_convertida;

   } else if ((letra_original >= 'a') && (letra_original <= 'z')){
      
      letra_convertida = letra_original - DISTANCIA_MAY_MIN;
      
      cout << "� La letra era una min�scula. Una vez convertida es ... " << letra_convertida;

   } else {
      
      cout << "� El car�cter no era una letra.";
   }

   cout  << "\nEl car�cter " << letra_original
         << " una vez convertido es: " << letra_convertida << "\n";



   return 0;

}
