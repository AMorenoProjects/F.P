////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Un banco presenta la siguiente oferta. Si se deposita una cantidad
de euros dada por la variable capital durante un a�o a plazo fijo, se dar� un inter�s
dado por la variable interes. Realice un programa que lea una cantidad capital y
un inter�s interes desde teclado. A continuaci�n, el programa debe calcular en una
variable total el dinero que se tendr� al cabo de un a�o, aplicando la f�rmula de
abajo e imprimir� el resultado en pantalla.

Utilice el tipo de dato double para todas las variables. Supondremos que el usuario
introduce el inter�s como un valor real entre 0 y 100, es decir, un inter�s del 5.4 %
se introducir� como 5.4. Tambi�n supondremos que lo introduce correctamente, es
decir, que s�lo introducir� valores entre 0 y 100.
Observe que para implementar la f�rmula anterior, 
debemos usar el operador de divisi�n que en C++ es /, por lo que nos quedar�a:

total = capital + capital * interes / 100;

Es importante destacar que el compilador primero evaluar� la expresi�n de la parte
derecha de la anterior asignaci�n (usando el valor que tuviese la variable capital) y
a continuaci�n ejecutar� la asignaci�n, escribiendo el valor resultante de la expresi�n
dentro de la variable total.

En la asignaci�n que calcula la variable total, �se podr�a sustituir dicha variable por
capital? es decir:

capital = capital + capital * interes / 100;
*/

#include <iostream>
using namespace std;

int main(){
   
   const int CIEN = 100;
   double capital, interes;
   
   cout << "Introduzca el capital inicial: " << endl;
   cin >> capital;
   
   cout << "Con que interes: " << endl;
   cin >> interes;
   
   capital = capital + capital * interes / CIEN;
   
   cout << "Al cabo de 365 dias obtendra: " << capital;
   
   return 0; 
}




