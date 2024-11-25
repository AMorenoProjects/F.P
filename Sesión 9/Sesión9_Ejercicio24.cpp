////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
La función to_string de C++11 es muy útil ya que permite convertir un real en una cadena de caracteres. 
Por ejemplo, to_string(23.51) devuelve
la cadena "23.510000". Esta función tiene dos inconvenientes:
a) Siempre fija un redondeo a seis cifras decimales.
b) No suprime los ceros finales de la cadena de caracteres.
Lo que vamos a hacer en este ejercicio es definir nuestra propia función
DoubleToString que nos permitirá:
a) Redondear a cualquier número de cifras decimales (con la restricción de que
debe ser menor o igual que 6) Si el número de cifras decimales es mayor o igual
que 6, la función redondeará a la sexta cifra decimal.
b) Eliminaremos los ceros finales.
Para ello, basta hacer lo siguiente:
• Redondear el real usando la función Redondea del ejercicio 12 [Decimal redondeado]
• Convertir el resultado a string usando la función to_string
• Eliminar los caracteres finales que sean '0' con la función EliminaUltimos
del ejercicio 23 [Uso de funciones sobre cadenas]
• En el caso de que nos hubiesen pasado un real sin parte decimal, como por
ejemplo el 4.0, la cadena resultante no debería ser "4." sino "4". Para quitar
ese punto final, puede usar la misma función EliminaUltimos.
Construya un programa que lea un real, un número de cifras decimales e imprima la
cadena resultante de llamar a la función DoubleToString.
Si lo desea, puede usar el esbozo del programa que puede encontrar en el siguiente
enlace (en dicho enlace puede encontrar la implementación de las funciones necesarias para resolver la tarea pedida)

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

// Implementación de la función para calcular potencias enteras
double PotenciaEntera(double base, int expon) {
   double pot;
   int expon_positivo;

   if (base == 0 && expon == 0)
      pot = NAN;  // Devuelve NAN (Indeterminación)
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

// Implementación de la función para redondear
double Redondea(double real, int num_decimales) {
   double real_redondeado;
   long long desplazamiento;

   desplazamiento = PotenciaEntera(10, num_decimales);
   real_redondeado = round(real * desplazamiento);
   real_redondeado = real_redondeado / desplazamiento;

   return real_redondeado;
}

// Implementación de la función para eliminar caracteres finales
string EliminaUltimos(string cadena, char a_borrar) {
   while (!cadena.empty() && cadena.back() == a_borrar)
      cadena.pop_back();

   return cadena;
}

// Implementación de la función DoubleToString
string DoubleToString(double real, int decimales) {
   // Redondear el número a la cantidad deseada de decimales
   double redondeado = Redondea(real, decimales);

   // Convertir el número redondeado a string usando to_string
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

   cout << "Redondeo a un número de decimales\n\n"
      << "Introduzca un real y el número de decimales a redondear\n\n";

   cin >> real;
   cin >> num_decimales;

   cadena = DoubleToString(real, num_decimales);

   cout << "Redondeado con cout      " << Redondea(real, num_decimales) << "\n"
      << "to_string:               " << to_string(real) << "\n"
      << "DoubleToString :         " << cadena << "\n";

   return 0;
}

