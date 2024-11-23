////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Resuelva el mismo problema planteado en el ejercicio 27 [M�ximo de los m�nimos (vs 1)] pero de una forma m�s eficiente en cuanto al
consumo de memoria. Para ello, no va a necesitar almacenar en un vector todos los
m�nimos de cada fila. Basta con calcular el m�nimo de una fila y actualizar, en su caso,
el m�ximo.
*/

#include <iostream>
using namespace std;

int main() {
    const int MAX_FIL = 10, MAX_COL = 10;
    int num_filas, num_columnas;
    int matriz[MAX_FIL][MAX_COL];
    int maximo_de_minimos;
    int pos_fila_max, pos_col_max;
    int pos_col_min;
    int minimo;

    cout << "Introduzca el tama�o de la matriz no mayor a 10 (filas y columnas): ";
    cin >> num_filas >> num_columnas;
    cout << "Introduzca los valores de la matriz: " << endl;
    for (int i = 0; i < num_filas; i++) {
        for (int j = 0; j < num_columnas; j++) {
            cin >> matriz[i][j];
        }
    }

    // Encontrar el m�ximo de los m�nimos sin usar memoria adicional
    for (int i = 0; i < num_filas; i++) {
        minimo = matriz[i][0];                           // Inicializar con el primer elemento de la fila
        pos_col_min = 0;                                 // Posici�n del m�nimo en la fila

        for (int j = 1; j < num_columnas; j++) {
            if (matriz[i][j] < minimo) {
                minimo = matriz[i][j];
                pos_col_min = j;
            }
        }

        // Actualizar el m�ximo de los m�nimos si es necesario
        if (minimo > maximo_de_minimos) {
            maximo_de_minimos = minimo;
            pos_fila_max = i;
            pos_col_max = pos_col_min;
        }
    }

    // Imprimir el resultado
    cout << "El mayor de los m�nimos es " << maximo_de_minimos 
         << " y se encuentra en la posici�n (" 
         << pos_fila_max << ", " << pos_col_max << ")." << endl;

    return 0;
}



