////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Vamos a trabajar con una clase
GeneradorAleatorioEnteros que me va a permitir generar secuencias de
n�meros aleatorios enteros en un rango de valores. 
l objetivo de este ejercicio es que aprenda a utilizar sus m�todos 
sin que necesite entender c�mo est�n implementados. Por lo tanto, 
basta con que entienda las cabeceras
de los constructores y del m�todo Siguiente. Ve�moslo.
Esta clase tiene dos constructores.
a) Uno de los constructores no tiene par�metros. Lo usaremos cuando 
queramos generar �nicamente ceros y unos, por lo que construir�amos 
el objeto en la siguiente forma:

// Constructor sin par�metros
GeneradorAleatorioEnteros aleat_0_1;

b) El otro constructor tiene dos par�metros, min y max que delimitan el rango 
correspondiente de valores aleatorios a generar. Por ejemplo, si quisi�ramos un
objeto para generar n�meros de la loter�a primitiva (entre 1 y 49) tendr�amos que
poner lo siguiente:

// Constructor con par�metros
GeneradorAleatorioEnteros aleat_loteria(1, 49);

Cada vez que se llame al m�todo Siguiente, �ste devolver� un valor aleatorio en el
rango especificado. Para generar, por ejemplo, los 6 n�meros de la primitiva har�amos
lo siguiente:

for (int i = 0; i < 6; i++)
cout << aleat_loteria.Siguiente();

Utilice esta clase para hacer lo siguiente: En primer lugar debe generar un n�mero
aleatorio entre 1 y 5 (ll�melo num_valores_a_generar) 
Mu�strelo por pantalla. 
A continuaci�n debe generar tantos n�meros aleatorios entre 0 y 1 como indique el 
anterior valor num_valores_a_generar. Muestre por pantalla los valores generados.
Haga lo anterior 4 veces.
*/

#include <iostream>
using namespace std;


// GeneradorAleatorioEnteros

#include <random>   // para la generaci�n de n�meros pseudoaleatorios
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
         time_point <steady_clock> ahora = steady_clock::now();  // M�todo est�tico de la clase
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
   GeneradorAleatorioEnteros rangoGeneracion(1, 5);   // Constructor con par�metros
    
   for (int i = 0; i < 4; i++) {
        
      int num_valores_a_generar = rangoGeneracion.Siguiente();
        
      cout << "Numero de valores a generar: " << num_valores_a_generar << endl;

      GeneradorAleatorioEnteros generador0_1;  // Constructor sin par�metros

      // Generar n�meros aleatorios entre 0 y 1 
      cout << "Valores generados: ";
      for (int j = 0; j < num_valores_a_generar; j++) {
         cout << generador0_1.Siguiente() << " ";
      }
      cout << endl << endl;
   }

   return 0;
}




