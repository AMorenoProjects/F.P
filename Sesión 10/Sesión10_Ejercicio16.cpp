////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Queremos crear un programa que haga lo siguiente:
� Lea las dos coordenadas (abscisa y ordenada) de un punto A que pertenece a R2 . Haga lo
mismo con otro punto B. El segmento AB ser� el di�metro de una circunferencia.
� Lea tambi�n las coordenadas de un punto D ue pertenece a R2
� Calcule el punto medio o centro C del segmento AB. Ser� el centro de la circunferencia. 
Es el punto con las siguientes coordenadas:

C = (c1, c2) = ((a1 + b1)/2, (a2 + b2)/2)

� Calcule la longitud del di�metro (la distancia eucl�dea entre A y B) Recuerde la
f�rmula para calcular la distancia eucl�dea:

A = (a1, a2) , B = (b1, b2) , d(A, B) = sqrt((b1-a1=)^2+(b2-a2)^2)

Imprima la longitud de la circunferencia correspondiente as� como el �rea del
c�rculo.

� Indique si el punto D est� dentro de la circunferencia. Recordemos que un punto
D = (d1, d2) est� dentro de una circunferencia con centro (c1, c2) y radio r si
se verifica que:

(c1 - d1)^2 + (c2 - d2)^2 <= r^2

*/

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

// Definir una estructura para representar un punto
struct Punto {
   double x;
   double y;
};

// Funci�n que calcula el di�metro de la circunferencia
double diametroCircunferencia(double a1, double a2, double b1, double b2) {
   double segmentoAB;
   segmentoAB = sqrt(pow(b1 - a1, 2) + pow(b2 - a2, 2));
   return segmentoAB;
}

// Funci�n que calcula el punto medio y lo devuelve como una estructura Punto
Punto puntoMedio(double a1, double a2, double b1, double b2) {
   Punto p;
   p.x = (a1 + b1) / 2.0;
   p.y = (a2 + b2) / 2.0;
   return p;
}

// Funci�n que verifica si un punto est� dentro de la circunferencia
bool dentroCircunferencia(const Punto& c, double d1, double d2, double radio) {
   return (pow(c.x - d1, 2) + pow(c.y - d2, 2)) <= pow(radio, 2);
}

int main(){
   double a_1, a_2, b_1, b_2, d_1, d_2;  
   double diametro, radio, long_circ, area_circ;
   bool dentro;
   Punto c;
    
   // Lectura de las coordenadas del Punto A
   cout << "Introduce las coordenadas (x y) del Punto A: ";
   cin >> a_1 >> a_2;
    
   // Lectura de las coordenadas del Punto B
   cout << "Introduce las coordenadas (x y) del Punto B: ";
   cin >> b_1 >> b_2;
    
   // Lectura de las coordenadas del Punto D
   cout << "Introduce las coordenadas (x y) del Punto D: ";
   cin >> d_1 >> d_2;
    
   // C�lculo del di�metro de la circunferencia
   diametro = diametroCircunferencia(a_1, a_2, b_1, b_2);
    
   // C�lculo del punto medio (centro de la circunferencia)
   c = puntoMedio(a_1, a_2, b_1, b_2);
    
   // C�lculo del radio
   radio = diametro / 2.0;
    
   // C�lculo de la longitud de la circunferencia (per�metro)
   long_circ = M_PI * radio * 2;
    
   // C�lculo del �rea del c�rculo
   area_circ = M_PI * pow(radio, 2);
    
   // Verificaci�n si el punto D est� dentro de la circunferencia
   dentro = dentroCircunferencia(c, d_1, d_2, radio);
    
   // Formateo de la salida para dos decimales
   cout << fixed;
   cout.precision(2);
    
   // Salida de los resultados
   cout << "\nResultados:\n";
   cout << "Centro de la circunferencia (C): (" << c.x << ", " << c.y << ")\n";
   cout << "Di�metro: " << diametro << "\n";
   cout << "Radio: " << radio << "\n";
   cout << "Longitud de la circunferencia: " << long_circ << "\n";
   cout << "�rea del c�rculo: " << area_circ << "\n";
    
   if (dentro){
      cout << "El punto (" << d_1 << ", " << d_2 << ") est� dentro del c�rculo.\n"; 
   } else{
      cout << "El punto (" << d_1 << ", " << d_2 << ") NO est� dentro del c�rculo.\n"; 
   }
    
   return 0;
}










