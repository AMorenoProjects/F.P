////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Se quiere generalizar el ejercicio 16 que intercambiaba el
valor de dos variables al caso de tres variables. Construya un programa que declare
las variables x, y, z, lea su valor desde teclado e intercambien entre sí sus valores de
forma que el valor de x pasa a y, el de y pasa a z y el valor de z pasa a x (se pueden
declarar variables auxiliares aunque se pide que se use el menor número posible).
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
   
   double num1,num2,num3,auxiliar1,auxiliar2;
   
   cout << "Dame el primer valor: ";
   cin >> num1;
   cout << "Dame el segundo valor: ";
   cin >> num2;
   cout << "Dame el tercer valor: ";
   cin >> num3;
   
   auxiliar1 = num1;
   auxiliar2 = num2;
   num1 = num3;
   num2 = auxiliar1;
   num3 = auxiliar2;
   
   cout << "Hemos cambiado el orden de sus numeros, quedando de la siguiente manera: ";
   cout << num1 << " " << num2 << " " << num3;
   
   return 0;
}
