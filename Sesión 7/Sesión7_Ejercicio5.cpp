////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Dado un vector de enteros v y dado un número T,
se quiere ver si hay una serie consecutiva de elementos del vector que sume T. Por
ejemplo, si v = [4,1,3,9,2,-20]:
• Si T = 6, no hay ninguna secuencia.
• Si T = 12, sí hay. Sería la secuencia [3,9]
• Si T = 14, sí hay. Sería la secuencia [3,9,2]
Construya un programa que lea los datos en el siguiente orden:
a) En primer lugar, el número n de elementos que se van a introducir
b) En segundo lugar, los n enteros (puede haber positivos y negativos)
c) Finalmente, el valor T
El programa debe imprimir en pantalla el índice en el que comienza la secuencia.
*/

#include <iostream>
using namespace std;

int main(){
   const int MAX_SIZE = 101;
   int vectorPrincipal[MAX_SIZE];
   int nElementos,numeros,T; 
   int contador = 0;
   bool encontrado = false;
   int indiceInicio = 0;
   
   cout << "Introduzca el numero de elementos del vector"<<endl;
   cout << "'n' debe ser menor o igual a 100\n n: ";
   cin >> nElementos;
   
   cout << "Introduzca los numeros de su array: ";
   for(int i=0;i<nElementos;i++){
      cin >> numeros;
      vectorPrincipal[i] = numeros;
   }
   
   cout << "Introduzca el valor de T: ";
   cin >> T;
   
   for(int i = 0; i < nElementos && !encontrado;i++){
      int suma = 0;
      
      for (int j = i; j < nElementos && !encontrado; j++) {
         suma += vectorPrincipal[j];
         if(suma == T){
            encontrado = true;
            indiceInicio = i; 
         }
      }
   } 
   
   if (encontrado) {
      cout << "La secuencia que suma " << T << " comienza a partir del indice: " << indiceInicio << endl;
   } else {
      cout << "No hay ninguna secuencia que sume " << T << "." << endl;
   }

   return 0;
   
}
