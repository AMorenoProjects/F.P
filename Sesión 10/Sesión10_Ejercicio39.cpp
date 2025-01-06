////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Sobre la base del ejercicio 32 [Mensaje inicial] , se
le pide que implemente las funciones que haya dise�ado y construya un programa de
prueba que lea desde teclado el car�cter que se usar� para enmarcar. A continuaci�n
lea un dato de tipo string con la funci�n LeeString vista en el ejercicio 22 [Dise�o
de funciones sobre cadenas] (use como terminador el car�cter @).
Si lo desea, puede usar el esbozo del programa que puede encontrar en el siguiente
enlace (el enlace contiene la definici�n de algunas de las funciones necesarias)

El programa debe mostrar en pantalla la cadena enmarcada con dicho car�cter. 
Necesitar� usar los siguientes recursos sobre una variable cadena de tipo string:
� La expresi�n cadena.size() devuelve un entero con la longitud actual de la
variable cadena
� La sentencia cadena.push_back(caracter); a�ade caracter (de tipo
char) al final de cadena
� La expresi�n cadena + otra_cadena devuelve un nuevo string con la concatenaci�n de ambas cadenas.
*/

#include <iostream>
#include <string>
using namespace std;

// Funci�n para leer un string hasta un car�cter terminador
string LeeString(char terminador) {
   string cadena;
   char caracter;

   caracter = cin.get();        
     
   while (caracter != terminador) {           // Continuar hasta el terminador
      cadena.push_back(caracter);            // A�adir el car�cter al final de la cadena
      caracter = cin.get();                  // Leer el siguiente car�cter
   }

   return cadena;
}

// Funci�n que repite un car�cter un n�mero de veces
string RepiteCaracter(char caracter, int numeroCaracteres) {
   string resultado;
   for (int i = 0; i < numeroCaracteres; i++) {
      resultado.push_back(caracter);            // A�adir el car�cter repetidamente
   }
   return resultado;
}

// Funci�n para enmarcar un mensaje con un car�cter
string Enmarca(string mensaje, char caracter) {
   int longitud = mensaje.size();  // Longitud del mensaje
   string marco = RepiteCaracter(caracter, longitud + 4);  // Marco superior e inferior
   string mensajeEnmarcado;

   mensajeEnmarcado += marco + "\n";                      // A�adir marco superior
   mensajeEnmarcado += caracter;                          // A�adir car�cter izquierdo
   mensajeEnmarcado += " " + mensaje + " ";               // A�adir mensaje con espacio
   mensajeEnmarcado += caracter + "\n";                   // A�adir car�cter derecho
   mensajeEnmarcado += marco;                             // A�adir marco inferior

   return mensajeEnmarcado;
}

// Funci�n principal
int main() {
   char car_marco;
   const char TERMINADOR = '@';
   string msj;

   cout << "Enmarca\n";
   cout << "Introduzca un car�cter para enmarcar: ";
   car_marco = cin.get();  // Leer el car�cter de marco

   // Limpiar el buffer 
   cin.ignore();

   cout << "Introduzca los caracteres del mensaje usando como terminador el car�cter " 
      << TERMINADOR << ":\n";

   msj = LeeString(TERMINADOR);

   // Enmarca el mensaje 
   string mensajeEnmarcado = Enmarca(msj, car_marco);

    
   cout << "\n" << mensajeEnmarcado << "\n";

   return 0;
}

