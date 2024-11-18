////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
La velocidad de los veh�culos en las v�as de circulaci�n es captada por unos aparatos 
electr�nicos conocidos como radares o cinem�metros. �stos
pueden ser fijos o m�viles y presentan un margen de error que hay que aplicar a la 
velocidad captada por el radar. Dichos m�rgenes vienen especificados en la orden
ITC/3123/2010, de 26 de noviembre

a) En el caso de un radar fijo:
   I) Si la velocidad captada por el radar es menor o igual que 100 km/h, el margen
   de error es de � 5km/h.
   
   II) En caso contrario, el margen de error es de un 5%
b) En el caso de un radar m�vil:
   I) Si la velocidad captada por el radar es menor o igual que 100 km/h, el margen
   de error es de 7km/h.
   
   II) En caso contrario, el margen de error es de un 7%
Los m�rgenes de error se aplican sobre la velocidad captada y da como resultado la
velocidad imputada. La aplicaci�n se realiza en el sentido m�s ventajoso para el contribuyente, es decir, disminuyendo la velocidad captada. Por ejemplo, si la velocidad
captada es de 95 km/h, la velocidad imputada ser�a de 95 - 5 = 90 km/h en el
caso de un radar fijo y de 95 - 7 = 88 km/h en el caso de un radar m�vil.
Si la velocidad captada es, por ejemplo, de 104 km/h, la velocidad imputada ser�a de
104 - 5% de 104 = 104 - 5.2 = 98.8 km/h en el caso de un radar fijo y de
104 - 7% de 104 = 104 - 7.28 = 96.72 km/h en el caso de un radar m�vil.

Construya un programa que lea desde teclado un car�cter que indique el tipo de radar
('F' para fijo y cualquier otra letra para m�vil), la velocidad captada, e imprima la
velocidad imputada.

*/

#include <iostream>
using namespace std;

int main(){
   
   const int RADARF_ERROR1 = 5 ,RADARM_ERROR1 = 7, VELOCIDADLIMITE = 100; 
   const double RADARF_ERROR2 = 0.05, RADARM_ERROR2 = 0.07;
   double velocidad,velocidadFinal;
   char caracter;
   
   cout << "Introduzca la velocidad(Km/h): ";
   cin >> velocidad;
   cout << "Diga el tipo de radar" << endl;
   cout << "Tenga en cuenta que un 'F' significa radar fijo y cualquier otro caracter radar m�vil" << endl;
   cout << "Introduzca el caracter: ";
   cin >> caracter;
   
   if (caracter == 'F'){
      if (velocidad <= VELOCIDADLIMITE){
         
         velocidadFinal = velocidad - RADARF_ERROR1;
         
         cout << "La velocidad imputada es de: " << velocidadFinal;
      } else {
         velocidadFinal = velocidad - (velocidad * RADARF_ERROR2);
         
         cout << " La velocidad imputadada es de: " << velocidadFinal;
      }
      
   } else {
      if (velocidad <= VELOCIDADLIMITE){
         
         velocidadFinal = velocidad - RADARM_ERROR1;
         
         cout << "La velocidad imputada es de: " << velocidadFinal;
      } else {
         velocidadFinal = velocidad - (velocidad * RADARM_ERROR2);
         
         cout << " La velocidad imputadada es de: " << velocidadFinal;
      }
   }
   
   return 0;
}






