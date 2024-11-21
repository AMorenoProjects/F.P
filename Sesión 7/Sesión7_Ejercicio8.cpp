////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
 Se quiere calcular la moda de un vector de caracteres,
es decir, el carácter que más veces se repite. Por ejemplo, si el vector fuese
{'l','o','s',' ','d','o','s',' ','c','o','f','r','e','s'}
los caracteres que más se repiten son 'o' y 's' con un total de 3 apariciones. La
moda sería cualquiera de ellos, por ejemplo, el primero encontrado 'o'.
Construya un programa que lea caracteres hasta que el usuario introduzca el carácter
#. Almacene todos los valores en un vector de caracteres llamado texto. A continuación, 
calcule la moda y muéstrela en pantalla junto con su frecuencia (el número
de apariciones). Tenga en cuenta que puede haber más de una moda. En ese caso,
puede mostrar cualquiera de ellas.
Para leer los caracteres (incluído el espacio en blanco), haga uso de la instrucción
caracter = cin.get() (en vez de cin >> caracter) tal y como se indica en
la página Problemas-68.
Resuelva este problema utilizando un vector auxiliar conteos para almacenar los
conteos de todos los caracteres. Podemos suponer que el texto sólo contiene caracteres del alfabeto inglés, 
por lo que podemos usar un vector conteos de 256 componentes, de forma que conteos[i] 
contiene el número de veces que el carácter
con orden i en la tabla ASCII está en el texto. Tenga en cuenta que los 31 primeros
caracteres de la tabla ASCII no son imprimibles por lo que puede descartar las 31
primeras posiciones del vector conteos
Por ejemplo, si el texto es AbcAAb, el vector conteos tendrá todas
sus componentes a cero excepto conteos['A'] = conteos[65] = 3,
conteos['b'] = conteos[98] = 2, conteos['c'] = conteos[99] = 1.
Una vez haya almacenado los conteos, recorra el vector para calcular el máximo.
*/

#include <iostream>
using namespace std;

int main() {
   const int MAX_COMPONENTES = 256;
   const int MAX_SIZE = 1000;
   char vectorPrincipal[MAX_SIZE];
   int vectorConteos[MAX_COMPONENTES] = {0};  // Inicializa en 0 todas las posiciones
   char caracter;
   int contador1 = 0;
   int maximo = 0;
   char moda = ' ';                           // Inicializamos con un valor por defecto
    
   cout << "Introduzca una serie de caracteres. Usando '#' finaliza" << endl;
   cin.get(caracter);
   
   while (caracter != '#' && contador1 < MAX_SIZE) {                // Leer caracteres hasta '#' y almacenarlos en `vectorPrincipal`
      vectorPrincipal[contador1] = caracter;
      contador1++;
      cin.get(caracter);  
   }
    
   for (int i = 0; i < contador1; i++) {              // Contar las veces que aparece cada carácter en `vectorConteos`
      int indice = vectorPrincipal[i];  
      vectorConteos[indice]++;                            // Incrementar contador del carácter
   }                                            

   for (int i = 32; i < MAX_COMPONENTES; i++) {                      // Ignoramos caracteres no imprimibles
      if (vectorConteos[i] > maximo) {
         maximo = vectorConteos[i];
         moda = i;                                                   // Asignamos el carácter correspondiente
      }
   }
    
   if (maximo > 0) {
      cout << "La moda es el caracter: '" << moda << "' con " << maximo << " apariciones" << endl;
   } else {
      cout << "No se encontraron caracteres válidos en la entrada." << endl;
   }
    
   return 0;
}




