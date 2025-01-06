////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Modifique la soluci�n del ejercicio 1 [Dinero con
datos miembro p�blicos] de esta Relaci�n de Problemas y cambie el �mbito de los
datos miembro a private. Por lo tanto, tendr� que proporcionar m�todos Get para consultar los euros y los c�ntimos de cada objeto y modificar adecuadamente el
programa principal.
Si lo desea, puede usar el esbozo del programa que puede encontrar en el siguiente
enlace
*/

#include <iostream>
using namespace std;

class Dinero {
private:
   long long euros;
   long long centimos;

public:
   // Constructor 
   Dinero(long long initial_euros, long long initial_centimos) {
      euros = initial_euros;
      centimos = initial_centimos;
   }
   // M�todo Set para asignar valores
   void SetDinero(long long e, long long c) {
      euros = e;
      centimos = c;
   }

   // M�todo Get para obtener euros
   long long GetEuros(){
      return euros;
   }

   // M�todo Get para obtener c�ntimos
   long long GetCentimos(){
      return centimos;
   }
};

int main() {
   long long euros, centimos, suma_euros, suma_centimos;
   Dinero dinero1, dinero2;
   Dinero dinero_suma;

   cout << "Dinero\n\nIntroduzca euros y c�ntimos de dos cantidades.\n\n";

   cout << "Primera cantidad (euros c�ntimos): ";
   cin >> euros >> centimos;
   dinero1.SetDinero(euros, centimos);

   cout << "Segunda cantidad (euros c�ntimos): ";
   cin >> euros >> centimos;
   dinero2.SetDinero(euros, centimos);

   // Recuperar euros y c�ntimos de los objetos y sumarlos
   suma_euros = dinero1.GetEuros() + dinero2.GetEuros();
   suma_centimos = dinero1.GetCentimos() + dinero2.GetCentimos();

   // Ajustar la suma si los c�ntimos superan 100
   suma_euros += suma_centimos / 100;
   suma_centimos = suma_centimos % 100;

   // Asignar la suma al objeto 
   dinero_suma.SetDinero(suma_euros, suma_centimos);


   cout << "\nResultado de la suma:\n";
   cout << "Euros enteros: " << dinero_suma.GetEuros() << endl;
   cout << "C�ntimos     : " << dinero_suma.GetCentimos() << endl;

   return 0;
}

