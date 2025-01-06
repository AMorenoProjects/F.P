////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Vamos a trabajar con una clase
GeneradorAleatorioEnteros que me va a permitir generar secuencias de
números aleatorios enteros en un rango de valores. 
l objetivo de este ejercicio es que aprenda a utilizar sus métodos 
sin que necesite entender cómo están implementados. Por lo tanto, 
basta con que entienda las cabeceras
de los constructores y del método Siguiente. Veámoslo.
Esta clase tiene dos constructores.
a) Uno de los constructores no tiene parámetros. Lo usaremos cuando 
queramos generar únicamente ceros y unos, por lo que construiríamos 
el objeto en la siguiente forma:

// Constructor sin parámetros
GeneradorAleatorioEnteros aleat_0_1;

b) El otro constructor tiene dos parámetros, min y max que delimitan el rango 
correspondiente de valores aleatorios a generar. Por ejemplo, si quisiéramos un
objeto para generar números de la lotería primitiva (entre 1 y 49) tendríamos que
poner lo siguiente:

// Constructor con parámetros
GeneradorAleatorioEnteros aleat_loteria(1, 49);

Cada vez que se llame al método Siguiente, éste devolverá un valor aleatorio en el
rango especificado. Para generar, por ejemplo, los 6 números de la primitiva haríamos
lo siguiente:

for (int i = 0; i < 6; i++)
cout << aleat_loteria.Siguiente();

Utilice esta clase para hacer lo siguiente: En primer lugar debe generar un número
aleatorio entre 1 y 5 (llámelo num_valores_a_generar) 
Muéstrelo por pantalla. 
A continuación debe generar tantos números aleatorios entre 0 y 1 como indique el 
anterior valor num_valores_a_generar. Muestre por pantalla los valores generados.
Haga lo anterior 4 veces.
*/

#include <iostream>
using namespace std;


// GeneradorAleatorioEnteros

#include <random>   // para la generación de números pseudoaleatorios
#include <chrono>   // Para la semilla

using namespace std;
using namespace chrono;

class GeneradorAleatorioEnteros{
private:
   int min, max;
   uniform_int_distribution<int> distribucion_uniforme;
public:
   GeneradorAleatorioEnteros()
      :GeneradorAleatorioEnteros(0, 1){
   }

   // Prec: minimo <= maximo
   GeneradorAleatorioEnteros(int minimo, int maximo){
      this->min = minimo;
      this->max = maximo;
      distribucion_uniforme = uniform_int_distribution<int> (min, max);
   }

   int Siguiente(){
      static mt19937_64 generador_mersenne;   // generador compartido por todas las instancias
      static bool primera_vez = true;

      if (primera_vez){
         time_point <steady_clock> ahora = steady_clock::now();  // Método estático de la clase
         duration<long long int, nano> intervalo_nanoseg = ahora.time_since_epoch() ; 
         unsigned int semilla = intervalo_nanoseg.count();       // unsigned int = lon long int  
         generador_mersenne.seed(semilla);   // La semilla ha de ser un entero SIN signo
         primera_vez = false;
      } 
      
      return distribucion_uniforme(generador_mersenne);
   }
   
   int Min(){
      return min;
   }
   
   int Max(){
      return max;
   }
};

int main() {
   // Creo el objeto 
   GeneradorAleatorioEnteros rangoGeneracion(1, 5);   // Constructor con parámetros
    
   for (int i = 0; i < 4; i++) {
        
      int num_valores_a_generar = rangoGeneracion.Siguiente();
        
      cout << "Numero de valores a generar: " << num_valores_a_generar << endl;

      GeneradorAleatorioEnteros generador0_1;  // Constructor sin parámetros

      // Generar números aleatorios entre 0 y 1 
      cout << "Valores generados: ";
      for (int j = 0; j < num_valores_a_generar; j++) {
         cout << generador0_1.Siguiente() << " ";
      }
      cout << endl << endl;
   }

   return 0;
}




