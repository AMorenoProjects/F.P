////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Recupere la solución del ejercicio 2 [Recta con
datos miembro públicos] . Cambie ahora los datos miembro públicos y póngalos privados. 
Tendrá que añadir métodos para asignar y ver los valores de los datos miembro.
Añada métodos para asignar un valor a cada uno de los tres datos miembro. Modifique
el main para tener en cuenta estos cambios.
Cambie ahora la política de acceso a los datos miembros: en vez de usar un
método para asignar un valor a cada dato miembro, defina un único método
SetCoeficientes para asignar los tres a la misma vez.
Observe que los métodos permiten definir la política de acceso a los datos miembro.
Si tengo previsto cambiar por separado los coeficientes de la recta, usaré métodos de
asignación individuales. En caso contrario, usaré un único método que modifique a la
misma vez todos los datos miembro. Incluso pueden dejarse en la clase ambos tipos
de métodos para que así el cliente de la clase pueda usar los que estime oportunos
en cada momento
*/

#include <iostream>
#include <cmath>
using namespace std;

class Recta {
private:
   double A, B, C;

public:
   // Constructor
   Recta(double a, double b, double c) {
      A = a;
      B = b;
      C = c;
   }

   // Métodos para acceder a los datos miembro
   double GetA(){ 
   return A;
   }
   double GetB(){
   return B; 
   }
   double GetC(){ 
   return C; 
   }

   // Método para asignar valores a los coeficientes
   void SetCoeficientes(double a, double b, double c) {
      A = a;
      B = b;
      C = c;
   }

   // Cálculo de la pendiente
   double pendiente() const {
      return (-A) / B;
   }

   // Obtener el valor de la ordenada (y)
   double ordenada(double x) const {
      return (-C - x * A) / B;
   }

   // Obtener el valor de la abcisa (x)
   double abcisa(double y) const {
      return (-C - y * B) / A;
   }

   // Reflejar respecto al eje de las abscisas
   void ReflejaAbsc() {
      B = -B;
   }

   // Ángulo en radianes respecto al eje horizontal
   double AnguloRadEjeHoriz() const {
      return atan(pendiente());
   }
};

int main() {
   double a1, b1, c1, x, y;
   double a2, b2, c2;

   cout << "Introduzca los valores de la primera recta (Ax + By + C): ";
   cin >> a1;
   cin >> b1; 
   cin >> c1;

   cout << "Introduzca los valores de la segunda recta (Ax + By + C): ";
   cin >> a2;
   cin >> b2;
   cin >> c2;

   // Crear los objetos p1 y p20
   Recta p1(a1, b1, c1);
   Recta p2(a2, b2, c2);

   // Mostrar los términos independientes utilizando getters
   cout << "El termino independiente de la recta 1 es: " << p1.GetC() << endl;
   cout << "El termino independiente de la recta 2 es: " << p2.GetC() << endl;

   // Mostrar las pendientes de las rectas
   cout << "La pendiente de la primera recta es: " << p1.pendiente() << endl;
   cout << "La pendiente de la segunda recta es: " << p2.pendiente() << endl;

   // Mostrar los ángulos en radianes
   cout << "El angulo(radianes) de la primera recta es: " << p1.AnguloRadEjeHoriz() << endl;
   cout << "El angulo(radianes) de la segunda recta es: " << p2.AnguloRadEjeHoriz() << endl;

   // Leer un valor de ordenada e imprimir el resultado
   cout << "Introduzca un valor de ordenada (x) para obtener el de la abcisa (y): ";
   cin >> x;
   cout << "El valor de la abcisa será: " << p1.ordenada(x) << endl;

   // Leer un valor de abcisa e imprimir el resultado
   cout << "Introduzca un valor de abcisa (y) para obtener el de la ordenada (x): ";
   cin >> y;
   cout << "El valor de la ordenada será: " << p1.abcisa(y) << endl;

   // Reflejar respecto al eje de las abscisas
   p1.ReflejaAbsc();
   cout << "La recta reflejada tendra pendiente: " << p1.pendiente() << endl;

   return 0;
}
