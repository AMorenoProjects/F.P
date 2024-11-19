////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Realice un programa que lea 5 enteros desde teclado y
calcule el m�nimo de dichos valores (pueden ser positivos o negativos). Realice la
lectura de los enteros dentro de un bucle sobre una �nica variable llamada n.
? Ejemplo de entrada: 1 3 -1 -4 7
? Salida correcta: M�nimo: -4
Una vez hecho lo anterior, implemente un c�digo para ir leyendo valores enteros hasta
introducir un cero. Debe calcular cu�ntos se han introducido y cual es el m�nimo de
dichos valores (pueden ser positivos o negativos).
A continuaci�n, lea valores hasta que se introduzca el cero o cualquier entero positivo.
Muestre tambi�n cu�ntos se han introducido y cual es el m�nimo de dichos valores.

*/

#include <iostream>
using namespace std;

int main(){
   int numero,min,nIntroducidos;
   
   cout << "introduzca un numero: ";
   cin >> numero;
   min = numero;
   
   nIntroducidos = 0;
   
   while (numero < 0){
      nIntroducidos++;
      
      if(numero < min){
         min = numero;
      }
      
      cout << "introduzca un numero: ";
      cin >> numero;
   }
   
   cout << "Usted a introducido " << nIntroducidos << " valores validos" << endl;
   cout << "El valor minimo es: " << min;
   

   return 0;
}
