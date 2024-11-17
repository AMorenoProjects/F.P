////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/* Construya un programa para redondear un n�mero real a cualquier cifra 
decimal. Por ejemplo:
 El resultado de redondear 3.49 a la primera cifra decimal es 3.5
 El resultado de redondear 3.49 a la segunda cifra decimal es 3.49
 El resultado de redondear 3.496 a la segunda cifra decimal es 3.5*/
 
#include <iostream>
#include <cmath>
using namespace std;

int main(){
   
   double numero;
   int n; /* Siendo n el n�mero de decimales a los que se quiere aproximar*/
   double redondeo;
   
   cout << "\nIntroduzca un numero: ";
   cin >> numero;
   
   cout << "\nIntroduzca el numero de decimales que desea:";
   cin >> n;
   
   redondeo = round(numero * pow(10,n))/pow(10,n);
   
   cout << "\nEl resultado de redondear "<<numero<< " es: " << redondeo;
   
   return 0;
}
