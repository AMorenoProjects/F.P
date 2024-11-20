////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Diremos que un número n > 1 es perfecto si es igual a la suma de todos sus divisores
positivos (incluyendo el 1) excepto él mismo. Por ejemplo, el 6 es perfecto ya que sus
divisores son 1, 2 y 3 y se cumple que 6=1+2+3.
Construya un programa principal que lea un entero cualquiera min desde teclado
obligando a que sea mayor o igual que 1 y otro entero max obligando a que sea mayor
o igual que min. El programa debe mostrar todos los números perfectos que hay entre
min y max.
*/

#include <iostream>
using namespace std;

int main(){
    int maximo, minimo;

    do {
        cout << "Introduzca el numero minimo (Mayor o igual a 1): ";
        cin >> minimo;
    } while (minimo < 1);

    do {
        cout << "Introduzca el numero maximo (Mayor o igual a " << minimo << "): ";
        cin >> maximo;
    } while (maximo < minimo);

    for (int i = minimo; i <= maximo; i++) {
        int suma = 0;

        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                suma += j;
            }
        }

        if (i == suma) {
            cout << "El numero " << i << " es perfecto" << endl;
        }
    }

    return 0;
}
