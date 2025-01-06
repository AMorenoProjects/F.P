////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Cree un programa que lea las coordenadas de dos puntos P1 =
(x1, y1) y P2 = (x2, y2) y calcule la distancia eucl�dea entre ellos:

Debe calcular el cuadrado sin usar ninguna funci�n de la biblioteca cmath. Para la
ra�z cuadrada, s� puede usar la funci�n sqrt
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
