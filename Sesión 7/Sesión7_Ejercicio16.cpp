////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Dados dos vectores grande y peque de
tipo char, queremos comprobar si el primero contiene al 
segundo de la siguiente forma: todos los caracteres de peque tienen que aparecer en grande en el
mismo orden, aunque no tienen por qué estar consecutivos. 
Por ejemplo, el vector grande = {'d','e','s','t','i','n','o'} contiene débilmente al vector
peque = {'s','i'} pero no a peque = {'i','s'}.
Construya un programa que lea desde teclado los caracteres del vector grande, 
parando la entrada cuando se introduzca el carácter #. Haga lo mismo para introducir los
caracteres del vector peque. El programa indicará si el vector grande contiene o no
al vector peque.
Para leer los caracteres (incluído el espacio en blanco), haga uso de la instrucción
caracter = cin.get() (en vez de cin >> caracter) tal y como se indica en
la página Problemas-68.
*/

#include <iostream>
using namespace std;

int main() {
   const int MAX_SIZE = 1000;
   char grande[MAX_SIZE];
   char peque[MAX_SIZE];
   char caracter;
   int contador1 = 0; // Tamaño del vector grande
   int contador2 = 0; // Tamaño del vector peque
   int i = 0;                   // Índice para 'grande'
   int j = 0;                   // Índice para 'peque'

   cout << "Usando '#' finaliza la entrada" << endl;
   cout << "Introduzca los caracteres para el vector grande: ";
   cin.get(caracter);
   while (caracter != '#' && contador1 < MAX_SIZE) {
      grande[contador1] = caracter;
      contador1++;
      cin.get(caracter);
   }

   cout << "Introduzca los caracteres para el vector peque: ";
   cin.get(caracter);
   while (caracter != '#' && contador2 < MAX_SIZE) {
      peque[contador2] = caracter;
      contador2++;
      cin.get(caracter);
   }

   while (i < contador1 && j < contador2) {
      if (grande[i] == peque[j]) {
      j++;                                         // Avanzo en el vector pequeño si se encuentra alguna coincidencia
      }
      i++;                                             // Avanzo en el vector grande
   }

    
   if (j == contador2) {              //Si j tiene el tamaño del vector peque todos los caracteres se encontraron en orden
      cout << "El vector grande contiene al vector peque en orden." << endl;
   } else {
      cout << "El vector grande no contiene al vector peque en orden." << endl;
   }

   return 0;
}
