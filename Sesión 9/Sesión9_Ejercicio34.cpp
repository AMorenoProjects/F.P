////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Recupere la solución del ejercicio 36 [Cuadrado] de la
Relación de Problema II. Si lo desea, puede usar el código disponible en el siguiente
enlace:
https://decsai.ugr.es/jccubero/FP/II_PiramideCuadrado.cpp
Queremos definir funciones para imprimir en pantalla la pirámide y el cuadrado. Se le
ofrecen dos alternativas. Elija una de ellas e impleméntela. Debe justificar la elección
realizada:
• Definiendo una única función:
void ImprimeFigura(int inicio, int num_filas, bool es_piramide)
Para imprimir una pirámide pasaríamos true al tercer parámetro y para imprimir
un cuadrado pasaríamos false
• Definiendo dos funciones:
void ImprimeCuadrado(int inicio, int num_filas)
void ImprimePiramide(int inicio, int num_filas)
*/

// Eligo definir 2 funciónes porque al dividir el código en caso de que aparezca algún error resultará más fácil solucionarlo

#include <iostream>
using namespace std;

// Prototipos de funciones
void ImprimePiramide(int inicio, int num_filas);
void ImprimeCuadrado(int inicio, int num_filas);

// Función para imprimir la pirámide
void ImprimePiramide(int inicio, int num_filas) {
   int ultimo;
    
   ultimo = inicio + num_filas - 1;

   for (int i = inicio; i <= ultimo; i++) {
      for (int j = i; j <= ultimo; j++) {
         cout << j << " ";
      }
      cout << "\n";
   }
}

// Función para imprimir el cuadrado
void ImprimeCuadrado(int inicio, int num_filas) {
   int fila_ultima;
    
   fila_ultima = inicio + num_filas - 1;

   for (int i = inicio; i <= fila_ultima; i++) {
      int ultimo_de_fila;
        
      ultimo_de_fila = i + num_filas - 1;

      for(int j = i; j <= ultimo_de_fila; j++) {
         cout << j << " ";
      }
      cout << "\n";
   }
}


int main() {
   int inicio, numero_filas;

   cout << "Pirámide y Cuadrado de números\n\n";

   cout << "Introduzca el valor inicial\n";
   cin >> inicio;

   do {
      cout << "\nIntroduzca el número de filas\n";
      cin >> numero_filas;
   } while (numero_filas < 0);

   cout << "\nPirámide:\n";
   ImprimePiramide(inicio, numero_filas);

   cout << "\nCuadrado:\n";
   ImprimeCuadrado(inicio, numero_filas);

   return 0;
}
















