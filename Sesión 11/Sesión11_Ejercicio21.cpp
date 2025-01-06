////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Trabaje sobre la clase
SecuenciaCaracteres tal y como viene descrita arriba. A��dale m�todos para
realizar las siguientes tareas (descritas en el ejercicio 2 [Pal�ndromo e Invierte] de la
Relaci�n de Problemas III)

� EsPalindromo para comprobar si la secuencia es o no un pal�ndromo.

� Invierte para invertir la secuencia. Este m�todo modificar� la secuencia sobre
la que se aplica. Para implementarlo, desde dentro del m�todo, debe llamar a
IntercambiaComponentes

� Supongamos que decidimos cambiar el m�todo IntercambiaComponentes y
hacer que sea p�blico en vez de privado. �A�adir�a o quitar�a algo en la implementaci�n del m�todo?

Incluya un programa principal de prueba similar al del ejercicio 2 [Pal�ndromo e Invierte] 
de la Relaci�n de Problemas III. As� pues, el programa debe ir leyendo caracteres e
introduci�ndolos en un objeto de la clase SecuenciaCaracteres. Use como terminador el 
car�cter #. Una vez hecho esto, llame al m�todo Palindromo. Si la secuencia es un pal�ndromo 
se mostrar� en pantalla el mensaje "Es un pal�ndromo". En caso contrario debe llamar al m�todo 
Invierte y mostrar en pantalla la secuencia invertida.
*/

#include <iostream>
#include <string>
using namespace std;

class SecuenciaCaracteres {
private:
    static const int TAMANIO = 100;    // Tama�o m�ximo de la secuencia
    char vector[TAMANIO];              // Almac�n de los caracteres
    int utilizados;                    // N�mero de caracteres utilizados

    // M�todo para intercambiar dos posiciones en el vector
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

   // A�ade un car�cter a la secuencia
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

   // Retorna el car�cter en una posici�n espec�fica
   char Elemento(int index){
      if (index >= 0 && index < utilizados) {
         return vector[index];
      }
      return '\0'; // Retorna un car�cter nulo si el �ndice no es v�lido
   }

   // Convierte la secuencia a una cadena para su impresi�n
   string ToString(){
      string resultado;
      for (int i = 0; i < utilizados; i++) {
         resultado += vector[i];
      }
      return resultado;
   }
    
   // Comprueba si la secuencia es un pal�ndromo
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

   // Leer caracteres hasta el terminador o alcanzar el tama�o m�ximo
   caracter = cin.get();
   
   while (caracter != TERMINADOR && secuencia.Utilizados() < secuencia.Capacidad()) {
      secuencia.Adicion(caracter);
      caracter = cin.get();
   }

   // Comprobar si es pal�ndromo
   if (secuencia.EsPalindromo()) {
      cout << "Es un pal�ndromo\n";
  } else {
      cout << "No es un pal�ndromo\n";
      secuencia.Invierte();
      cout << "Secuencia invertida: " << secuencia.ToString() << endl;
   }

   return 0;
}


