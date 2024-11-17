////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Una compañía aérea quiere aplicar una política de descuentos al precio 
final de un billete. Por un lado, si el número de puntos 
del cliente es alto se le aplicará un descuento del 4%. Por otro lado, si 
es un trayecto largo, se le aplicará un descuento del 2%. En este ejercicio 
no vamos a detectar si el cliente tiene muchos o pocos puntos o si el 
trayecto es largo o corto. Lo único que se le pide es que construya un 
programa que lea el precio del billete y aplique e imprima el resultado de
aplicar el descuento por los puntos y luego el descuento por el trayecto. 
Por otra parte, tenga en cuenta que los descuentos no se acumulan.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
   
   const double DES_P = 0.96, DES_L = 0.98;
   double tInicial,tFinal;
   
   cout << "Inserte el precio de su tarifa: ";
   cin >> tInicial;
   
   cout<<"Su tarifa con el descuento de puntos es de: "<<(tInicial*DES_P) << " Euros";
   cout<<"\nSu tarifa con el descuento de distancia es de: "<<(tInicial*DES_L) << " Euros";
   
   return 0;
   
}
