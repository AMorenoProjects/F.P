////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Realice un programa que lea los coeficientes reales '�' y 'o' de una funci�n gaussiana.
Dichos valores se conocen con el nombre de esperanza y desviaci�n respectivamente.
Acontinuaci�n el programa leer� un valor de abscisa 'x' y se imprimir� el valor que toma
la funci�n en 'x'
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
   
   const double Pi= asin(0.5)*6;
   double media,desviacion,valorAbcisa,gaussiana1,gaussiana2,gaussianaF;
   
   cout << "El valor de la media sera: ";
   cin >> media;
   cout << "El valor de la desviacion sera: ";
   cin >> desviacion;
   cout << "El valor de la Abcisa: ";
   cin >> valorAbcisa;
   
   gaussiana1 = (1/(desviacion*sqrt(2*Pi)));
   gaussiana2 = exp(-0.5*pow(((valorAbcisa-media)/desviacion),2));
   gaussianaF = gaussiana1 * gaussiana2;
   
   cout << "La funci�n gaussiana resultante en el punto " << valorAbcisa << " sera: " << gaussianaF;

   return 0;
}

