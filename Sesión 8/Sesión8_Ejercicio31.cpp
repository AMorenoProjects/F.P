////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
En este ejercicio queremos representar el tablero del juego buscaminas.

Los valores que puede haber en cada casilla son los siguientes:
• -1. En este caso, hay una mina en dicha casilla.

• Un entero n donde 0 = n = 8. En este caso, no hay una mina en dicha casilla. El
valor n indica que hay un total de n minas en el conjunto de sus casillas vecinas.

Si n = 0 es porque ninguno de sus vecinos es una mina.

Las casillas vecinas a una dada son las que tienen índices de filaa y columna
que no difieren en más de una unidad (una casilla no es vecina de sí misma).
Así pues, una casilla dentro del tablero tiene 8 vecinos, mientras que las de la
primera filaa, por ejemplo, tienen 5 vecinos (salvo las esquinas que sólo tienen 3)
Construya un programa que haga lo siguiente:

• Lea el tamaño del tablero, es decir, el número de filaas y columnas. Inicialice todos
los valores de las casillas del tablero a 0.

• Lea pares de valores filaa, columna hasta que se introduzca un -1 como valor
de filaa. Cada vez que se introduzca un par, se asignará una mina a la casilla
correspondiente. Si en dicha casilla ya hay una mina, no se cambiará su valor.
En caso contrario (no hay una mina), el programa debe actualizar el valor n de
las casillas vecinas que no sean una mina. Hágalo con un código que sea lo más
compacto posible, prestando especial interés a que no se repitan estructuras de
control similares.

• Finalmente imprima el tablero resultante
*/


#include <iostream>

using namespace std;
   
int main(){
   const int MAX_fila = 50; 
   const int MAX_COL = 40; 
   int num_fila, num_col;    
   int fila, col;

   int tablero[MAX_fila][MAX_COL];

   cout << "Introduzca el número de filaas: ";
   cin >> num_fila;
   
   cout << "Introduzca el número de columnas: ";
   cin >> num_col;
   
   // Rellenar el tablero
   
   cout << "De valores al tablero (0 o -1)" << endl;
   
   for(int i = 0; i < num_fila;i++){
      
      for(int j=0; j < num_col;j++){
         
         cin >> tablero[i][j];
      }
   }
   
   // Tablero dado por el usuario
   
   cout << endl;
   
   for(int i = 0; i < num_fila;i++){
      int salto = 0;
      
      for(int j=0; j < num_col;j++){
         
         cout << tablero[i][j] << "\t";
         salto++;
      }
      if(salto = num_col -1){
         cout << "\n";
      }
   }   
   
   // Conteo de minas
   
   fila = 0;
   col = 0;
   
   
   for (int f = fila - 1; f <= fila + 1; f++) {
      for (int c = col - 1; c <= col + 1; c++) {
         if (!(f == fila && c == col) && 0 <= f && 0 <= c && f < num_fila && c < num_col && tablero[f][c] != -1) {
            tablero[f][c]++; 
         }
      }
   }
   
   // Tablero Final
   
   cout << endl;
   
   for(int i = 0; i < num_fila;i++){
      int salto = 0;
      
      for(int j=0; j < num_col;j++){
         
         cout << tablero[i][j] << "\t";
         salto++;
      }
      if(salto = num_col -1){
         cout << "\n";
      }
   }  

}





























