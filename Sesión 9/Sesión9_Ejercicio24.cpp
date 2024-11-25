////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
La funci�n to_string de C++11 es muy �til ya que permite convertir un real en una cadena de caracteres. 
Por ejemplo, to_string(23.51) devuelve
la cadena "23.510000". Esta funci�n tiene dos inconvenientes:
a) Siempre fija un redondeo a seis cifras decimales.
b) No suprime los ceros finales de la cadena de caracteres.
Lo que vamos a hacer en este ejercicio es definir nuestra propia funci�n
DoubleToString que nos permitir�:
a) Redondear a cualquier n�mero de cifras decimales (con la restricci�n de que
debe ser menor o igual que 6) Si el n�mero de cifras decimales es mayor o igual
que 6, la funci�n redondear� a la sexta cifra decimal.
b) Eliminaremos los ceros finales.
Para ello, basta hacer lo siguiente:
� Redondear el real usando la funci�n Redondea del ejercicio 12 [Decimal redondeado]
� Convertir el resultado a string usando la funci�n to_string
� Eliminar los caracteres finales que sean '0' con la funci�n EliminaUltimos
del ejercicio 23 [Uso de funciones sobre cadenas]
� En el caso de que nos hubiesen pasado un real sin parte decimal, como por
ejemplo el 4.0, la cadena resultante no deber�a ser "4." sino "4". Para quitar
ese punto final, puede usar la misma funci�n EliminaUltimos.
Construya un programa que lea un real, un n�mero de cifras decimales e imprima la
cadena resultante de llamar a la funci�n DoubleToString.
Si lo desea, puede usar el esbozo del programa que puede encontrar en el siguiente
enlace (en dicho enlace puede encontrar la implementaci�n de las funciones necesarias para resolver la tarea pedida)

*/



#include <cmath>
#include <iostream>
#include <string>

using namespace std;

// Prototipos de las funciones
double PotenciaEntera(double base, int expon);
double Redondea(double real, int num_decimales);
string EliminaUltimos(string cadena, char a_borrar);
string DoubleToString(double real, int decimales);

// Implementaci�n de la funci�n para calcular potencias enteras
double PotenciaEntera(double base, int expon) {
   double pot;
   int expon_positivo;

   if (base == 0 && expon == 0)
      pot = NAN;  // Devuelve NAN (Indeterminaci�n)
   else {
      expon_positivo = abs(expon);
      pot = 1;

      for (int i = 1; i <= expon_positivo; i++)
         pot = pot * base;
   }

   if (expon < 0)
      pot = 1 / pot;

   return pot;
}

// Implementaci�n de la funci�n para redondear
double Redondea(double real, int num_decimales) {
   double real_redondeado;
   long long desplazamiento;

   desplazamiento = PotenciaEntera(10, num_decimales);
   real_redondeado = round(real * desplazamiento);
   real_redondeado = real_redondeado / desplazamiento;

   return real_redondeado;
}

// Implementaci�n de la funci�n para eliminar caracteres finales
string EliminaUltimos(string cadena, char a_borrar) {
   while (!cadena.empty() && cadena.back() == a_borrar)
      cadena.pop_back();

   return cadena;
}

// Implementaci�n de la funci�n DoubleToString
string DoubleToString(double real, int decimales) {
   // Redondear el n�mero a la cantidad deseada de decimales
   double redondeado = Redondea(real, decimales);

   // Convertir el n�mero redondeado a string usando to_string
   string cadena = to_string(redondeado);

   // Eliminar los ceros finales
   cadena = EliminaUltimos(cadena, '0');

   // Si la cadena termina con un punto, eliminarlo
   if (!cadena.empty() && cadena.back() == '.')
      cadena.pop_back();

   return cadena;
}

// Programa principal
int main() {
   double real;
   int num_decimales;
   string cadena;

   cout << "Redondeo a un n�mero de decimales\n\n"
      << "Introduzca un real y el n�mero de decimales a redondear\n\n";

   cin >> real;
   cin >> num_decimales;

   cadena = DoubleToString(real, num_decimales);

   cout << "Redondeado con cout      " << Redondea(real, num_decimales) << "\n"
      << "to_string:               " << to_string(real) << "\n"
      << "DoubleToString :         " << cadena << "\n";

   return 0;
}

