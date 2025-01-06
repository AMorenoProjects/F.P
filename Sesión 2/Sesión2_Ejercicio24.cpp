////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Se quiere construir un programa que lea un número real r y un
número entero n y trunque r a tantas cifras decimales como indique n. 
El truncamiento consiste en eliminar todos los decimales que hay a partir de n. 
El resultado debe guardarse en otra variable de tipo de dato double. 
Puede usar la función trunc de cmath (elimina la parte real de un número).
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
   double r,factor,truncado;
   int n;
   
   cout << "Introduzca el valor de 'r'(numero real): ";
   cin >> r;
   cout << "Introduzca el valor de 'n'(numero entero): ";
   cin >> n;
   
   factor = pow(10.0,n);
   
   // Primero se multiplica r por los 10^n siendo n el número de decimales elegidos
   // así cuando se trunque, se eliminan los decimales no deseados
   truncado = trunc(r*factor) / factor;
   
   cout << truncado;
   return 0;
}
