////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/* Construya un programa que lea dos números reales que representarán dos 
 grados. Debe calcular los radianes correspondientes en sendas variables 
 e imprimir el resultado en pantalla. */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
   
   double numeroUno;
   double numeroDos;
   double conversionRadianesUno;
   double conversionRadianesDos;
   double pi;
   
   pi = asin(0.5) * 6;
   
   cout << "\nIntroduzca el valor del primer numero(Grados): ";
   cin >> numeroUno;
   
   cout << "\nIntroduzca el valor del segundo numero(Grados): ";
   cin >> numeroDos;
   
   conversionRadianesUno = (numeroUno * (pi/180));
   conversionRadianesDos = (numeroDos * (pi/180));
   
   cout << "\nComparacion: Grados  Radianes";
   cout << "\n             " << numeroUno  << "      " << conversionRadianesUno;
   cout << "\n             " << numeroDos  << "      " << conversionRadianesDos;

   return 0;
}
