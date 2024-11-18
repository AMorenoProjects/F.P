////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*

Los siguientes trozos de código no están correctamente tabulados según las normas indicadas en clase. Re-escríbalos e intente simplificar las estructuras
obtenidas.

a) if (edad > 18)
es_mayor_edad = true;
else es_mayor_edad = false;

b) if (edad > 18)
if (ingresos <= MAX_INGRESOS)
suscept_ayuda = true;
else suscept_ayuda = false;
else if (ingresos > MIN_INGRESOS)
suscept_ayuda = true;
else
suscept_ayuda = false;

*/

#include <iostream>
using namespace std;

int main(){
   
   if (edad > 18)
      es_mayor_edad = true;
   else 
      es_mayor_edad = false;
   
   
   if (edad > 18)
      if (ingresos <= MAX_INGRESOS)
         suscept_ayuda = true;
         
      else 
         suscept_ayuda = false;
      
   else if (ingresos > MIN_INGRESOS)
      suscept_ayuda = true;
      
   else
      suscept_ayuda = false;
   
}
