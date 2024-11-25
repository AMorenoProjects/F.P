////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Defina una funci�n para intercambiar el contenido de dos variables de tipo real, al estilo de como se hizo en el ejercicio 16 [Intercambiar variables]
Relaci�n de Problemas I.
Si lo desea, puede usar el esbozo del programa que puede encontrar en el siguiente
enlace
https://decsai.ugr.es/jccubero/FP/IV_IntercambiarEsbozo.cpp
*/

#include <iostream>
using namespace std;

// Prototipos de la funciones
void Intercambiar(double& a, double& b);

// Funci�n para intercambiar dos variables reales
void Intercambiar(double& a, double& b) {
   double temp = a; 
   a = b;           
   b = temp;        
}

int main() {
   double prime, segu;

   cout << "Intercambio de variables\n\n"
      << "Introduzca dos variables reales:\n";

   cin >> prime >> segu;


   Intercambiar(prime, segu);

   cout << "\n\nLa primera variable ha cambiado su valor a " << prime
      << " y la segunda a " << segu;

   return 0;
}

