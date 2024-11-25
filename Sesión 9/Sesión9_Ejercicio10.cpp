////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Recupere la solución del ejercicio 10 [Conversión de grados a
radianes] de la Relación de Problema I. Si lo desea, puede usar el código disponible
en el siguiente enlace:
----- ---- -----
Modifique dicho código para que el programa principal llame a una función
ToRadianes que haga la conversión de grados a radianes.

*/

#include <iostream>
#include <cmath>
using namespace std;

// Prototipo de la función
double ToRadianes(double grados);

// Definición de la función
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
