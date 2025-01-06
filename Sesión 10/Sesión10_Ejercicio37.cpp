////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Recupere la soluci�n del ejercicio 33 [Ra�z cuadrada(Wilkes)]
de la Relaci�n de Problema II.Defina una funci�n RaizCuadWilkes para que 
calcule la ra�z cuadrada de un n�mero seg�n el m�todo de Wilkes et al. 
Se le pide que implemente tres versiones
distintas (entregue un fichero cpp por cada versi�n). Todas las versiones usar�n un
valor EPSILON = 1e-15:
a) La funci�n calcula �nicamente la ra�z cuadrada.
b) La funci�n calcula la ra�z cuadrada y el n�mero de iteraciones que ha sido necesario realizar.
c) La funci�n calcula la ra�z cuadrada, el n�mero de iteraciones que ha 
sido necesario realizar y nos indica si el par�metro correspondiente al n�mero real (del que
se va a calcular la ra�z cuadrada) es incorrecto: recuerde que ten�a que estar en
el intervalo (0, 3). Para esta versi�n puede usar el c�digo del siguiente enlace:
*/

#include <iostream>
#include <cmath>
using namespace std;

// VERSI�N A

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
   cout << "Algoritmo de Wilkes para el c�lculo de la ra�z cuadrada\n\n"
      << "Introduzca un n�mero real r verificando 0 < r < 3 -> ";

   do {
      cin >> real;
   } while (real <= 0 || real >= 3);

   raiz = RaizCuadWilkes(real);

   cout << "Ra�z cuadrada de " << real << ": " << raiz << endl;
   return 0;
}
*/

// VERSI�N B

/*

// Funci�n para calcular la ra�z cuadrada y el n�mero de iteraciones
void RaizCuadWilkes(double real, double &raiz, int &iteraciones) {

   const double EPSILON = 1e-15;  
   raiz = real;                             // Aproximaci�n inicial de la ra�z cuadrada
   double c = real - 1;                     
   iteraciones = 0;                         

   // M�todo iterativo de Wilkes
   do {
      raiz = raiz - raiz * c / 2;          // Actualizar la aproximaci�n
      c = c * c * (c - 3) / 4;             // Actualizar la correcci�n
      iteraciones++;                       
   } while (abs(c) >= EPSILON);             // Continuar hasta que la correcci�n sea menor que EPSILON
}

int main() {
   double real, raiz;
   int iteraciones;

   cout.precision(15);  // Ajustar la precisi�n de los valores mostrados
   cout << "Algoritmo de Wilkes para el c�lculo de la ra�z cuadrada\n\n"
      << "Introduzca un n�mero real r verificando 0 < r < 3 -> ";

   do {
      cin >> real;                              // Leer el valor del usuario
   } while (real <= 0 || real >= 3);           // Validar que el n�mero est� en el intervalo (0, 3)

   RaizCuadWilkes(real, raiz, iteraciones);

   cout << "Ra�z cuadrada de " << real << ": " << raiz << "\n"
      << "N�mero de iteraciones necesarias: " << iteraciones << endl;

   return 0;
}
*/

// VERSI�N C

// Funci�n RaizCuadWilkes
void RaizCuadWilkes(double dato, double &raiz, int &n_iterac, bool &error) {
   const double EPSILON = 1e-15;
   error = false;
   raiz = dato;
   double c;

   // Verificar si el dato est� en el intervalo v�lido
   if (dato <= 0 || dato >= 3) {
      error = true;
      return;
   }

   // Inicializar variables
   c = dato - 1;
   n_iterac = 0;

   // Iterar hasta que la correcci�n sea menor que EPSILON
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
   cout << "Algoritmo de Wilkes, Wheeler y Gill, para el c�mputo de la ra�z cuadrada\n\n"
      << "Introduzca un n�mero real r verificando 0 < r < 3 -> ";

   cin >> dato;

   // Llamar a la funci�n RaizCuadWilkes
   RaizCuadWilkes(dato, raiz, n_iterac, error);

   if (error)
      cout << "\nError: el n�mero debe estar en el intervalo (0, 3)";
   else
      cout << "\n\nRa�z cuadrada de " << dato << " calculada con sqrt: " << sqrt(dato)
         << "\nAproximaci�n de la ra�z cuadrada de " << dato << ": " << raiz
         << "\nN�mero de iteraciones: " << n_iterac;

   cout << "\n";
   return 0;
}



