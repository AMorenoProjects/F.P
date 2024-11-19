////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Un n�mero entero de n d�gitos se dice que es narcisista si se
puede obtener como la suma de las potencias n-�simas de cada uno de sus d�gitos.
Por ejemplo 153 y 8208 son n�meros narcisistas porque 153 = 1^3+5^3+3^3
(153 tiene
3 d�gitos) y 8208 = 8^4 + 2^4 + 0^4 + 8^4
(8208 tiene 4 d�gitos). Construya un programa
que, dado un n�mero entero positivo, nos indique si el n�mero es o no narcisista.

*/

#include <iostream>
#include <cmath> 
using namespace std;

int main(){
    const int CERO = 0, DIEZ = 10;
    int numeroNarcisista, numeroCopia, digitos, cifra, suma;

    cout << "Introduzca un numero: ";
    cin >> numeroNarcisista;

    digitos = 0;
    numeroCopia = numeroNarcisista;
    while (numeroCopia > 0) {
        numeroCopia /= DIEZ;
        digitos++;
    }

    suma = CERO;
    numeroCopia = numeroNarcisista; 
    
    for (int i = 0; i < digitos; i++) {
        cifra = numeroCopia % DIEZ; 
        numeroCopia /= DIEZ;        
        suma += pow(cifra, digitos); 
    }

    if (suma == numeroNarcisista) {
        cout << "El numero ES narcisista" << endl;
    } else {
        cout << "El numero NO ES narcisista" << endl;
    }

    return 0;
}

