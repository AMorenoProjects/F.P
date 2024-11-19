////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/* 
 Realice un programa que lea dos valores enteros desde teclado y diga si
 cualquiera de ellos divide o no (de forma entera) al otro. En este problema no hace
 falta decir quién divide a quién. Supondremos que los valores leídos desde teclado
 son ambos distintos de cero.
*/

#include <iostream>
using namespace std;

int main(){
   
   int num1,num2,aux;
   
   cout << "Dame el primer numero: ";
   cin >> num1;
   cout << "Dame el segundo numero: ";
   cin >> num2;
  
  if(num1%num2==0 || num2%num1==0){
     cout << "Uno de ellos divide al otro";
  } else{
     cout << "Ninguno divide al otro";
  }
   
   return 0;
}
