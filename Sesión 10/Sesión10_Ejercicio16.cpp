////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Queremos crear un programa que haga lo siguiente:
• Lea las dos coordenadas (abscisa y ordenada) de un punto A que pertenece a R2 . Haga lo
mismo con otro punto B. El segmento AB será el diámetro de una circunferencia.
• Lea también las coordenadas de un punto D ue pertenece a R2
• Calcule el punto medio o centro C del segmento AB. Será el centro de la circunferencia. 
Es el punto con las siguientes coordenadas:

C = (c1, c2) = ((a1 + b1)/2, (a2 + b2)/2)

• Calcule la longitud del diámetro (la distancia euclídea entre A y B) Recuerde la
fórmula para calcular la distancia euclídea:

A = (a1, a2) , B = (b1, b2) , d(A, B) = sqrt((b1-a1=)^2+(b2-a2)^2)

Imprima la longitud de la circunferencia correspondiente así como el área del
círculo.

• Indique si el punto D está dentro de la circunferencia. Recordemos que un punto
D = (d1, d2) está dentro de una circunferencia con centro (c1, c2) y radio r si
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

// Función que calcula el diámetro de la circunferencia
double diametroCircunferencia(double a1, double a2, double b1, double b2) {
   double segmentoAB;
   segmentoAB = sqrt(pow(b1 - a1, 2) + pow(b2 - a2, 2));
   return segmentoAB;
}

// Función que calcula el punto medio y lo devuelve como una estructura Punto
Punto puntoMedio(double a1, double a2, double b1, double b2) {
   Punto p;
   p.x = (a1 + b1) / 2.0;
   p.y = (a2 + b2) / 2.0;
   return p;
}

// Función que verifica si un punto está dentro de la circunferencia
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
    
   // Cálculo del diámetro de la circunferencia
   diametro = diametroCircunferencia(a_1, a_2, b_1, b_2);
    
   // Cálculo del punto medio (centro de la circunferencia)
   c = puntoMedio(a_1, a_2, b_1, b_2);
    
   // Cálculo del radio
   radio = diametro / 2.0;
    
   // Cálculo de la longitud de la circunferencia (perímetro)
   long_circ = M_PI * radio * 2;
    
   // Cálculo del área del círculo
   area_circ = M_PI * pow(radio, 2);
    
   // Verificación si el punto D está dentro de la circunferencia
   dentro = dentroCircunferencia(c, d_1, d_2, radio);
    
   // Formateo de la salida para dos decimales
   cout << fixed;
   cout.precision(2);
    
   // Salida de los resultados
   cout << "\nResultados:\n";
   cout << "Centro de la circunferencia (C): (" << c.x << ", " << c.y << ")\n";
   cout << "Diámetro: " << diametro << "\n";
   cout << "Radio: " << radio << "\n";
   cout << "Longitud de la circunferencia: " << long_circ << "\n";
   cout << "Área del círculo: " << area_circ << "\n";
    
   if (dentro){
      cout << "El punto (" << d_1 << ", " << d_2 << ") está dentro del círculo.\n"; 
   } else{
      cout << "El punto (" << d_1 << ", " << d_2 << ") NO está dentro del círculo.\n"; 
   }
    
   return 0;
}










