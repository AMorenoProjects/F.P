////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Recupere la solución del ejercicio 19 [Divisores de un entero] de la Relación de Problema II.

Modifíquelo para separar los cómputos de las entradas y salidas de datos. Para ello,
se pide que cada vez que encuentre un divisor lo guarde en un vector divisores.
Una vez construido el vector, en un bucle aparte, debe imprimir sus componentes en
pantalla.
*/

/*
#include <iostream>
#include <vector>  
using namespace std;

int main() {
    int entero, divisor;
    vector<int> divisores;  // Vector que crece dinámicamente

    cout << "Divisores de un entero\n\n";

    do {
        cout << "Introduce un numero entero mayor que 0: ";
        cin >> entero;
    } while (entero <= 0);

    cout << "\n\nDivisores de " << entero << ":\n\n";

    divisor = 1;


    while (divisor <= entero) {
        if (entero % divisor == 0) {
            divisores.push_back(divisor); // push_back agrega elementos al final del vector
        }
        divisor++;
    }


    for (int j = 0; j < divisores.size(); j++) { // size devuelve el número de elementos actualmente almacenados en el vector.
        cout << divisores[j] << " ";
    }
    cout << endl;

    return 0;
}
*/

int main(){
   int numero;
   const int MAX_DIVISORES = 100;
   int divisores[MAX_DIVISORES];
   int contador = -1;
   
   //Filtro
   do{
      
   }
   
   for(int i=2;i < numero;i++){
      if (numero % 1 ==0){
         divisores[contador++] = i;
      }
   }
   
   contador = contador -1;
   
   for(int i=0;i < contador;i++){
      cout << divisores[i] << " ";
   }
   
   
   return 0;
}
