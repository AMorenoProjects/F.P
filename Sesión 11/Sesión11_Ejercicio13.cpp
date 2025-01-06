////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
En este ejercicio se pide que
defina las cabeceras de varios m�todos. No debe implementar ninguno de los m�todos.
 S�lo se pide que escriba las cabeceras y c�mo ser�a la llamada a dichos m�todos
desde otro sitio (por ejemplo, desde el main) pero no tiene que construir un programa
completo que compile.
En el ejercicio 24 [DoubleToString] de esta Relaci�n de Problemas hab�amos 
transformado un real a una cadena de caracteres (redondeando previamente el real a cierto
n�mero de cifras decimales) Vamos a extender esta funcionalidad.
Dado un dato de tipo double, queremos formatearlo adecuadamente y construir un
dato de tipo string, especificando lo siguiente:
� Un delimitador a la izquierda y otro a la derecha.
� Si el separador es el punto o la coma.
� N�mero de decimales a obtener.
Por ejemplo, si el delimitador izquierda se fija a la cadena "<<", el derecha a ">>",
el separador de decimales a la coma y el n�mero de decimales a 7, el resultado de
formatear el n�mero real 0.12345678 ser�a la cadena "<<0,1234568>>"
Si quisi�ramos realizar la conversi�n con una funci�n, su cabecera podr�a ser la siguiente:
string DoubleToString (double real,
string delim_izda, string delim_dcha,
char caracter_separador,
int num_decim_redond)
Una llamada de ejemplo ser�a la siguiente:
cadena = DoubleToString(0.12345678, "<<", ">>", '.', 7);
cadena = DoubleToString(37.5467891, "<<", ">>", '.', 7);
Lo que se pide en este ejercicio es resolver el mismo problema pero dise�ando una
clase FormateadorDoubles. El objetivo es que la conversi�n se realice a trav�s de
un m�todo GetCadena de la siguiente forma:

int main(){
FormateadorDoubles formateador(...);
...
cadena = formateador.GetCadena(0.12345678);
cadena = formateador.GetCadena(37.5467891);
Debe decidir qu� par�metros pasamos en el constructor y qu� m�todos p�blicos tendr�a la clase.
En el dise�o de esta clase debe decidir:
� �Alg�n dato miembro tiene un valor por defecto?
� �C�mo se especificar�n los delimitadores (izquierda y derecha) y el separador
(punto o coma)?
� �Cu�ntos constructores va a necesitar?, etc.
Incluya el c�digo de c�mo ser�a un programa principal de prueba. Recuerde que no
se le pide implementar la clase, s�lo que dise�e las cabeceras de los m�todos.
Finalidad: Dise�o de una clase. Dificultad Media

*/

#include <iostream>
#include <string>
using namespace std;

class FormateadorDoubles {
private:
   string delimitadorIzquierda; // Delimitador izquierdo
   string delimitadorDerecha;   // Delimitador derecho
   char separadorDecimal;       // Separador decimal ('.' o ',')
   int numDecimales;            // N�mero de decimales a redondear

public:
   // Constructor por defecto
   FormateadorDoubles();

   // Constructor con par�mentros
   FormateadorDoubles(string delim_izda, string delim_dcha, char separador = '.', int decimales = 2);

   // M�todos setters para actualizar los par�metros de formateo
   void SetDelimitadores(string delim_izda, string delim_dcha);
   void SetSeparadorDecimal(char separador);
   void SetNumDecimales(int decimales);

   // M�todos getters para obtener los valores actuales de los par�metros
   string GetDelimitadorIzquierda() const;
   string GetDelimitadorDerecha() const;
   char GetSeparadorDecimal() const;
   int GetNumDecimales() const;

   // M�todo principal para convertir un n�mero real a una cadena formateada
   string GetCadena(double real) const;
};




