////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Recupere la solución del ejercicio 25 [Interés bancario (doblar)] de
la Relación de Problema II.
Queremos resolver el problema planteado usando una función (o funciones). 
El programa leerá el capital inicial y el interés y mostrará el número de años que han de
transcurrir hasta doblar la cantidad inicial, así como el capital final obtenido.
*/

#include <iostream>
using namespace std;

// Función para calcular los años necesarios y el capital final
void CalcularInteres(double capitalInicial, double interes, int &years_transcurridos, double &capitalFinal) {
   
   double capitalAcumulado = capitalInicial;           
   double capitalObjetivo = capitalInicial * 2;       
   years_transcurridos = 0;                          

   // Bucle para calcular el interés acumulado hasta doblar el capital
   while (capitalAcumulado < capitalObjetivo) {
      capitalAcumulado = capitalAcumulado + (capitalAcumulado * interes / 100.0);
      years_transcurridos++;
   }

   capitalFinal = capitalAcumulado;  
}

int main() {
   double capitalInicial, interes, capitalFinal;
   int years_transcurridos;

   cout << "Introduzca capital inicial: " << endl;
   cin >> capitalInicial;
   cout << "\nIntroduzca interés (como un %): " << endl;
   cin >> interes;

   // Llamarda a la función
   CalcularInteres(capitalInicial, interes, years_transcurridos, capitalFinal);

   // Mostrar los resultados --> Hacer como función esta parte
   cout << "\nPara al menos doblar la cantidad inicial han de pasar " << years_transcurridos << " años."
      << "\nCapital final obtenido: " << capitalFinal << endl;

   return 0;
}

