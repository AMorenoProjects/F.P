////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Se quiere calcular la moda de un vector de caracteres. En el ejercicio 8 [Moda con vector de conteos] 
se resolvió este problema utilizando un vector de conteos. Ahora lo vamos a resolver de otra forma. Vamos a usar
un vector auxiliar procesados para almacenar aquellos caracteres cuya frecuencia
ya se ha contado. Por cada carácter del texto original, miraremos primero si está en
ese vector de procesados. Si es así, nos pasaremos al siguiente carácter del texto. En
caso contrario, es un carácter nuevo por lo que porcederemos a contar el número de
ocurrencias y ver si supera al máximo hasta ese momento. El algoritmo nos quedaría
así:
   Recorrer -i- el vector texto
      actual = texto[i]
      Si actual no está en el vector procesados:
         Añadir actual a procesados
         Contar el número de ocurrencias de actual
         en el vector texto (a partir de la posición i)
         y actualizar, en su caso, la moda
Hemos de destacar que para resolver el problema concreto que 
nos ocupa de encontrar el carácter más frecuente de un texto, es más eficiente la solución vista en
el ejercicio 8 [Moda con vector de conteos] ya que únicamente necesita un vector
de 256 componentes y para consultar si una componente del texto ha sido procesada
previamente sólo tenemos que consultar el valor correspondiente del vector conteos
*/

#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 1000;
    char vectorPrincipal[MAX_SIZE];
    char vectorProcesados[MAX_SIZE];         // Almacena caracteres que ya se han contado
    int contadorPrincipal = 0;
    int contadorProcesados = 0;
    bool yaProcesado;
    char caracter;
    // Carácter que será la moda, '\0' es un caracter nulo y asegura que no contiene un valor real al inicio
    char moda = '\0';                        
    int maxFrecuencia = 0;                   // Frecuencia máxima de la moda

    cout << "Introduzca una serie de caracteres. Usando '#' finaliza" << endl;
    cin.get(caracter);

    // Leer caracteres hasta '#' y almacenarlos en vectorPrincipal
    while (caracter != '#' && contadorPrincipal < MAX_SIZE) {
        vectorPrincipal[contadorPrincipal] = caracter;
        contadorPrincipal++;
        cin.get(caracter);  
    }

    // Bucle para contar las ocurrencias de cada carácter
    for (int i = 0; i < contadorPrincipal; i++) {
        char actual = vectorPrincipal[i];
        yaProcesado = false;

        // Verificar si el carácter ya ha sido procesado
        for (int j = 0; j < contadorProcesados; j++) {
            if (vectorProcesados[j] == actual) {
                yaProcesado = true;
            }
        }

        // Si no está en vectorProcesados, procesamos este carácter
        if (!yaProcesado) {
            vectorProcesados[contadorProcesados] = actual;
            contadorProcesados++;

            int frecuencia = 0;
            for (int k = 0; k < contadorPrincipal; k++) {
                if (vectorPrincipal[k] == actual) {
                    frecuencia++;
                }
            }

            // Actualizar la moda si encontramos un carácter con mayor frecuencia
            if (frecuencia > maxFrecuencia) {
                maxFrecuencia = frecuencia;
                moda = actual;
            }
        }
    }

    cout << "La moda es el carácter '" << moda << "' con frecuencia " << maxFrecuencia << "." << endl;

    return 0;
}
