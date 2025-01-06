////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Trabaje sobre la clase
SecuenciaCaracteres tal y como viene descrita arriba. Añádale métodos para
realizar las siguientes tareas (descritas en el ejercicio 2 [Palíndromo e Invierte] de la
Relación de Problemas III)

• EsPalindromo para comprobar si la secuencia es o no un palíndromo.

• Invierte para invertir la secuencia. Este método modificará la secuencia sobre
la que se aplica. Para implementarlo, desde dentro del método, debe llamar a
IntercambiaComponentes

• Supongamos que decidimos cambiar el método IntercambiaComponentes y
hacer que sea público en vez de privado. ¿Añadiría o quitaría algo en la implementación del método?

Incluya un programa principal de prueba similar al del ejercicio 2 [Palíndromo e Invierte] 
de la Relación de Problemas III. Así pues, el programa debe ir leyendo caracteres e
introduciéndolos en un objeto de la clase SecuenciaCaracteres. Use como terminador el 
carácter #. Una vez hecho esto, llame al método Palindromo. Si la secuencia es un palíndromo 
se mostrará en pantalla el mensaje "Es un palíndromo". En caso contrario debe llamar al método 
Invierte y mostrar en pantalla la secuencia invertida.
*/

#include <iostream>
#include <string>
using namespace std;

class SecuenciaCaracteres {
private:
    static const int TAMANIO = 100;    // Tamaño máximo de la secuencia
    char vector[TAMANIO];              // Almacén de los caracteres
    int utilizados;                    // Número de caracteres utilizados

    // Método para intercambiar dos posiciones en el vector
    void IntercambiaComponentes(int i, int j) {
        char temp = vector[i];
        vector[i] = vector[j];
        vector[j] = temp;
    }

public:
   //Constructor
   SecuenciaCaracteres(){
      utilizados = 0;
   }

   // Añade un carácter a la secuencia
   void Adicion(char c) {
      if (utilizados < TAMANIO) {
         vector[utilizados] = c;
         utilizados++;
      }
   }


   int Utilizados(){
      return utilizados;
   }

   int Capacidad(){
      return TAMANIO;
   }

   // Retorna el carácter en una posición específica
   char Elemento(int index){
      if (index >= 0 && index < utilizados) {
         return vector[index];
      }
      return '\0'; // Retorna un carácter nulo si el índice no es válido
   }

   // Convierte la secuencia a una cadena para su impresión
   string ToString(){
      string resultado;
      for (int i = 0; i < utilizados; i++) {
         resultado += vector[i];
      }
      return resultado;
   }
    
   // Comprueba si la secuencia es un palíndromo
   bool EsPalindromo(){
      int izquierda = 0;
      int derecha = utilizados - 1;
      while (izquierda < derecha) {
         if (vector[izquierda] != vector[derecha]) {
            return false;
         }
         
         izquierda++;
         derecha--;
      }
      return true;
    }

   // Invierte la secuencia
   void Invierte() {
      int izquierda = 0;
      int derecha = utilizados - 1;
      while (izquierda < derecha) {
         IntercambiaComponentes(izquierda, derecha);
         izquierda++;
          derecha--;
      }
  }
};

int main() {
   const char TERMINADOR = '#';
   SecuenciaCaracteres secuecia;
   char caracter;

   cout << "Introduzca una secuencia de caracteres (terminada en '#'):\n";

   // Leer caracteres hasta el terminador o alcanzar el tamaño máximo
   caracter = cin.get();
   
   while (caracter != TERMINADOR && secuencia.Utilizados() < secuencia.Capacidad()) {
      secuencia.Adicion(caracter);
      caracter = cin.get();
   }

   // Comprobar si es palíndromo
   if (secuencia.EsPalindromo()) {
      cout << "Es un palíndromo\n";
  } else {
      cout << "No es un palíndromo\n";
      secuencia.Invierte();
      cout << "Secuencia invertida: " << secuencia.ToString() << endl;
   }

   return 0;
}


