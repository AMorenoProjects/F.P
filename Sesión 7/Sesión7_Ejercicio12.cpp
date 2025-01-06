////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Supongamos un vector de enteros relativo a un conjunto de alturas
de un track GPS. Cada entero representa la altura de la posici�n GPS en un instante
dado. Se quiere calcular lo siguiente:

� M�ximo desnivel (m�xima diferencia en valor absoluto) entre dos alturas consecutivas.
Por ejemplo, si el vector es 1 3 2 4 7 5, las diferencias son: 

+2 -1 +2 +3 -2, siendo 3 la m�xima en valor absoluto. Si el vector fuese 1 3 2 4 1 2, 
las diferencias ser�an +2 -1 +2 -3 +1, siendo 3 la m�xima en valor absoluto.

� Desnivel acumulado positivo.
La idea es ir buscando puntos consecutivos en los que la altura vaya aumentando. 
El desnivel acumulado se calcula como la suma de todas esas diferencias
positivas.

Por ejemplo, si el vector es 1 3 2 4 7 5, las diferencias son
+2 -1 +2 +3 -2, por lo que el desnivel acumulado positivo ser� 7 (la
suma de +2 +2 +3)

Construir un programa que, en primer lugar, lea un n�mero entero que indique el n�mero 
de valores de altura que se van a introducir. A continuaci�n el programa leer�
dichos valores y los almacenar� en un vector. El programa calcular� el m�ximo desnivel 
y el desnivel acumulado positivo y los imprimir� en pantalla.

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
   
   cout << "Introduzca el n�mero de valores que desea introducir(Menor a 100): ";
   cin >> maxValores;
   
   cout << "Introduzca los valores deseados: ";
   for(int i=0;i < maxValores;i++){
      cin >> valor;
      cin.ignore();                    // Para que ignore el salto de l�nea
      vAlturas[i] = valor;
   }
   
   // Funci�n que calcula el m�ximo desnivel
   
   int desnivel;
   
   desnivel = maxDesnivel(vAlturas,maxValores);
   
   cout << "El m�ximo desnivel ha sido de: " << desnivel << " metros." << endl;
   
   // Funci�n que calcula el desnivel acumulado Positivo
   
   int desPositivo;
   
   desPositivo = desnivelPositivo(vAlturas,maxValores);
   
   cout << "El desvivel acumulado positivo es de " << desPositivo << " metros" << endl;
   
   return 0;
}









