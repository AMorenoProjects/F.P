////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Dada una matriz de tamaño 4*4, calcular la sumas de cada una de sus
diagonales y almacenarlas en un vector
*/


#include <iostream>
using namespace std;

int main() {
   const int SIZE = 4;
   int matriz[SIZE][SIZE];
    
   // Para las diagonales "secundarias": también hay 7 posibles
   int sumasSec[2 * SIZE - 1] = {0};

   // 1. Entrada de datos
   cout << "Introduce los valores de la matriz 4x4:\n";
   for (int i = 0; i < SIZE; i++) {
      for (int j = 0; j < SIZE; j++) {
         cout << "Elemento [" << i << "][" << j << "]: ";
         cin >> matriz[i][j];
      }
   }


   cout << "\nLa matriz ingresada es:\n";
   for (int i = 0; i < SIZE; i++) {
      for (int j = 0; j < SIZE; j++) {
         cout << matriz[i][j] << "\t";
      }
      cout << endl;
   }

   // 3. Sumar diagonales (der-arriba -> izq-abajo)
   for (int i = 0; i < SIZE; i++) {
      for (int j = 0; j < SIZE; j++) {
         int diagIndex = i + j; 
         sumasSec[diagIndex] += matriz[i][j];
      }
   }

    // 4. Mostrar resultados
   cout << "\nSuma de cada diagonal (derecha-arriba a izquierda-abajo):\n";
   for (int k = 0; k < 2 * SIZE - 1; k++) {
      cout << "Diagonal " << k + 1 << ": " << sumasSec[k] << endl;
   }

   return 0;
}

