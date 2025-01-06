////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Considere la siguiente definición de la clase Cronometro:
class Cronometro{
private:
   ...
public:
   void Reset(){
      ...
   }  
   long long NanoSegundosTranscurridos(){
      ...
   }
};
Esta clase sirve para medir el tiempo de ejecución de un conjunto de instrucciones.
Para usarla, haga copy-paste del código que se puede encontrar en el siguiente enlace
(no olvide insertar también los #include que aparecen al inicio.):
No hace falta que entienda el código de la clase sino únicamente cómo utilizar sus 
métodos públicos. Para ello, basta crear un objeto de esta clase y justo antes del 
conjunto de instrucciones que queramos cronometrar, debemos ejecutar el método Reset. 
Justo después de las instrucciones, llamaremos al método
NanoSegundosTranscurridos para saber el número de nanosegundos transcurridos. 
El cronómetro seguirá en marcha (por lo que podremos llamar al método
NanoSegundosTranscurridos tantas veces como queramos) hasta que se resetee de 
nuevo con el método Reset.
Se pide añadir un nuevo método MiliSegundosTranscurridos para saber cuántos milisegundos 
han transcurrido. Este método debe llamar al anterior.
Recupere alguna de las soluciones de los ejercicios de la Relación de Problemas III
y mida los tiempos de ejecución. Por ejemplo, realice 10 millones de iteraciones en el
bucle que calcula el valor de p según se vio en el ejercicio 31 [Aproximación de p por
Madhava sin usar pow] y cuya solución se encuentra en el siguiente enlace:

*/

#include <chrono>
#include <iostream>
#include <cmath>
using namespace std;

class Cronometro {
private:
   typedef std::chrono::time_point<std::chrono::steady_clock> Punto_en_el_Tiempo;
   typedef chrono::duration<long long, nano> IntervaloTiempo;

   Punto_en_el_Tiempo inicio;
   Punto_en_el_Tiempo final;

public:
   void Reset() {
      inicio = chrono::steady_clock::now();
   }

   long long NanoSegundosTranscurridos() {
      final = chrono::steady_clock::now();
      IntervaloTiempo diferencia = final - inicio;
      return diferencia.count();
   }

   double MiliSegundosTranscurridos() {
      return NanoSegundosTranscurridos() / 1e6; // Conversión de nanosegundos a milisegundos
   }
};

int main() {
   const int TOPE_MAXIMO = 1e+7; // Máximo índice de iteraciones
   int tope;
   
   const double X_MADHAVA_PI = 1 / sqrt(3);
   double suma = 0;
   double numerador = X_MADHAVA_PI;
   double denominador = 1.0;
   int signo = 1;

   // Configuración del formato de salida
   cout.precision(15);

   // Pedir al usuario el número de iteraciones
   cout << "Aproximacion del valor de Pi por Madhava";
   cout << "\nIntroduzca el indice de la ultima iteracion (< "
      << TOPE_MAXIMO << ")\n";

   do {
      cin >> tope;
   } while (tope <= 0 || tope > TOPE_MAXIMO);

   Cronometro crono; // Crear objeto Cronometro

   // Iniciar cronometraje
   crono.Reset();

   // Cálculo de p por Madhava
   for (int i = 0; i <= tope; i++) {
      suma = suma + signo * numerador / denominador;
      numerador = numerador * X_MADHAVA_PI * X_MADHAVA_PI;
      denominador = denominador + 2.0;
      signo = -signo;
   }

   double pi_aproximado = 6 * suma;

   // Medir tiempo transcurrido
   double tiempo_milisegundos = crono.MiliSegundosTranscurridos();

   // Mostrar resultados
   cout << "\nAproximación de PI por Madhava: " << pi_aproximado;
   cout << "\nTiempo de ejecución: " << tiempo_milisegundos << " ms\n";

   return 0;
}





