////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*

Recupere la solución del ejercicio 25 [Lectura de un intervalo] de la Relación de Problema I. Si lo desea, puede usar el código disponible en el siguiente
enlace: https://decsai.ugr.es/jccubero/FP/I_LecturaIntervalo.cpp
Después de haber leído los datos que definen el intervalo, el programa debe leer un
valor real y determinar si está o no dentro del intervalo.

*/

#include <iostream>
using namespace std;


int main(){
   double cota_izda, cota_dcha, aux, num;
   
   cout << "Intervalo.\n\n";
   cout << "Introduzca el intervalo.\n";
        
   cout << "Cota menor: ";
   cin >> cota_izda;
   cout << "Cota mayor: ";
   cin >> cota_dcha;
   
   if (cota_dcha < cota_izda){
      aux = cota_dcha;
      cota_dcha = cota_izda;
      cota_izda = aux;
   }
   
   cout << "Su intervalo es: " << endl << "(" << cota_izda << " , " << cota_dcha << ")";
   
   cout << "\nIntroduzca un número: ";
   cin >> num;
   
   if (num >= cota_izda && num <= cota_dcha){
      cout << "El valor " << num << " esta dentro del intervalo " << "(" << cota_izda << " , " << cota_dcha << ")";
   } else {
      cout << "El valor " << num << " NO esta dentro del intervalo " << "(" << cota_izda << " , " << cota_dcha << ")";
   }
        
   return 0;           
}
