////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Construya un programa que lea el valor tope obligando a que est� entre 1 y cien mil,
calcule la aproximaci�n de p mediante la anterior serie e imprima el resultado en pantalla. 
Esta serie converge mucho m�s r�pido a p que las de los ejercicios anteriores.

Importante: En la implementaci�n de esta soluci�n NO puede usar la funci�n pow ni
ning�n condicional if. Se le pide expresamente que para el c�mputo de cada t�rmino,
intente aprovechar los c�mputos realizados en la iteraci�n anterior
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int tope;
    double pi, cociente, termino;
    
    //Entrada de datos
    do {
        cout << "Introduzca un numero entre 1 y 100.000: ";
        cin >> tope;
        if (tope < 1 || tope > 100000) {
            cout << "Error: El numero debe estar entre 1 y 100.000.\n";
        }
    } while (tope < 1 || tope > 100000);
    
    pi = 0.0;
    cociente = 1 / sqrt(3);
      
    // Comienza con cociente^1
    double cociente_potencia = cociente;  
    // Alternar signo (-1)^i
    int signo = 1;  
    
    for (int i = 0; i <= tope; i++) {
        termino = signo * cociente_potencia / (2 * i + 1);
        pi += termino;

        cociente_potencia *= cociente * cociente;  
        signo = -signo;  
    }
    
    pi *= 6;
    
    cout.precision(15);
    cout << fixed << "El valor aproximado de pi es: " << pi << endl;
    
    return 0;
}

