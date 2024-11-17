////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Construya un programa que lea un carácter (supondremos 
que el usuario introduce una mayúscula), lo pase a minúscula y lo imprima en
pantalla. Hágalo sin usar las funciones toupper ni tolower declaradas en cctype.
Para ello, debe considerarse la relación que hay en C++ entre los tipos enteros y 
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
