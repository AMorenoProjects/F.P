////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
En el ejercicio 19
[Elimina ocurrencias de una componente -versión ineficiente-] de la Relación de Problemas III se vio cómo 
eliminar todas las apariciones que hubiese de un determinado
carácter a_borrar, dentro de un vector de caracteres.
Por ejemplo, después de eliminar el carácter 'o' del vector
{'S','o','Y',' ','y','o'}
éste debe quedarse con:
{'S','Y',' ','y'}.
Un algoritmo (muy ineficiente) que resolvía este problema era el siguiente:

Recorrer todas las componentes del vector
Si la componente es igual al carácter a_borrar, eliminarla
(desplazando hacia la izda las componentes que hay a su dcha)
Una posible implementación del anterior algoritmo en un programa que trabaja directamente con un vector 
declarado dentro del main.
Lo que queremos hacer ahora es implementar esta funcionalidad dentro de la clase
SecuenciaCaracteres.

Por lo tanto, se pide que añada el método EliminaOcurrencias para eliminar todas
las apariciones de un determinado carácter a_borrar. El método debe modificar la
secuencia sobre la que se aplica.
Hágalo implementando el algoritmo anterior, aunque sea ineficiente. Para ello, 
dentro del método EliminaOcurrencias, debe llamar dentro de un bucle al método
Elimina (que borra un único carácter). 

La implementación del método Elimina se
encuentra en el código base de la clase SecuenciaCaracteres proporcionado anteriormente.
Incluya un programa principal de prueba similar al del ejercicio 19 [Elimina ocurrencias
de una componente -versión ineficiente-] de la Relación de Problemas III, de forma
que los caracteres que se vayan leyendo hasta llegar al terminador # se van añadiendo 
al objeto de la clase SecuenciaCaracteres. El programa leerá a continuación
el carácter a eliminar y llamará al método EliminaOcurrencias, imprimiendo en
pantalla el resultado.

? Ejemplo de entrada: maaaovaiala#a
? Salida correcta: movil
? Ejemplo de entrada: aaaaa#a
? Salida correcta: secuencia vacía
*/


#include <iostream>
#include <string>
using namespace std;

class SecuenciaCaracteres {
private:
   static const int TAMANIO = 2e7; 
   char v[TAMANIO];
   int util;

   bool _EsCorrecta(int posicion) {
      return 0 <= posicion && posicion < util;
   }

public:
   //Constructor
   SecuenciaCaracteres(){
      util = 0;
   }

   int Utilizados() {
      return util;
   }

   int Capacidad() {
      return TAMANIO;
   }

   void EliminaTodos() {
      util = 0;
   }
    
   // Añade un caracter a la secuencia
   void Adicion(char nuevo) {
      if (util < TAMANIO) {
         v[util] = nuevo;
         util++;
      }
   }

   void Modifica(int posicion, char nuevo) {
      if (_EsCorrecta(posicion))      
         v[posicion] = nuevo;
   }

   char Elemento(int indice) {
      return v[indice];
   }

   string ToString() {
      string cadena;
      cadena.reserve(util);
      for (int i = 0; i < util; i++)
         cadena.push_back(v[i]);
      return cadena;
   }

   void Elimina(int posicion) {
      if (_EsCorrecta(posicion)) {
         for (int i = posicion; i < util - 1; i++)
            v[i] = v[i + 1];
            util--;
      }
   }

   void EliminaOcurrencias(char a_borrar) {
      int i = 0;
      while (i < util) {
         if (v[i] == a_borrar)
            Elimina(i);            // Elimina y no incrementa `i` porque los elementos se desplazan
         else
            i++;                   // Incrementa solo si no se eliminó
      }
   }
};

int main() {
   const char TERMINADOR = '#';
   SecuenciaCaracteres secuencia;
   char caracter, a_borrar;

   // Leer caracteres hasta el terminador
   cout << "Introduza los caracteres(el terminador es '#'): " << endl;
   caracter = cin.get();
   
   while (caracter != TERMINADOR) {
      secuencia.Adicion(caracter);
      caracter = cin.get();
   }

   // Leer el carácter a borrar
   cout << "Introduzca el caracter a borrar: " << endl;
   cin >> a_borrar;

   // Llamar al método EliminaOcurrencias
   secuencia.EliminaOcurrencias(a_borrar);

   // Imprimir la cadena resultante
   cout << "\n\nCadena resultante: " << secuencia.ToString() << endl;

   return 0;
}

