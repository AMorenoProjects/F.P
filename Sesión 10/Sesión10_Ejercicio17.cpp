////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
En condiciones normales de mercado, es de esperar
que si un producto aumenta de precio, su demanda decaiga. ¿Pero hasta qué punto le
puede ser rentable una subida de precio al empresario? Para analizar esta situación,
en Economía se usa el concepto de elasticidad . Según Wikipedia: La elasticidad
precio de la demanda mide la sensibilidad (o respuesta) de la cantidad demandada de
un bien o servicio ante los cambios en su precio y se define por la siguiente fórmula:

EPD = % variación en la cantidad demandada / % variación en el precio

Si usamos el concepto de variación porcentual visto en los problemas 5 [Variación
porcentual] de la Relación de Problemas I y 22 [Variación porcentual: lectura de varios
valores] de la Relación de Problemas II, la definición quedaría así:

EPD = VP demanda / VP precio

En general, valores de elasticidad superiores a 1 indican que no es rentable una subida
de precios ya que la demanda, en proporción, caerá mucho más.
Construya un programa que lea el precio inicial, el precio final, la demanda inicial y la
demanda final y calcule el valor de elasticidad EDP según la fórmula anterior. 
El programa irá leyendo los cuatro valores anteriores para varios productos. Supondremos
que si el usuario introduce un valor positivo en el precio inicial, los otros tres valores
también serán positivos. La entrada de datos terminará cuando el usuario introduzca
cualquier valor negativo como precio inicial.
Para resolver este problema debe definir las funciones que estime oportunas.
*/


#include <iostream>
#include <cmath>
using namespace std;

// Función para calcular la elasticidad precio-demanda
double calcularElasticidad(double precioInicial, double precioFinal, double demandaInicial, double demandaFinal) {
   double variacionPrecio;
   double variacionDemanda;
   
   variacionPrecio = abs((precioFinal - precioInicial) / precioInicial);
   variacionDemanda = abs((demandaFinal - demandaInicial) / demandaInicial);
   
   return variacionDemanda / variacionPrecio;
}

int main() {
   double precioInicial, precioFinal;
   double demandaInicial, demandaFinal;
   double elast_pd;

   cout << "Cálculo de la Elasticidad Precio-Demanda.\n\n"
      << "Introduzca cuaternas de valores:\n"
      << "El precio inicial, el precio final, la demanda inicial y la demanda final.\n"
      << "Introduzca cualquier negativo en el precio inicial para terminar\n\n";

   cin >> precioInicial;

   while (precioInicial >= 0) {
      cin >> precioFinal;
      cin >> demandaInicial;
      cin >> demandaFinal;
        
      // Calcular elasticidad 
      elast_pd = calcularElasticidad(precioInicial, precioFinal, demandaInicial, demandaFinal);

      cout << "Elasticidad Precio-Demanda: " << elast_pd << "\n";

      // Leer el próximo conjunto de datos
      cin >> precioInicial;
   }

   cout << "Programa terminado.\n";
   return 0;
}























