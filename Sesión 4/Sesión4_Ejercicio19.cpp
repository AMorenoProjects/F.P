////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Realice un programa que lea desde teclado un entero e imprima en 
pantalla todos sus divisores positivos propios. 

Recuerde que los divisores propios de un entero n son los divisores de n distintos de 1 y el mismo n. 

Para obtener los divisores, basta recorrer todos los enteros menores que el valor introducido
y comprobar si lo dividen. A continuación, mejorar el ejercicio para que la lectura del
entero se realice usando un filtro con un bucle post test (do while), obligando a que
sea positivo.
En este ejercicio, como en muchos otros de esta Relación de Problemas, tendrá que
mezclar entradas y salidas de datos con los cómputos. En el tema III, cuando se vean
los vectores, podrá separar ambas tareas.
*/

#include <iostream>
using namespace std;

int main(){
   int entero;
   
   do{
      cout << "Introduzca un numero entero positivo: ";
      cin >> entero;
   } while ( entero <= 0);
   
   cout << "Los divisores de " << entero << " son: " << endl;
   
   for(int i = 2; i < entero;i++){
      if(entero%i==0){
         cout << i << endl;
      }
   }
   return 0;
}
