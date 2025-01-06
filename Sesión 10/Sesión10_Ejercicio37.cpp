////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Recupere la solución del ejercicio 33 [Raíz cuadrada(Wilkes)]
de la Relación de Problema II.Defina una función RaizCuadWilkes para que 
calcule la raíz cuadrada de un número según el método de Wilkes et al. 
Se le pide que implemente tres versiones
distintas (entregue un fichero cpp por cada versión). Todas las versiones usarán un
valor EPSILON = 1e-15:
a) La función calcula únicamente la raíz cuadrada.
b) La función calcula la raíz cuadrada y el número de iteraciones que ha sido necesario realizar.
c) La función calcula la raíz cuadrada, el número de iteraciones que ha 
sido necesario realizar y nos indica si el parámetro correspondiente al número real (del que
se va a calcular la raíz cuadrada) es incorrecto: recuerde que tenía que estar en
el intervalo (0, 3). Para esta versión puede usar el código del siguiente enlace:
*/

#include <iostream>
#include <cmath>
using namespace std;

// VERSIÓN A

/*
double RaizCuadWilkes(double real) {
   const double EPSILON = 1e-15;
   double a = real;
   double c = real - 1;

   do {
      a = a - a * c / 2;
      c = c * c * (c - 3) / 4;
   } while (abs(c) >= EPSILON);

   return a;
}

int main() {
   double raiz;
   double real;
   
   cout.precision(15);
   cout << "Algoritmo de Wilkes para el cálculo de la raíz cuadrada\n\n"
      << "Introduzca un número real r verificando 0 < r < 3 -> ";

   do {
      cin >> real;
   } while (real <= 0 || real >= 3);

   raiz = RaizCuadWilkes(real);

   cout << "Raíz cuadrada de " << real << ": " << raiz << endl;
   return 0;
}
*/

// VERSIÓN B

/*

// Función para calcular la raíz cuadrada y el número de iteraciones
void RaizCuadWilkes(double real, double &raiz, int &iteraciones) {

   const double EPSILON = 1e-15;  
   raiz = real;                             // Aproximación inicial de la raíz cuadrada
   double c = real - 1;                     
   iteraciones = 0;                         

   // Método iterativo de Wilkes
   do {
      raiz = raiz - raiz * c / 2;          // Actualizar la aproximación
      c = c * c * (c - 3) / 4;             // Actualizar la corrección
      iteraciones++;                       
   } while (abs(c) >= EPSILON);             // Continuar hasta que la corrección sea menor que EPSILON
}

int main() {
   double real, raiz;
   int iteraciones;

   cout.precision(15);  // Ajustar la precisión de los valores mostrados
   cout << "Algoritmo de Wilkes para el cálculo de la raíz cuadrada\n\n"
      << "Introduzca un número real r verificando 0 < r < 3 -> ";

   do {
      cin >> real;                              // Leer el valor del usuario
   } while (real <= 0 || real >= 3);           // Validar que el número esté en el intervalo (0, 3)

   RaizCuadWilkes(real, raiz, iteraciones);

   cout << "Raíz cuadrada de " << real << ": " << raiz << "\n"
      << "Número de iteraciones necesarias: " << iteraciones << endl;

   return 0;
}
*/

// VERSIÓN C

// Función RaizCuadWilkes
void RaizCuadWilkes(double dato, double &raiz, int &n_iterac, bool &error) {
   const double EPSILON = 1e-15;
   error = false;
   raiz = dato;
   double c;

   // Verificar si el dato está en el intervalo válido
   if (dato <= 0 || dato >= 3) {
      error = true;
      return;
   }

   // Inicializar variables
   c = dato - 1;
   n_iterac = 0;

   // Iterar hasta que la corrección sea menor que EPSILON
   do {
      raiz = raiz - raiz * c / 2;
      c = c * c * (c - 3) / 4;
      n_iterac++;
   } while (abs(c) >= EPSILON);
}

int main() {
   double dato, raiz;
   int n_iterac;
   bool error;
   
   cout.precision(15);
   cout << "Algoritmo de Wilkes, Wheeler y Gill, para el cómputo de la raíz cuadrada\n\n"
      << "Introduzca un número real r verificando 0 < r < 3 -> ";

   cin >> dato;

   // Llamar a la función RaizCuadWilkes
   RaizCuadWilkes(dato, raiz, n_iterac, error);

   if (error)
      cout << "\nError: el número debe estar en el intervalo (0, 3)";
   else
      cout << "\n\nRaíz cuadrada de " << dato << " calculada con sqrt: " << sqrt(dato)
         << "\nAproximación de la raíz cuadrada de " << dato << ": " << raiz
         << "\nNúmero de iteraciones: " << n_iterac;

   cout << "\n";
   return 0;
}



