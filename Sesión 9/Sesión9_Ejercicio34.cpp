////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Recupere la soluci�n del ejercicio 36 [Cuadrado] de la
Relaci�n de Problema II. Si lo desea, puede usar el c�digo disponible en el siguiente
enlace:
https://decsai.ugr.es/jccubero/FP/II_PiramideCuadrado.cpp
Queremos definir funciones para imprimir en pantalla la pir�mide y el cuadrado. Se le
ofrecen dos alternativas. Elija una de ellas e implem�ntela. Debe justificar la elecci�n
realizada:
� Definiendo una �nica funci�n:
void ImprimeFigura(int inicio, int num_filas, bool es_piramide)
Para imprimir una pir�mide pasar�amos true al tercer par�metro y para imprimir
un cuadrado pasar�amos false
� Definiendo dos funciones:
void ImprimeCuadrado(int inicio, int num_filas)
void ImprimePiramide(int inicio, int num_filas)
*/

// Eligo definir 2 funci�nes porque al dividir el c�digo en caso de que aparezca alg�n error resultar� m�s f�cil solucionarlo

#include <iostream>
using namespace std;

// Prototipos de funciones
void ImprimePiramide(int inicio, int num_filas);
void ImprimeCuadrado(int inicio, int num_filas);

// Funci�n para imprimir la pir�mide
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

// Funci�n para imprimir el cuadrado
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

   cout << "Pir�mide y Cuadrado de n�meros\n\n";

   cout << "Introduzca el valor inicial\n";
   cin >> inicio;

   do {
      cout << "\nIntroduzca el n�mero de filas\n";
      cin >> numero_filas;
   } while (numero_filas < 0);

   cout << "\nPir�mide:\n";
   ImprimePiramide(inicio, numero_filas);

   cout << "\nCuadrado:\n";
   ImprimeCuadrado(inicio, numero_filas);

   return 0;
}
















