////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Se quiere calcular la m�xima nota media de evaluaci�n continua de un conjunto de
alumnos. Para ello, se anota en un fichero un n�mero entero con el c�digo del alumno
y las notas que ha conseguido. El n�mero de notas puede variar de un alumno a otro,
por lo que se terminar� la introducci�n de las notas con un -1. La entrada de datos
finaliza con el c�digo de alumno 0.
Cree un programa que lea las notas desde la entrada por defecto, y calcule el alumno
con mayor nota media. Puede suponer que los datos de entrada son siempre correctos.
Por ejemplo, para el siguiente registro de entradas, el alumno con m�xima nota es el
que tiene identificador 17 con una nota media de 9.5
*/

#include <iostream>
using namespace std;

int main() {
    int codigo, nota;
    int maxCodigo,sumaNotas,contadorNotas;
    double maxMedia;

    cout << "Introduzca el codigo del alumno y sus calificaciones (finalice con -1 para las notas y 0 para el c�digo para terminar):" << endl;
    cin >> codigo;
    
    maxCodigo=0;
    contadorNotas=0;
    sumaNotas=0;
    maxMedia=0.0;

    while (codigo != 0) {
         cout << "Introduza una nota: " << endl;
         cin >> nota;

         while (nota != -1) {
            sumaNotas += nota;
            contadorNotas++;
            cin >> nota;  
        }

         if (contadorNotas > 0) {
            double media = (double)(sumaNotas) / contadorNotas;

            if (media > maxMedia) {
                maxMedia = media;
                maxCodigo = codigo;
            }
        }
         
         cout << "Introudca el codigo del alumno: " << endl;
         cin >> codigo;
    }

    if (maxCodigo != 0) {
        cout << "El alumno con mayor nota media es: " << maxCodigo << " con una media de " << maxMedia << endl;
    } else {
        cout << "No hay alumnos registrados." << endl;
    }

    return 0;
}

