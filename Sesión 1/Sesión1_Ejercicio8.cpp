////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Un banco presenta la siguiente oferta. Si se deposita una cantidad
de euros dada por la variable capital durante un año a plazo fijo, se dará un interés
dado por la variable interes. Realice un programa que lea una cantidad capital y
un interés interes desde teclado. A continuación, el programa debe calcular en una
variable total el dinero que se tendrá al cabo de un año, aplicando la fórmula de
abajo e imprimirá el resultado en pantalla.

Utilice el tipo de dato double para todas las variables. Supondremos que el usuario
introduce el interés como un valor real entre 0 y 100, es decir, un interés del 5.4 %
se introducirá como 5.4. También supondremos que lo introduce correctamente, es
decir, que sólo introducirá valores entre 0 y 100.
Observe que para implementar la fórmula anterior, 
debemos usar el operador de división que en C++ es /, por lo que nos quedaría:

total = capital + capital * interes / 100;

Es importante destacar que el compilador primero evaluará la expresión de la parte
derecha de la anterior asignación (usando el valor que tuviese la variable capital) y
a continuación ejecutará la asignación, escribiendo el valor resultante de la expresión
dentro de la variable total.

En la asignación que calcula la variable total, ¿se podría sustituir dicha variable por
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




