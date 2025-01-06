////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Supongamos un vector de enteros relativo a un conjunto de alturas
de un track GPS. Cada entero representa la altura de la posición GPS en un instante
dado. Se quiere calcular lo siguiente:

• Máximo desnivel (máxima diferencia en valor absoluto) entre dos alturas consecutivas.
Por ejemplo, si el vector es 1 3 2 4 7 5, las diferencias son: 

+2 -1 +2 +3 -2, siendo 3 la máxima en valor absoluto. Si el vector fuese 1 3 2 4 1 2, 
las diferencias serían +2 -1 +2 -3 +1, siendo 3 la máxima en valor absoluto.

• Desnivel acumulado positivo.
La idea es ir buscando puntos consecutivos en los que la altura vaya aumentando. 
El desnivel acumulado se calcula como la suma de todas esas diferencias
positivas.

Por ejemplo, si el vector es 1 3 2 4 7 5, las diferencias son
+2 -1 +2 +3 -2, por lo que el desnivel acumulado positivo será 7 (la
suma de +2 +2 +3)

Construir un programa que, en primer lugar, lea un número entero que indique el número 
de valores de altura que se van a introducir. A continuación el programa leerá
dichos valores y los almacenará en un vector. El programa calculará el máximo desnivel 
y el desnivel acumulado positivo y los imprimirá en pantalla.

*/


#include <iostream>
#include <cmath>
using namespace std;

int maxDesnivel(int v[],int size){
   int comparador,maximo;
   
   maximo = v[0];
   
   for(int i = 0; i < size;i++){
      comparador = abs(v[i]);
      if (comparador > maximo){
         maximo = comparador;
      }
   }
   
   return maximo;
}

int desnivelPositivo(int v[],int size){
   int desnivelAcumulado;
   desnivelAcumulado = 0;

   for(int i=0;i < size;i++){
      if(v[i] > 0){
         desnivelAcumulado = desnivelAcumulado + v[i];
      } 
   }
   return desnivelAcumulado; 
}



int main(){
   
   const int SIZE = 100;
   int vAlturas[SIZE];
   int valor,maxValores;
   
   cout << "Introduzca el número de valores que desea introducir(Menor a 100): ";
   cin >> maxValores;
   
   cout << "Introduzca los valores deseados: ";
   for(int i=0;i < maxValores;i++){
      cin >> valor;
      cin.ignore();                    // Para que ignore el salto de línea
      vAlturas[i] = valor;
   }
   
   // Función que calcula el máximo desnivel
   
   int desnivel;
   
   desnivel = maxDesnivel(vAlturas,maxValores);
   
   cout << "El máximo desnivel ha sido de: " << desnivel << " metros." << endl;
   
   // Función que calcula el desnivel acumulado Positivo
   
   int desPositivo;
   
   desPositivo = desnivelPositivo(vAlturas,maxValores);
   
   cout << "El desvivel acumulado positivo es de " << desPositivo << " metros" << endl;
   
   return 0;
}









