////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
La Direcci�n General de Tr�fico publica en su p�gina web las sanciones
a aplicar por infracci�n de velocidad. Si lo desea, se pueden consultar en el siguiente
enlace (aunque no es necesario para resolver este ejercicio):
https://www.dgt.es/nuestros-servicios/multas-y-sanciones/con
oce-los-tipos-de-infracciones-y-sanciones/
Queremos determinar la sanci�n a aplicar en una autov�a, cuyo l�mite de velocidad
es 120. En la siguiente tabla se muestra la velocidad del veh�culo y la sanci�n correspondiente 
(n�mero de puntos del carnet de conducir que se restan y la multa en
euros)
*/

#include <iostream>
using namespace std;

int main(){
   int velocidad;
   
   cout << "Introduca la velocidad del veh�culo: ";
   cin >> velocidad;
   
   if (velocidad <= 120){
      cout << "No tiene multa" << endl;
   } else if (velocidad > 120 && velocidad <= 150){
      cout << "0 puntos, 100 euros";
   } else if (velocidad > 150 && velocidad <= 170){
      cout << "2 puntos, 300 euros"; 
   } else if (velocidad > 170 && velocidad <= 180){
      cout << "4 puntos, 400 euros";
   } else if (velocidad > 180 && velocidad <= 190){
      cout << "6 puntos, 500 euros";
   } else{
      cout << "6 puntos, 600 euros";
   }
   
   return 0;
}
   
   
