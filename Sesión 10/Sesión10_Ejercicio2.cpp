////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
En este programa vamos a trabajar con datos
miembro públicos. Posteriormente se modificará para trabajar con datos miembro privados.
Se desea implementar una clase Recta para representar una recta en el plano. Una
recta viene determinada por tres coeficientes reales A, B, C, de forma que todos los
puntos (x,y) que pertenecen a la recta verifican lo siguiente (ecuación general de la
recta):
Ax + By + C = 0
Si lo desea, puede usar el recurso disponible en el siguiente enlace para ver 
la representación gráfica de una recta en función de los coeficientes, la pendiente, etc.:

Defina la clase Recta. En este ejercicio utilice únicamente datos miembro públicos.

Éstos serán los tres coeficientes de la recta. Añada los siguientes métodos:

• Método Pendiente para obtener la pendiente de la recta, aplicando la fórmula:
pendiente = - A / B
¿Añadimos pendiente como dato miembro de la recta? La respuesta es que
no ¿Por qué?

• Método Ordenada para obtener la ordenada (y) dado un valor de abscisa x,
aplicando la fórmula:
y = (-C - xA) / B

• Método Abscisa para obtener la abscisa (x) dado un valor de ordenada y,
aplicando la fórmula:
x = (-C - yB) / A

• Método ReflejaAbsc para transformar la recta y convertirla en otra distinta que
pase por el punto de intersección con el eje de las abscisas y se obtenga como
un espejo de la recta original (da igual el eje con respecto al que se hace el
espejo pues la recta resultante es la misma) Para ello, basta modificar el valor
del coeficiente B cambiándolo de signo. Observe que no se le pide que construya
una recta nueva sino que modifique la propia recta sobre la que se aplica el
método. A los métodos que modifican el estado del objeto sobre el que se aplican,
usualmente los nombraremos con un verbo (Refleja en este caso).

• Método AnguloRadEjeHoriz para obtener el ángulo ? de la recta con el eje
horizontal, aplicando la fórmula:
? = arctan(pendiente de la recta)
Observe que arctan denota el arco tangente: está implementada en la función
atan de cmath. Para enfatizar que el valor devuelto no son grados sexagesimales 
sino radianes, hemos incluido las letras Rad en el nombre de la función
AnguloRadEjeHoriz.

--- --- ---

Cree un programa principal que haga lo siguiente:
• Cree dos objetos recta1 y recta2 de la clase Recta.
• Lea seis reales desde teclado. Puede asumir que los valores se introducirán correctamente y por tanto A y B no serán simultáneamente cero. 
   Asigne los tres primeros a los coeficientes de recta1 y los otros tres a recta2. Imprima en pantalla el término independiente de cada recta.
• Calcule e imprima la pendiente de cada recta.
• Calcule e imprima el ángulo en radianes con respecto al eje horizontal de cada
recta.
Lea un valor de abscisa e imprima la ordenada según recta1. A continuación
lea un valor de ordenada e imprima la abscisa que le corresponde.
• Ejecute el método ReflejaAbsc sobre recta1 e imprima en pantalla la pendiente nueva (será la misma que antes pero cambiada de signo).
*/

#include <iostream>
#include <cmath>
using namespace std;

class Recta {   
   public:       
   double A,B,C;     // En el ejercicio te especifica que se utilizan datos miembro públicos
   
   // Constructor 
   Recta(double a, double b, double c){
      A = a;
      B = b;
      C = c;    
   }
   
   double pendiente(){
      
      return (-A)/B;
      // No se introduce pendiente como dato de la recta porque es un valor derivado de A y B
   }
   
   double ordenada(double x){    // Obtenemos el valor de la 'y'
      
      return (-C - x*A) / B;
   }
   
   double abcisa(double y){      // Obtenemos el valor de la 'x'
      
      return (-C - y*B) / A;
   }
   
   void ReflejaAbsc(){
      B = -B;
   }
   
   double AnguloRadEjeHoriz(){
      
      return atan(pendiente());
   }
   
   
};


int main(){
   double a1,b1,c1,x,y;
   double a2,b2,c2;
   
   cout << "Introduzca los valores de la primera recta (Ax + By + C): ";
   cin >> a1;
   cin >> b1;
   cin >> c1;
   
   cout << "Introduzca los valores de la segunda recta (Ax + By + C): ";
   cin >> a2;
   cin >> b2;
   cin >> c2;

   // Creo los objetos p1 y p2
   
   Recta p1(a1,b1,c1);
   Recta p2(a2,b2,c2);
   
   // Imprimo los terminos independientes de cada recta
   
   cout << "El termino independiente de la recta 1 es: " << p1.C << endl;
   cout << "El termino independiente de la recta 2 es: " << p2.C << endl;
   
   // Imprimo la pendiente de cada recta
   
   cout << "La pendiente de la primera recta es: " << p1.pendiente() << endl;
   cout << "La pendiente de la segunda recta es: " << p2.pendiente() << endl;

   // Imprimo los angulos en radianes
   
   cout << "El angulo(radianes) de la primera recta es: " << p1.AnguloRadEjeHoriz() << endl;
   cout << "El angulo(radianes) de la segunda recta es: " << p2.AnguloRadEjeHoriz() << endl;

   // Lea un valor de abcisa e imprima el resultado
   
   cout << "Introduzca un valor de ordenada(x) para obtener el de la abcisa(y): ";
   cin >> x;
   
   cout << "El valor de la abcisa será: " << p1.ordenada(x) << endl;
   
   //Lea el valor de la ordenada e imprima el resultado
   
   cout << "Introduzca un valor de abcisa(y) para obtener el de la ordenada(x): ";
   cin >> y;
   
   cout << "El valor de la abcisa será: " << p1.abcisa(y) << endl;
   
   //Nueva pendiente
   
   p1.ReflejaAbsc();
   
   cout << "La recta reflejada tendra prendiente: " << p1.pendiente();
   
   return 0;
}
