////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Sobre la base del ejercicio 32 [Mensaje inicial] , se
le pide que implemente las funciones que haya diseñado y construya un programa de
prueba que lea desde teclado el carácter que se usará para enmarcar. A continuación
lea un dato de tipo string con la función LeeString vista en el ejercicio 22 [Diseño
de funciones sobre cadenas] (use como terminador el carácter @).
Si lo desea, puede usar el esbozo del programa que puede encontrar en el siguiente
enlace (el enlace contiene la definición de algunas de las funciones necesarias)

El programa debe mostrar en pantalla la cadena enmarcada con dicho carácter. 
Necesitará usar los siguientes recursos sobre una variable cadena de tipo string:
• La expresión cadena.size() devuelve un entero con la longitud actual de la
variable cadena
• La sentencia cadena.push_back(caracter); añade caracter (de tipo
char) al final de cadena
• La expresión cadena + otra_cadena devuelve un nuevo string con la concatenación de ambas cadenas.
*/

#include <iostream>
#include <string>
using namespace std;

// Función para leer un string hasta un carácter terminador
string LeeString(char terminador) {
   string cadena;
   char caracter;

   caracter = cin.get();        
     
   while (caracter != terminador) {           // Continuar hasta el terminador
      cadena.push_back(caracter);            // Añadir el carácter al final de la cadena
      caracter = cin.get();                  // Leer el siguiente carácter
   }

   return cadena;
}

// Función que repite un carácter un número de veces
string RepiteCaracter(char caracter, int numeroCaracteres) {
   string resultado;
   for (int i = 0; i < numeroCaracteres; i++) {
      resultado.push_back(caracter);            // Añadir el carácter repetidamente
   }
   return resultado;
}

// Función para enmarcar un mensaje con un carácter
string Enmarca(string mensaje, char caracter) {
   int longitud = mensaje.size();  // Longitud del mensaje
   string marco = RepiteCaracter(caracter, longitud + 4);  // Marco superior e inferior
   string mensajeEnmarcado;

   mensajeEnmarcado += marco + "\n";                      // Añadir marco superior
   mensajeEnmarcado += caracter;                          // Añadir carácter izquierdo
   mensajeEnmarcado += " " + mensaje + " ";               // Añadir mensaje con espacio
   mensajeEnmarcado += caracter + "\n";                   // Añadir carácter derecho
   mensajeEnmarcado += marco;                             // Añadir marco inferior

   return mensajeEnmarcado;
}

// Función principal
int main() {
   char car_marco;
   const char TERMINADOR = '@';
   string msj;

   cout << "Enmarca\n";
   cout << "Introduzca un carácter para enmarcar: ";
   car_marco = cin.get();  // Leer el carácter de marco

   // Limpiar el buffer 
   cin.ignore();

   cout << "Introduzca los caracteres del mensaje usando como terminador el carácter " 
      << TERMINADOR << ":\n";

   msj = LeeString(TERMINADOR);

   // Enmarca el mensaje 
   string mensajeEnmarcado = Enmarca(msj, car_marco);

    
   cout << "\n" << mensajeEnmarcado << "\n";

   return 0;
}

