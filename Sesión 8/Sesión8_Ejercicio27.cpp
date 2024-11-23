////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Escriba un programa que lea dos enteros con el número de filas num_fils 
y de columnas num_cols de una matriz. A continuación lea
las componentes de la matriz (un total de num_fils × num_cols valores reales).
Calcule la posición de aquel elemento que sea el mayor de entre los mínimos de cada
fila. Por ejemplo, dada la matriz M (3 × 4),
el máximo entre 4, 2 y 1 (los mínimos de cada fila) es 4 y se encuentra en la posición
(0, 2). Para ello, construya un vector con los mínimos de cada fila y luego recorra
dicho vector para calcular el máximo.
*/

#include <iostream>
using namespace std;

int main() {
   const int MAX_FIL = 10, MAX_COL = 10;
   int num_filas, num_columnas;
   int matrizPrincipal[MAX_FIL][MAX_COL];
   int minimo_fila[MAX_FIL];
   int maximo_de_minimos = 0;
   int pos_fila_max, pos_col_max;
   int pos_col_min;
   int minimo;


   cout << "Introduzca el tamaño de la matriz no mayor a 10 (filas y columnas): ";
   cin >> num_filas >> num_columnas;
   cout << "Introduzca los valores de la matriz: " << endl;
   for (int i = 0; i < num_filas; i++) {
      for (int j = 0; j < num_columnas; j++) {
         cin >> matrizPrincipal[i][j];
      }
   }

   // Encontrar el mínimo de cada fila
   for (int i = 0; i < num_filas; i++) {
      minimo = matrizPrincipal[i][0];            // Inicializar con el primer elemento de la fila
      pos_col_min = 0;                           // Posición del mínimo en la fila

      for (int j = 1; j < num_columnas; j++) {
         if (matrizPrincipal[i][j] < minimo) {
            minimo = matrizPrincipal[i][j];
            pos_col_min = j;
         }
      }

      minimo_fila[i] = minimo;                      // Guardar el mínimo de la fila

      // Verificar si este mínimo es el mayor de los mínimos hasta ahora
      if (minimo > maximo_de_minimos) {
         maximo_de_minimos = minimo;
         pos_fila_max = i;
         pos_col_max = pos_col_min;
      }
   }

   // Imprimir el resultado
   cout << "El mayor de los mínimos es " << maximo_de_minimos 
      << " y se encuentra en la posición (" 
      << pos_fila_max << ", " << pos_col_max << ")." << endl;

   return 0;
}

