////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

// (Examen Febrero 2017)

/*
El sistema D�Hondt es el m�todo que se
utiliza en Espa�a para asignar los esca�os del Congreso de los Diputados. Se quiere
construir un programa que lea el n�mero total de esca�os a distribuir, el n�mero de
partidos que han participado en las elecciones y los votos obtenidos por cada uno de
ellos. El programa mostrar� cu�ntos esca�os obtuvo cada partido.

La asignaci�n de los esca�os se hace a trav�s de un proceso iterativo en el que en
cada iteraci�n se asigna un esca�o a un partido y as� hasta llegar al n�mero total de
esca�os a repartir. En una determinada iteraci�n, un partido se llevar� un esca�o si
tiene el mayor cociente de D�Hondt, definido �ste como sigue:

Cociente de D�Hondt = Vi/(Si + 1)

d�nde Vi es el n�mero total de votos obtenidos en las elecciones por el partido i y Si
es el n�mero de esca�os asignados hasta esa iteraci�n al partido i.

Abajo se muestra un ejemplo de este proceso iterativo con 5 esca�os a repartir y 4
partidos. Un asterisco (*) nos indica que el partido correspondiente (la columna) se
lleva el esca�o a asignar en esa iteraci�n (la filaaaa).

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
        << "- N�mero de esca�os a repartir (>= 1)\n" 
        << "- N�mero de partidos (entre 0 y " << MAX_PARTIDOS << ")\n"
        << "- N�mero de votos obtenidos por cada partido (>= 0)\n";

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
      cout << "\nPartido " << i << " .Total de esca�os: "
           << escanios[i];
   }
   
   return 0;
   
}





