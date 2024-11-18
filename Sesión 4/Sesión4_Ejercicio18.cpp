////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*

Modifique la solución al ejercicio 10
[Cambia capitalización] cuyo código puede descargar del siguiente enlace:
https://decsai.ugr.es/jccubero/FP/II_Mayuscula.cpp
para que, dependiendo de cómo era la letra introducida, imprima en pantalla alguno
de los siguientes mensajes:
• La letra era una mayúscula. Una vez convertida es ...
• La letra era una minúscula. Una vez convertida es ...
• El carácter no era una letra.
Hágalo separando entradas y salidas de los cómputos. Para ello, utilice una variable de
tipo enumerado que represente las opciones de que un carácter sea una mayúscula,
una minúscula o un carácter no alfabético.
¿Cuál sería el inconveniente de usar dos variables de tipo bool?

*/

#include <iostream>
using namespace std;

/*
Se quiere leer un carácter letra_original desde teclado, y comprobar con
una estructura condicional si es una letra mayúscula.
En dicho caso, hay que calcular la minúscula correspondiente almacenando
el resultado en una variable llamada letra_convertida .
En el caso de que no sea una mayúscula, le asignaremos a
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
      
      cout << "• La letra era una mayúscula. Una vez convertida es ... " << letra_convertida;

   } else if ((letra_original >= 'a') && (letra_original <= 'z')){
      
      letra_convertida = letra_original - DISTANCIA_MAY_MIN;
      
      cout << "• La letra era una minúscula. Una vez convertida es ... " << letra_convertida;

   } else {
      
      cout << "• El carácter no era una letra.";
   }

   cout  << "\nEl carácter " << letra_original
         << " una vez convertido es: " << letra_convertida << "\n";



   return 0;

}
