////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

// (Examen Febrero 2017)

/*
El sistema D’Hondt es el método que se
utiliza en España para asignar los escaños del Congreso de los Diputados. Se quiere
construir un programa que lea el número total de escaños a distribuir, el número de
partidos que han participado en las elecciones y los votos obtenidos por cada uno de
ellos. El programa mostrará cuántos escaños obtuvo cada partido.

La asignación de los escaños se hace a través de un proceso iterativo en el que en
cada iteración se asigna un escaño a un partido y así hasta llegar al número total de
escaños a repartir. En una determinada iteración, un partido se llevará un escaño si
tiene el mayor cociente de D’Hondt, definido éste como sigue:

Cociente de D’Hondt = Vi/(Si + 1)

dónde Vi es el número total de votos obtenidos en las elecciones por el partido i y Si
es el número de escaños asignados hasta esa iteración al partido i.

Abajo se muestra un ejemplo de este proceso iterativo con 5 escaños a repartir y 4
partidos. Un asterisco (*) nos indica que el partido correspondiente (la columna) se
lleva el escaño a asignar en esa iteración (la filaaaa).

*/


#include <iostream>
using namespace std;

int main(){
   const int MAX_PARTIDOS = 20;
   int escanios[MAX_PARTIDOS];
   int votos[MAX_PARTIDOS];
   int num_escanios;
   int num_partidos;
   
   int    pos_max;
   double max;
   int    hondt;
   
   cout << "Ley D'Hondt\n\n";
   
   cout << "Introduzca los datos en el siguiente orden:\n"
        << "- Número de escaños a repartir (>= 1)\n" 
        << "- Número de partidos (entre 0 y " << MAX_PARTIDOS << ")\n"
        << "- Número de votos obtenidos por cada partido (>= 0)\n";

   cin >> num_escanios;
   cin >> num_partidos;
   
   for (int i = 0; i < num_partidos; i++){
      cin >> votos[i];
   }
  
   double hondts[MAX_PARTIDOS];

   for (int i = 0 ; i < num_partidos; i++){   
      escanios[i] = 0;
      hondts[i] = votos[i];
   }

   for (int i = 0 ; i < num_escanios; i++){
      pos_max = 0;
      max = -1;       
         
      for (int j = 0; j < num_partidos; j++){
         hondt = hondts[j];
         
         if (hondt > max){
            max = hondt;
            pos_max = j;
         }
      }
      
      escanios[pos_max]++;      
      hondts[pos_max] = votos[pos_max] / (escanios[pos_max] + 1.0);        
   }
   
   cout << "\n\n";
   
   for (int i = 0; i < num_partidos; i++){
      cout << "\nPartido " << i << " .Total de escaños: "
           << escanios[i];
   }
   
   return 0;
   
}





