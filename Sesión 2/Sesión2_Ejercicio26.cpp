////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Construya un programa que lea un car�cter (supondremos 
que el usuario introduce una may�scula), lo pase a min�scula y lo imprima en
pantalla. H�galo sin usar las funciones toupper ni tolower declaradas en cctype.
Para ello, debe considerarse la relaci�n que hay en C++ entre los tipos enteros y 
caracteres
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
   
   char mayuscula,minuscula; /* Char almacena un valor entero */
   
   cout << "Introduzca un caracter(Mayuscula): ";
   cin >> mayuscula; 
   
   minuscula = mayuscula + ('a'-'A');
   
   cout << "La letra en minuscula es: " << minuscula;
   
   return 0; 
}
