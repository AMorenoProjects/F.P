////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Construya un programa que lea un real r obligando a que est� en el intervalo (0, 3)
e imprima en pantalla el resultado de aplicar el anterior algoritmo. Pare el proceso iterativo anterior cuando el valor absoluto de cn+1 sea menor que una constante
EPSILON = 1e-15. Imprima tambi�n el valor de la ra�z cuadrada calculado usando
directamente la funci�n sqrt de cmath para as� poder comparar el resultado obtenido.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double real, a_sig, a_prev, c_sig;
    const double EPSILON = 1e-15;

    do {
        cout << "Introduzca un n�mero real r verificando 0 < r < 3: ";
        cin >> real;
        if (real <= 0 || real >= 3) {
            cout << "Error: El numero debe estar entre 0 y 3.\n";
        }
    } while (real <= 0 || real >= 3);

    a_prev = real;
    a_sig = a_prev; 
    c_sig = 1.0;    

    
    while (fabs(c_sig) >= EPSILON) {
        c_sig = (a_sig * a_sig - real) / (2 * a_sig); 
        a_sig = a_sig - c_sig; 
    }

    cout.precision(15);
    cout << "\nRaiz cuadrada de " << real << " calculada con sqrt: " << sqrt(real)
         << "\nAproximaci�n de la raiz cuadrada de " << real << ": " << a_sig << endl;

    return 0;
}

