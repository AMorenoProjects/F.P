////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Recupere la soluci�n del ejercicio 10 [Conversi�n de grados a
radianes] de la Relaci�n de Problema I. Si lo desea, puede usar el c�digo disponible
en el siguiente enlace:
----- ---- -----
Modifique dicho c�digo para que el programa principal llame a una funci�n
ToRadianes que haga la conversi�n de grados a radianes.

*/

#include <iostream>
#include <cmath>
using namespace std;

// Prototipo de la funci�n
double ToRadianes(double grados);

// Definici�n de la funci�n
double ToRadianes(double grados) {
    return (grados * M_PI) / 180.0; 
}

int main() {
    double grados;
    
    cout << "Introduzca los grados que desea convertir a radianes: ";
    cin >> grados;

    double radianes = ToRadianes(grados);

    cout << "De " << grados << " grados pasamos a " << radianes << " radianes." << endl;

    return 0;
}
