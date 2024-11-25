////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Defina una funci�n LeeIntMayorIgual para
leer un entero mayor o igual que un n�mero dado (�ste ser� un par�metro a la funci�n). 
Para ello, dicha funci�n debe ir leyendo n�meros enteros (de tipo int) desde la
entrada por defecto, hasta que se lea un valor correcto que sea mayor o igual que el
n�mero especificado. La funci�n devolver� dicho valor.
Construya un programa que haga lo siguiente:
� Lea un primer entero min sin ninguna restricci�n.
� Lea un segundo entero max obligando a que sea mayor o igual que min (debe
usar la funci�n LeeIntMayorIgual)
� Lea un n�mero entero n obligando a que est� en el intervalo [min, max]. Para
ello, debe usar la funci�n LeeIntRango definida en el ejercicio 18 [Lee entero
en rango] . Imprima en pantalla el �ltimo valor (el que pasa el filtro y est� dentro
del intervalo [min, max]).
*/

#include <iostream>
using namespace std;


//Prototipo de Funci�n
int LeeIntRango(int min, int max, string mensaje);
int LeeIntMayorIgual(int minimo, string mensaje);

// Declaraci�n de la funci�n 'LeeIntMayorIgual'
int LeeIntMayorIgual(int minimo, string mensaje){
   int maximo;
   
   do{
      cout << mensaje;
      cin >> maximo;
   } while(maximo < minimo);

   return maximo;
}

// Declaraci�n de la funci�n 'LeeIntRango'
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
   
   maximo = LeeIntMayorIgual(minimo,"Introduzca un valor m�ximo: ");
   
   numero = LeeIntRango(minimo,maximo,"Introduza un numero entre el intervalo designado: ");
   
   cout << "Usted designo el numero " << numero << " entre el intercalo [" << minimo << "," << maximo << "]";
   
   return 0;
}


