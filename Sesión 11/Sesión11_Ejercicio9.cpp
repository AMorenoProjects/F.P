////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Modifique el programa principal e imprima los valores de los datos miembros de una
recta, antes de asignarles los coeficientes. Mostrará, obviamente, un valor indeterminado. 
Para evitar este problema, añada un constructor a la recta para que el objeto
esté en un estado válido en el mismo momento de su definición. El constructor deberá
tener como parámetros, obligatoriamente, los tres coeficientes de la recta. Tendrá que
modificar convenientemente el main para tener en cuenta este cambio.
Vuelva a recuperar el método SetCoeficientes. Añada un método privado que
nos indique si los coeficientes son correctos, es decir, A y B no pueden ser simultáneamente nulos. 
Llame a este método donde sea necesario.
*/

#include <iostream>
#include <cmath>
using namespace std;

class Recta {
private:
   double A, B, C;

   // Método privado para validar los coeficientes
   bool CoeficientesValidos(double a, double b) const {
      return !(a == 0 && b == 0); // A y B no pueden ser ambos cero
   }

public:
   // Constructor con validación de coeficientes
   Recta(double a, double b, double c) {
      if (CoeficientesValidos(a, b)) {
         A = a;
         B = b;
         C = c;
      } else {
         cout << "Error: Los coeficientes A y B no pueden ser ambos cero. " << endl;
         cout << "Se asignarán valores predeterminados." << endl;
         
         // Valores predeterminados
         A = 1; 
         B = 1;
         C = 0; 
         
      }
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

   // Método para asignar valores a los coeficientes con validación
   void SetCoeficientes(double a, double b, double c) {
      if (CoeficientesValidos(a, b)) {
         A = a;
         B = b;
         C = c;
      } else {
         cout << "Error: Los coeficientes A y B no pueden ser ambos cero. ";
         cout << "No se realizará ningún cambio." << endl;
      }
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
   
   // Crear la primera recta con valores validados
   Recta p1(a1, b1, c1);

   cout << "Introduzca los valores de la segunda recta (Ax + By + C): ";
   cin >> a2;
   cin >> b2;
   cin >> c2;

   // Crear la segunda recta con valores validados
   Recta p2(a2, b2, c2);

   // Mostrar los coeficientes utilizando getters
   cout << "Coeficientes de la primera recta: A=" << p1.GetA()
      << ", B=" << p1.GetB() << ", C=" << p1.GetC() << endl;

   cout << "Coeficientes de la segunda recta: A=" << p2.GetA()
      << ", B=" << p2.GetB() << ", C=" << p2.GetC() << endl;

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
   cout << "La recta reflejada tendrá pendiente: " << p1.pendiente() << endl;

   return 0;
}

