////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Cree un programa que lea las coordenadas de dos puntos P1 =
(x1, y1) y P2 = (x2, y2) y calcule la distancia euclídea entre ellos:

Debe calcular el cuadrado sin usar ninguna función de la biblioteca cmath. Para la
raíz cuadrada, sí puede usar la función sqrt
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
   double x1,x2,y1,y2;
   double distancia;
   
   cout << "Introduzca las cordenadas de P1: " << endl;
   cin >> x1 >> y1;
   
   cout << "Introduzca las cordenadas de P2: " << endl;
   cin >> x2 >> y2; 
   
   distancia = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
   
   cout << "La distancia entre los 2 puntos es de: " << distancia << " unidades.";
   return 0;
}
