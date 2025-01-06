////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Recupere la soluci�n del ejercicio 25 [Inter�s bancario (doblar)] de
la Relaci�n de Problema II.
Queremos resolver el problema planteado usando una funci�n (o funciones). 
El programa leer� el capital inicial y el inter�s y mostrar� el n�mero de a�os que han de
transcurrir hasta doblar la cantidad inicial, as� como el capital final obtenido.
*/

#include <iostream>
using namespace std;

// Funci�n para calcular los a�os necesarios y el capital final
void CalcularInteres(double capitalInicial, double interes, int &years_transcurridos, double &capitalFinal) {
   
   double capitalAcumulado = capitalInicial;           
   double capitalObjetivo = capitalInicial * 2;       
   years_transcurridos = 0;                          

   // Bucle para calcular el inter�s acumulado hasta doblar el capital
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
   cout << "\nIntroduzca inter�s (como un %): " << endl;
   cin >> interes;

   // Llamarda a la funci�n
   CalcularInteres(capitalInicial, interes, years_transcurridos, capitalFinal);

   // Mostrar los resultados --> Hacer como funci�n esta parte
   cout << "\nPara al menos doblar la cantidad inicial han de pasar " << years_transcurridos << " a�os."
      << "\nCapital final obtenido: " << capitalFinal << endl;

   return 0;
}

