////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
En este ejercicio se pide que
defina las cabeceras de varios métodos. No debe implementar ninguno de los métodos.
 Sólo se pide que escriba las cabeceras y cómo sería la llamada a dichos métodos
desde otro sitio (por ejemplo, desde el main) pero no tiene que construir un programa
completo que compile.
En el ejercicio 24 [DoubleToString] de esta Relación de Problemas habíamos 
transformado un real a una cadena de caracteres (redondeando previamente el real a cierto
número de cifras decimales) Vamos a extender esta funcionalidad.
Dado un dato de tipo double, queremos formatearlo adecuadamente y construir un
dato de tipo string, especificando lo siguiente:
• Un delimitador a la izquierda y otro a la derecha.
• Si el separador es el punto o la coma.
• Número de decimales a obtener.
Por ejemplo, si el delimitador izquierda se fija a la cadena "<<", el derecha a ">>",
el separador de decimales a la coma y el número de decimales a 7, el resultado de
formatear el número real 0.12345678 sería la cadena "<<0,1234568>>"
Si quisiéramos realizar la conversión con una función, su cabecera podría ser la siguiente:
string DoubleToString (double real,
string delim_izda, string delim_dcha,
char caracter_separador,
int num_decim_redond)
Una llamada de ejemplo sería la siguiente:
cadena = DoubleToString(0.12345678, "<<", ">>", '.', 7);
cadena = DoubleToString(37.5467891, "<<", ">>", '.', 7);
Lo que se pide en este ejercicio es resolver el mismo problema pero diseñando una
clase FormateadorDoubles. El objetivo es que la conversión se realice a través de
un método GetCadena de la siguiente forma:

int main(){
FormateadorDoubles formateador(...);
...
cadena = formateador.GetCadena(0.12345678);
cadena = formateador.GetCadena(37.5467891);
Debe decidir qué parámetros pasamos en el constructor y qué métodos públicos tendría la clase.
En el diseño de esta clase debe decidir:
• ¿Algún dato miembro tiene un valor por defecto?
• ¿Cómo se especificarán los delimitadores (izquierda y derecha) y el separador
(punto o coma)?
• ¿Cuántos constructores va a necesitar?, etc.
Incluya el código de cómo sería un programa principal de prueba. Recuerde que no
se le pide implementar la clase, sólo que diseñe las cabeceras de los métodos.
Finalidad: Diseño de una clase. Dificultad Media

*/

#include <iostream>
#include <string>
using namespace std;

class FormateadorDoubles {
private:
   string delimitadorIzquierda; // Delimitador izquierdo
   string delimitadorDerecha;   // Delimitador derecho
   char separadorDecimal;       // Separador decimal ('.' o ',')
   int numDecimales;            // Número de decimales a redondear

public:
   // Constructor por defecto
   FormateadorDoubles();

   // Constructor con parámentros
   FormateadorDoubles(string delim_izda, string delim_dcha, char separador = '.', int decimales = 2);

   // Métodos setters para actualizar los parámetros de formateo
   void SetDelimitadores(string delim_izda, string delim_dcha);
   void SetSeparadorDecimal(char separador);
   void SetNumDecimales(int decimales);

   // Métodos getters para obtener los valores actuales de los parámetros
   string GetDelimitadorIzquierda() const;
   string GetDelimitadorDerecha() const;
   char GetSeparadorDecimal() const;
   int GetNumDecimales() const;

   // Método principal para convertir un número real a una cadena formateada
   string GetCadena(double real) const;
};




