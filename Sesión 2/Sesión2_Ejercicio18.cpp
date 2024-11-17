////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Realice un programa que lea los coeficientes reales 'µ' y 'o' de una función gaussiana.
Dichos valores se conocen con el nombre de esperanza y desviación respectivamente.
Acontinuación el programa leerá un valor de abscisa 'x' y se imprimirá el valor que toma
la función en 'x'
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
   
   cout << "La función gaussiana resultante en el punto " << valorAbcisa << " sera: " << gaussianaF;

   return 0;
}

