////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Modifique la solución del ejercicio 1 [Dinero con
datos miembro públicos] de esta Relación de Problemas y cambie el ámbito de los
datos miembro a private. Por lo tanto, tendrá que proporcionar métodos Get para consultar los euros y los céntimos de cada objeto y modificar adecuadamente el
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
   // Método Set para asignar valores
   void SetDinero(long long e, long long c) {
      euros = e;
      centimos = c;
   }

   // Método Get para obtener euros
   long long GetEuros(){
      return euros;
   }

   // Método Get para obtener céntimos
   long long GetCentimos(){
      return centimos;
   }
};

int main() {
   long long euros, centimos, suma_euros, suma_centimos;
   Dinero dinero1, dinero2;
   Dinero dinero_suma;

   cout << "Dinero\n\nIntroduzca euros y céntimos de dos cantidades.\n\n";

   cout << "Primera cantidad (euros céntimos): ";
   cin >> euros >> centimos;
   dinero1.SetDinero(euros, centimos);

   cout << "Segunda cantidad (euros céntimos): ";
   cin >> euros >> centimos;
   dinero2.SetDinero(euros, centimos);

   // Recuperar euros y céntimos de los objetos y sumarlos
   suma_euros = dinero1.GetEuros() + dinero2.GetEuros();
   suma_centimos = dinero1.GetCentimos() + dinero2.GetCentimos();

   // Ajustar la suma si los céntimos superan 100
   suma_euros += suma_centimos / 100;
   suma_centimos = suma_centimos % 100;

   // Asignar la suma al objeto 
   dinero_suma.SetDinero(suma_euros, suma_centimos);


   cout << "\nResultado de la suma:\n";
   cout << "Euros enteros: " << dinero_suma.GetEuros() << endl;
   cout << "Céntimos     : " << dinero_suma.GetCentimos() << endl;

   return 0;
}

