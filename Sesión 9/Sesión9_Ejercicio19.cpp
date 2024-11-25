////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Defina una función LeeIntMayorIgual para
leer un entero mayor o igual que un número dado (éste será un parámetro a la función). 
Para ello, dicha función debe ir leyendo números enteros (de tipo int) desde la
entrada por defecto, hasta que se lea un valor correcto que sea mayor o igual que el
número especificado. La función devolverá dicho valor.
Construya un programa que haga lo siguiente:
• Lea un primer entero min sin ninguna restricción.
• Lea un segundo entero max obligando a que sea mayor o igual que min (debe
usar la función LeeIntMayorIgual)
• Lea un número entero n obligando a que esté en el intervalo [min, max]. Para
ello, debe usar la función LeeIntRango definida en el ejercicio 18 [Lee entero
en rango] . Imprima en pantalla el último valor (el que pasa el filtro y está dentro
del intervalo [min, max]).
*/

#include <iostream>
using namespace std;


//Prototipo de Función
int LeeIntRango(int min, int max, string mensaje);
int LeeIntMayorIgual(int minimo, string mensaje);

// Declaración de la función 'LeeIntMayorIgual'
int LeeIntMayorIgual(int minimo, string mensaje){
   int maximo;
   
   do{
      cout << mensaje;
      cin >> maximo;
   } while(maximo < minimo);

   return maximo;
}

// Declaración de la función 'LeeIntRango'
int LeeIntRango(int min, int max, string mensaje) {
   int a_leer;
   
   do{
      cout << mensaje;
      cin >> a_leer;
   }while (min > a_leer || max < a_leer);
   
   return a_leer;
}


int main(){
   int minimo,maximo,numero;
   
   cout << "Introduzca el valor minimo: ";
   cin >> minimo;
   
   maximo = LeeIntMayorIgual(minimo,"Introduzca un valor máximo: ");
   
   numero = LeeIntRango(minimo,maximo,"Introduza un numero entre el intervalo designado: ");
   
   cout << "Usted designo el numero " << numero << " entre el intercalo [" << minimo << "," << maximo << "]";
   
   return 0;
}


