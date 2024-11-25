////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Construya un programa que lea caracteres hasta llegar al terminador # y construya
una variable llamada original de tipo string. Para ello, debe usar la función
LeeString. A continuación, el programa leerá un carácter y llamará a la función
EliminaUltimos para construir una nueva cadena eliminados. Imprima la cadena resultante.
*/

#include <iostream>
#include <string>

using namespace std;

// Prototipos de funciones
string LeeString();
string EliminaUltimos(string& original, int numEliminar);

// Declaración de la función 'LeeString'
string LeeString() {
    string original;
    char caracter;

    cout << "Ingrese caracteres (termine con '#'): " << endl;

    while (cin >> caracter && caracter != '#') {
        original += caracter;
    }

    return original;
}

// Declaración de la función 'EliminaUltimos'
string EliminaUltimos(string& original, int numEliminar) {
    int nuevaLongitud = original.length() - numEliminar;

    // Si la nueva longitud es menor o igual a 0, devolvemos una cadena vacía
    if (nuevaLongitud <= 0) {
        return "";
    }

    // Crear una nueva cadena con tamaño predefinido
    string resultado = "";
    for (int i = 0; i < nuevaLongitud; i++) {
        resultado += original[i];         // Copiar manualmente los caracteres
    }

    return resultado;
}

int main() {
    string original;
    int numEliminar;

    original = LeeString();

    cout << "Cadena original: " << original << endl;

    cout << "Ingrese el número de caracteres a eliminar del final: ";
    cin >> numEliminar;

    // Construir la nueva cadena eliminada
    string eliminados = EliminaUltimos(original, numEliminar);
    cout << "Cadena resultante: " << eliminados << endl;

    return 0;
}
