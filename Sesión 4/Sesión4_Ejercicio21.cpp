////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Recupere la solución del ejercicio 18 [Gaussiana] de la
Relación de Problema I. Si lo desea, puede usar el código disponible en el siguiente
enlace:
https://decsai.ugr.es/jccubero/FP/I_Gaussiana.cpp
Se pide construir un programa para imprimir el resultado de aplicar dicha función a
varios valores de abscisas.
En primer lugar, se leerán los parámetros que definen la función, es decir, la esperanza
y la desviación. La esperanza puede ser cualquier valor, pero para leer el valor de
desviación debe utilizar un bucle y obligar al usuario a que introduzca una valor mayor
o igual que cero.
A continuación el programa pedirá un valor minimo, un valor maximo y un
incremento. El valor maximo ha de leerse con un filtro de entrada obligando a que
sea mayor que minimo. El programa mostrará el valor de la función gaussiana en
todos los valores de x (la abscisa) entre minimo y maximo a saltos de incremento,
es decir, minimo, minimo + incremento, minimo + 2*incremento, · · · , hasta llegar, como mucho, a maximo. El incremento ha de leerse con un filtro de entrada
para obligar a que sea estrictamente positivo.

12 <- Esperanza (sin restricción)
5 <- Desviación (>= 0)
2 <- Mínimo (sin restricción)
3 <- Máximo (>= Mínimo)
0.5 <- Incremento (> 0)
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
   
   const double Pi= asin(0.5)*6;
   double esperanza,desviacion,x;
   double y,max,min,salto;
   double tipificado,exponente;
   
   cout << "Gaussiana\n\nIntrodruzca el valor del parametro 'esperanza': ";
   cin >> esperanza;
   
   do{
      cout << "Introduzca un valor positivo del parametro 'desviacion': ";
      cin >> desviacion;
   }while (desviacion <= 0);
   
   cout << "Introduzca el valor de la absicisa maximo: ";
   cin >> max;
   cout << "Introduzca el valor de la abcisa minimo: ";
   cin >> min;
   cout << "INtroduzca el salto de abscisa: ";
   cin >> salto;
   
   for(x = min; x <= max; x += salto){
      tipificado = (x - esperanza) / desviacion;
      exponente = -0.5 * tipificado * tipificado;
      
      y = exp(exponente) / (desviacion * sqrt(2*Pi) );
      
      cout << "\n\nEl valor de la funcion gaussiana en " << x << " es " << y << "\n\n";
   }
return 0;
}



