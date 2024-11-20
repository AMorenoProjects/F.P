////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Modifique dicha soluci�n para que el programa calcule la tarifa final de una serie de
billetes. Para ello, cada vez que se introduzcan los datos de un nuevo billete, el usuario
introducir� el car�cter 'N' (Nuevo). La entrada de datos finaliza con el car�cter '#'.
Si se introduce un car�cter distinto, el programa pedir� un nuevo car�cter.
Recuerde que el primer dato a leer era el n�mero de kil�metros del trayecto y 
el segundo dato corresponde al n�mero de puntos del cliente. En el ejercicio 33 [Tarifa a�rea
con filtro de entrada de datos] ya se hab�a programado el filtro de entrada para los
datos de los kil�metros y n�mero de puntos.
En el siguiente ejemplo, observe que el nuevo filtro de entrada de datos rechaza los
caracteres J K ya que no son ni N ni #.

*/

#include <iostream>
using namespace std;

int main() {
    const int LIM_KMS_RECARGO = 300, MIN_PTOS_DSCTO_BAJO = 100, MIN_PTOS_DSCTO_ALTO = 200;
    const double RECARGO_KM = 0.1, MIN_KMS_DSCTO = 700.0;
    const int DSCTO_KMS = 2, DSCTO_BAJO_PTOS = 3, DSCTO_ALTO_PTOS = 4;
    const double TRF_BASE = 150.0;
    const int MAX_NUM_PTOS = 400, MIN_NUM_PTOS = 0;
    
    double descuento;
    double tarifa;
    int distancia;
    int puntosFidelidad;
    char caracter;

    cout << "Introduzca 'N' para iniciar el programa y '#' para finalizarlo." << endl;

    while (true) { // Bucle infinito
        cout << "Introduzca 'N' para nuevo billete o '#' para salir: ";
        cin >> caracter;

        if (caracter == '#') { 
            cout << "Fin del programa." << endl;
            return 0; 
        }
        else if (caracter == 'N') {

            cout << "\nIntroduzca la distancia del recorrido del viaje (> 0): ";
            do {
                cin >> distancia;
            } while (distancia <= 0);

            cout << "Introduzca un numero de puntos de la tarjeta de fidelizacion (entre 0 y " << MAX_NUM_PTOS << "): ";
            do {
                cin >> puntosFidelidad;
            } while (puntosFidelidad < MIN_NUM_PTOS || puntosFidelidad > MAX_NUM_PTOS);

            tarifa = TRF_BASE;

            if (distancia > LIM_KMS_RECARGO) {
                tarifa += RECARGO_KM * (distancia - LIM_KMS_RECARGO);
            }
            
            descuento = 0; 
            
            if (distancia > MIN_KMS_DSCTO) {
                descuento += DSCTO_KMS;   
            }

            if (puntosFidelidad > MIN_PTOS_DSCTO_ALTO) {
                descuento += DSCTO_ALTO_PTOS;
            } else if (puntosFidelidad > MIN_PTOS_DSCTO_BAJO) {
                descuento += DSCTO_BAJO_PTOS;
            }

            tarifa *= (1 - descuento / 100.0);


            cout << "\nTarifa final aplicando los descuentos: " << tarifa << endl;
        } else {
            cout << "Car�cter no v�lido. Por favor, introduzca 'N' para nuevo billete o '#' para salir." << endl;
        }
    }

    return 0; 
}

