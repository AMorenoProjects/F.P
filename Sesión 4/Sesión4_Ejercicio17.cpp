////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
 Continuamos trabajando sobre la base
del ejercicio 12 [Velocidad imputada] de esta Relación de Problemas.
Añada un nuevo tipo de radar, a saber de tramo. Este tipo de radares toman una foto al
vehículo en un punto de la vía y luego vuelven a tomar otra foto en un punto posterior.
La velocidad captada es realmente la velocidad media entre ambos puntos, pero a
efectos de nuestro ejemplo es simplemente un valor más de velocidad.
Utilice el carácter 'T' para designar en la entrada de datos de este tipo de radar.
En este nuevo tipo de radar, supondremos que hay un margen de 3 km/h cuando la
velocidad es menor o igual que 100 y un margen del 3 % en el caso de que la velocidad
sea mayor que 100.
Use una variable de tipo de dato enumerado para detectar el tipo de radar (fijo, móvil
o de tramo)
*/

#include <iostream>
using namespace std;

int main(){
   
   const int RADARF_ERROR1 = 5 ,RADARM_ERROR1 = 7,RADART_ERROR1 = 3, VELOCIDADLIMITE = 100; 
   const double RADARF_ERROR2 = 0.05, RADARM_ERROR2 = 0.07, RADART_ERROR2 = 0.03;
   double velocidad,velocidadFinal;
   char caracter;
   
   cout << "Introduzca la velocidad(Km/h): ";
   cin >> velocidad;
   cout << "Dija el tipo de radar" << endl;
   cout << "F = Radar fijo | M = Radar movil | T = Radar de tramo" << endl;
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
   } else if (caracter == 'M'){
      if (velocidad <= VELOCIDADLIMITE){
         
         velocidadFinal = velocidad - RADARM_ERROR1;
         
         cout << "La velocidad imputada es de: " << velocidadFinal;
      } else {
         velocidadFinal = velocidad - (velocidad * RADARM_ERROR2);
         
         cout << " La velocidad imputadada es de: " << velocidadFinal;
      }
   } else if (caracter == 'T'){
      if (velocidad <= VELOCIDADLIMITE){
         
         velocidadFinal = velocidad - RADART_ERROR1;
         
         cout << "La velocidad imputada es de: " << velocidadFinal;
      } else {
         velocidadFinal = velocidad - (velocidad * RADART_ERROR2);
         
         cout << " La velocidad imputadada es de: " << velocidadFinal;
      }
   }
   
   return 0;

}
