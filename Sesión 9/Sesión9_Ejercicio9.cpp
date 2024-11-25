////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Modifique dicho código para que el programa principal llame a una función
SegundosEntre que calcule la diferencia en segundos entre dos instantes (cada
instante viene determinado por la hora, minuto y segundo)
Defina también una función EsMenor que nos indicará si un instante es menor que
otro. Para implementar dicha función, debe llamar a la función SegundosEntre.
? Ejemplo de entrada: 10 34 55 10 34 55
? Salida correcta:
4966
El primer instante es menor que el segundo
*/

#include <iostream>
using namespace std;

// Prototipos de funciones
int SegundosEntre(int horaI, int minutoI, int segundoI, int horaF, int minutoF, int segundoF);
bool EsMenor(int horaI, int minutoI, int segundoI, int horaF, int minutoF, int segundoF);

// Definición de la función `SegundosEntre`
int SegundosEntre(int horaI, int minutoI, int segundoI, int horaF, int minutoF, int segundoF) {
   const int CAMBIOH = 3600, CAMBIOM = 60;

   int tiempoInicial = horaI * CAMBIOH + minutoI * CAMBIOM + segundoI;
   int tiempoFinal = horaF * CAMBIOH + minutoF * CAMBIOM + segundoF;

   return tiempoFinal - tiempoInicial;
}

// Definición de la función `EsMenor`
bool EsMenor(int horaI, int minutoI, int segundoI, int horaF, int minutoF, int segundoF) {
   
   int diferencia = SegundosEntre(horaI, minutoI, segundoI, horaF, minutoF, segundoF);
   
   return diferencia > 0; // Devuelve true si el primer instante es menor
}

int main() {
   int horaI, minutoI, segundoI, horaF, minutoF, segundoF;

   cout << "Deme una hora inicial (entre 0 y 23): ";
   cin >> horaI;
   cout << "Deme un minuto inicial (entre 0 y 59): ";
   cin >> minutoI;
   cout << "Deme un segundo inicial (entre 0 y 59): ";
   cin >> segundoI;

   cout << "Deme una hora final (entre 0 y 23): ";
   cin >> horaF;
   cout << "Deme un minuto final (entre 0 y 59): ";
   cin >> minutoF;
   cout << "Deme un segundo final (entre 0 y 59): ";
   cin >> segundoF;

   // Calcular la diferencia en segundos
   int diferencia = SegundosEntre(horaI, minutoI, segundoI, horaF, minutoF, segundoF);
   cout << "La diferencia en segundos es: " << diferencia << endl;

   // Verificar si el primer instante es menor
   if (EsMenor(horaI, minutoI, segundoI, horaF, minutoF, segundoF)) {
      cout << "El primer instante ES menor que el segundo." << endl;
   } else {
      cout << "El primer instante NO ES menor que el segundo." << endl;
   }

   return 0;
}
