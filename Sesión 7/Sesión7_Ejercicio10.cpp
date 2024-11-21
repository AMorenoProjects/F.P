////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
En este ejercicio vamos a contar el n�mero de ocurrencias
de ciertos caracteres en un texto.
El programa leer� una serie de caracteres hasta llegar al terminador @. 
Estos caracteres se introducir�n en un vector llamado a_buscar. A continuaci�n, el programa
leer� otro conjunto de caracteres hasta llegar al terminador @ y se almacenar�n en un
vector llamado texto. Supondremos que los caracteres introducidos son de la tabla
ASCII (no se introducir�n vocales acentuadas, la �, etc)
Para leer los caracteres (inclu�do el espacio en blanco), haga uso de la instrucci�n
caracter = cin.get() (en vez de cin >> caracter) tal y como se indica en
la p�gina Problemas-68.
Una vez le�dos los dos vectores, el programa debe calcular la frecuencia (el n�mero
de ocurrencias) de cada uno de los caracteres del vector a_buscar dentro del vector
texto y almacenar dichos conteos en un vector frecuencias. Declare el vector
frecuencias con un m�ximo de 256 componentes (tantas como caracteres hay en
la tabla ASCII). Finalmente el programa imprimir� en pantalla los conteos correspondientes.
Si lo desea, puede usar el esbozo del programa que puede encontrar en el siguiente
enlace:
https://decsai.ugr.es/jccubero/FP/III_FrecuenciasEsbozo.cpp
Se le pide que resuelva este problema de dos formas distintas:
� El vector frecuencias contendr� las frecuencias de todos los caracteres de
texto (sin tener en cuenta que est�n o no en el vector a_buscar).
En este caso, la componente i del vector frecuencias contendr� la frecuencia del car�cter que tiene como orden i en la tabla ASCII. Por ejemplo,
frecuencias[66] contendr� el n�mero de ocurrencias del car�cter 'B' dentro de texto (da igual si dicho caracter est� o no en el vector a_buscar).
� El vector frecuencias contendr� s�lo las frecuencias de los caracteres de
texto que est�n en el vector a_buscar.
En este caso, la componente i del vector frecuencias contendr� la frecuencia
del car�cter a_buscar[i] (el n�mero de ocurrencias dentro del vector texto).

Por ejemplo, si el vector a_buscar contiene los caracteres ['a' , 'J'], entonces frecuencias[0] contendr� la frecuencia de 'a' y frecuencias[1]
contendr� la frecuencia de 'J'.
? Ejemplo de entrada: JasP@Juan Carlos Cubero@
? Salida correcta:
J: 1 a: 2 s: 1 P: 0
Observe que el orden de salida de las frecuencias coincide con el orden en el que se
introdujeron los caracteres del vector a_buscar.

*/

#include <iostream>
using namespace std;

int main() {
    const int MAX_COMPONENTES = 256;    
    const int MAX_SIZE = 1000;          
    char a_buscar[MAX_SIZE];            
    char texto[MAX_SIZE];               
    int frecuencias[MAX_COMPONENTES] = {0}; // Inicializamos frecuencias a cero
    char caracter;                      
    int contador1 = 0;                  
    int contador2 = 0;                  

    cout << "Usando '@' finaliza" << endl;

    
    cout << "Introduzca los valores del primer vector: ";
    cin.get(caracter);
    while (caracter != '@' && contador1 < MAX_SIZE) {
        a_buscar[contador1] = caracter;
        contador1++;
        cin.get(caracter);
    }

    
    cout << "Introduzca los valores del segundo vector: ";
    cin.get(caracter);
    while (caracter != '@' && contador2 < MAX_SIZE) {
        texto[contador2] = caracter;
        contador2++;
        cin.get(caracter);
    }

    
    for (int i = 0; i < contador2; i++) {
        if (texto[i] >= 0 && texto[i] < MAX_COMPONENTES) {           // Comprobamos que el car�cter est� en el rango ASCII
            frecuencias[texto[i]]++;                                 // Incrementamos la frecuencia en la posici�n ASCII correspondiente
        }
    }

    
    cout << "\nFrecuencias de los caracteres en a_buscar:\n";
    for (int i = 0; i < contador1; i++) {
        caracter = a_buscar[i];
        if (caracter >= 0 && caracter < MAX_COMPONENTES) {  
            cout << caracter << " : " << frecuencias[caracter] << "\n";
        }
    }

    return 0;
}






