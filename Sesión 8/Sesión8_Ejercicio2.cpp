////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Construya un programa que lea dos datos a y b de tipo
int y nos diga si tienen el mismo signo. Se considera que el cero no tiene signo por
lo que cualquier número (incluido el cero) tiene un signo distinto del cero.
Para ello, basta comprobar si la multiplicación de a y b es positiva o no.

Modifique dicho código para que el programa principal llame a una función
MismoSigno que nos dice si dos enteros tienen o no el mismo signo.
*/

#include <iostream>
using namespace std;

bool mismoSigno(int a, int b){
   
   bool confirmacion;
   
   if(a*b > 0){
      confirmacion = true;
   }else{
      confirmacion = false;
   }
   
   return confirmacion;
}

int main(){
   
   int a,b;
   
   cout << "Introduza los valores para 'a' y 'b': ";
   cin >> a >> b;
   
   if(mismoSigno(a,b)){
      cout << "'a' y 'b' tienen el mismo signo.";
   }else{
      cout << "'a' y 'b' tienen distinto signo.";
   }
   
   return 0;
   
}
