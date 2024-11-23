////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Escriba un programa que lea dos enteros con el n�mero de filas num_fils 
y de columnas num_cols de una matriz. A continuaci�n lea
las componentes de la matriz (un total de num_fils � num_cols valores reales).
Calcule la posici�n de aquel elemento que sea el mayor de entre los m�nimos de cada
fila. Por ejemplo, dada la matriz M (3 � 4),
el m�ximo entre 4, 2 y 1 (los m�nimos de cada fila) es 4 y se encuentra en la posici�n
(0, 2). Para ello, construya un vector con los m�nimos de cada fila y luego recorra
dicho vector para calcular el m�ximo.
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


   cout << "Introduzca el tama�o de la matriz no mayor a 10 (filas y columnas): ";
   cin >> num_filas >> num_columnas;
   cout << "Introduzca los valores de la matriz: " << endl;
   for (int i = 0; i < num_filas; i++) {
      for (int j = 0; j < num_columnas; j++) {
         cin >> matrizPrincipal[i][j];
      }
   }

   // Encontrar el m�nimo de cada fila
   for (int i = 0; i < num_filas; i++) {
      minimo = matrizPrincipal[i][0];            // Inicializar con el primer elemento de la fila
      pos_col_min = 0;                           // Posici�n del m�nimo en la fila

      for (int j = 1; j < num_columnas; j++) {
         if (matrizPrincipal[i][j] < minimo) {
            minimo = matrizPrincipal[i][j];
            pos_col_min = j;
         }
      }

      minimo_fila[i] = minimo;                      // Guardar el m�nimo de la fila

      // Verificar si este m�nimo es el mayor de los m�nimos hasta ahora
      if (minimo > maximo_de_minimos) {
         maximo_de_minimos = minimo;
         pos_fila_max = i;
         pos_col_max = pos_col_min;
      }
   }

   // Imprimir el resultado
   cout << "El mayor de los m�nimos es " << maximo_de_minimos 
      << " y se encuentra en la posici�n (" 
      << pos_fila_max << ", " << pos_col_max << ")." << endl;

   return 0;
}

