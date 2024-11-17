////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*Recupere la solución del ejercicio 6 [Subir sueldo] . Supon
dremos que la empresa aplica dos criterios distintos de subida salarial: uno 
es de antigüedad del 2% y otro de productividad del 3%. Se quiere aplicar 
ambas subidas salariales de dos formas distintas: 

 a) Conjunta: Aplicando la suma de ambos incrementos sobre el salario inicial. 
 Así pues, habrá un incremento salarial del 5%.
 b) Secuencial: Aplicando el incremento del 3% sobre el resultado de haber 
 aplicado antes el incremento del 2% */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
   /* En esta parte los aumentos se aplicaran de manera conjunta*/

   double sueldoBase;
   double sueldoAumento;
      
   cout << "\nSu salario es de: ";
   cin >> sueldoBase;
   
   cout << "\nA continuacion se mostrara su aumento salarial de forma conjunta";

   sueldoAumento = (sueldoBase * 1.05);
   
   cout << "\nSu salario final es de: " << sueldoAumento;
   
   /* En esta parte los aumentos se aplicaran de manera secuencial*/

   double sueldoUno;
   double sueldoDos;
   
   cout<<"\nA continuacion se mostrara su aumento salarial de forma secuencial";

   sueldoUno = sueldoBase * 1.02;
   
   cout << "\nSu salario tras el aumento por antiguedad es: " << sueldoUno;
   
   sueldoDos = (sueldoUno*1.03);
   
   cout << "\nSu salario tras el aumento por productividad es: " << sueldoDos;
   
   return 0;   
}



