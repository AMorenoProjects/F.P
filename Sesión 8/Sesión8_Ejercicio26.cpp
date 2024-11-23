////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Lea los datos de una matriz de reales tal y como se indica en
el ejercicio 25 [Traspuesta] de esta relación de problemas.
Si la matriz que se ha introducido es n × m, por ejemplo, ahora se procederá a leer
los datos de una segunda matriz m × k. Por lo tanto, en primer lugar se lee el entero
k y a continuación los valores de esta segunda matriz.
Multiplique ambas matrices y muestre el resultado en pantalla
*/

#include <iostream>
using namespace std;

int main(){
   const int MAX_FIL_IZDA = 10, MAX_COL = 10;
   const int MAX_FIL_DCHA = MAX_COL, MAX_COL_DCHA = 30;
   
   int util_fil_izda, util_col_izda;
   int util_fil_dcha, util_col_dcha;
   int util_fil_prod, util_col_prod;

   double izda[MAX_FIL_IZDA][MAX_COL];            // matriz de la izquierda
   double dcha[MAX_FIL_DCHA][MAX_COL_DCHA];       // matriz de la derecha
   double prod[MAX_FIL_IZDA][MAX_COL_DCHA];       // matriz producto

   cout << "Introduzca el tamaño de la primera matriz: ";
   cin >> util_fil_izda >> util_col_izda;    
   cout << "Introduzca los valores de la primera matriz: ";     
   for (int i = 0; i < util_fil_izda; i++) {
      for (int j = 0; j < util_col_izda; j++) {
         cin >> izda[i][j];
      }
   }

   util_fil_dcha = util_col_izda;                  // Las filas de la derecha deben coincidir con las columnas de la izquierda

   cout << "Introduzca la cantidad de columnas de la sugunda matriz: ";
   cin >> util_col_dcha;
   
   cout << "Introduzca los valores de la segunda matriz: ";
   for (int i = 0; i < util_fil_dcha; i++) {
      for (int j = 0; j < util_col_dcha; j++) {
         cin >> dcha[i][j];
      }
   }

   // Dimensiones de la matriz producto
   util_fil_prod = util_fil_izda;
   util_col_prod = util_col_dcha;

   // Inicialización todos los valores de la matriz producto a 0
   for (int i = 0; i < util_fil_prod; i++) {
      for (int j = 0; j < util_col_prod; j++) {
         prod[i][j] = 0;
      }
   }

   // Producto de matrices
   for (int i = 0; i < util_fil_prod; i++) {
      for (int j = 0; j < util_col_prod; j++) {
         for (int k = 0; k < util_col_izda; k++) {
            prod[i][j] += izda[i][k] * dcha[k][j];
         }
      }
   }
   
   cout << "\n\nMatriz prod:\n";
   for (int i = 0; i < util_fil_prod; i++) {
      cout << "\n";
      for (int j = 0; j < util_col_prod; j++) {
         cout << prod[i][j] << '\t';
      }
   }
   cout << "\n\n";
  
   return 0;
}

