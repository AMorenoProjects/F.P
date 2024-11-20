////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Construya un programa que lea el valor tope obligando a que esté entre 1 y cien mil,
calcule la aproximación de p mediante la anterior serie e imprima el resultado en pantalla. 
Esta serie converge mucho más rápido a p que las de los ejercicios anteriores.

Importante: En la implementación de esta solución NO puede usar la función pow ni
ningún condicional if. Se le pide expresamente que para el cómputo de cada término,
intente aprovechar los cómputos realizados en la iteración anterior
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

