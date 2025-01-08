////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

// (Examen Extraordinario 2023)

/*
La mezcla ordenada de vectores se
aplica a dos vectores ya ordenados con el prop�sito de conseguir un tercer vector
mezcla ordenado con todos los valores presentes en ambos vectores. Una forma de
hacerlo es copiar los dos vectores en el tercero y luego ordenarlo, pero es ineficiente
y por tanto no lo vamos a hacer as�. El procedimiento que se le pide que implemente
consiste en comparar por turno dos valores, uno de cada vector, y a�adir a mezcla
el menor. El mayor valor de los dos se mantiene para la siguiente comparaci�n y se
toma el siguiente valor del otro vector. Este proceso se repite hasta que uno de los
dos vectores se haya procesado completamente. Entonces se copia en mezcla ,por
orden, lo que queda del otro vector.

Por ejemplo, dados los vectores [2,4] y [1,8,9] se empezar�a comparando el 2
con el 1 y guardando en mezcla el menor de ambos, 1. A continuaci�n se compara
2 con 8 y se guarda el 2. Cuando se guarde el 4 (el primer vector est� procesado
completamente) mezcla contendr� los valores [1,2,4] y faltar�n por procesar los
dos �ltimos valores del segundo vector, por lo que se volcar�n en mezcla. El resultado
ser� el vector [1,2,4,8,9].

Escriba un programa que lea un entero util_v1 y a continuaci�n tantos enteros
como indique el valor de util_v1 y asigne dichos valores a las componentes de un
vector v1. Haga lo mismo con otro entero util_v2 y otro vector v2. Mezcle ambos
vectores en un tercero y muestre el resultado por pantalla.

Supondremos que el usuario introduce correctamente los valores de los vectores de
forma ordenada creciente.
En la implementaci�n de este ejercicio tendr� que escribir estructuras de control muy
similares. No se preocupe al repetir ese c�digo ya que a�n no dispone de 
las herramientas necesarias para evitarlo.
*/


#include <iostream>
using namespace std;

int main(){
   // Declaraci�n de  variables
   const int SIZE = 100;
   int v1[SIZE], v2[SIZE], v3[SIZE * 2];  // v3 puede tener hasta (util1 + util2)
   int util1, util2;
    
   // 1. Lectura del tama�o y valores del primer vector
   do {
      cout << "Introduce la cantidad de valores del primer vector (Maximo 50): ";
      cin >> util1;
   } while (util1 > 50);
    
   cout << "Introduce los valores del primer vector (ordenados en forma creciente):\n";
   for(int i = 0; i < util1; i++){
      cin >> v1[i];
   }
    
   // 2. Lectura del tama�o y valores del segundo vector
   do {
      cout << "Introduce la cantidad de valores del segundo vector (Maximo 50): ";
      cin >> util2;
   } while (util2 > 50);
    
   cout << "Introduce los valores del segundo vector (ordenados en forma creciente):\n";
   for(int i = 0; i < util2; i++){
      cin >> v2[i];
   }
    
   // 3. Mezcla ordenada de los dos vectores
   int i1 = 0;       // �ndice para v1
   int i2 = 0;       // �ndice para v2
   int i3 = 0;       // �ndice para v3 (vector mezcla)
    
   // Mientras haya elementos en ambos vectores
   while (i1 < util1 && i2 < util2) {
      if (v1[i1] <= v2[i2]) {
         v3[i3] = v1[i1];
         i1++;
      } else {
         v3[i3] = v2[i2];
         i2++;
      }
      i3++;
   }
    
   // Si quedaron elementos en el primer vector, los copiamos
   while (i1 < util1) {
      v3[i3] = v1[i1];
      i1++;
      i3++;
   }
    
   // Si quedaron elementos en el segundo vector, los copiamos
   while (i2 < util2) {
      v3[i3] = v2[i2];
      i2++;
      i3++;
   }
    
   // 4. Mostrar resultado
   cout << "\nEl vector mezcla es: ";
   for(int i = 0; i < (util1 + util2); i++){
      cout << v3[i] << " ";
   }
   cout << endl;

   return 0;
}







