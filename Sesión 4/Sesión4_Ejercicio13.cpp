////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Realice lo mismo que se le pide en el ejercicio 5
[Comparación de dos instantes (restando segundos)] pero resolviéndolo de otra forma. 
En vez de calcular los segundos que hay de diferencia entre ambos instantes,
tiene que usar los valores de la hora, minuto y segundo del instante inicial y los tiene
que comparar (usando expresiones lógicas) con los del instante final.
*/

#include <iostream>
using namespace std;

int main(){
   
   const int cambioH = 3600, cambioM = 60;
   int horaI,minutoI,segundoI,horaF,minutoF,segundoF;
   int segundosI_Totales, segundosF_Totales;
   
   cout << "Introduzca la hora de inicio: ";
   cin >> horaI; 
   cout << "Introduzca el minuto inicial: ";
   cin >> minutoI;
   cout << "Introduzca los segundos iniciales: ";
   cin >> segundoI;
   
   cout << "Introduzca la hora de final: ";
   cin >> horaF; 
   cout << "Introduzca el minuto final: ";
   cin >> minutoF;
   cout << "Introduzca los segundos finales: ";
   cin >> segundoF;
   
   segundosI_Totales = horaI * cambioH + minutoI * cambioM + segundoI;
   segundosF_Totales = horaF * cambioH + minutoF * cambioM + segundoF;
   
   if ((segundosF_Totales-segundosI_Totales) > 0){
      
      cout << "El primero es anterior";
      
   } else {
      
      cout << "El primero NO es anterior";  
          
   }
   
   return 0;
}

