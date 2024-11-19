////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
 Recupere la soluci�n del ejercicio 4 [Tarifa a�rea] de
 esta Relaci�n de Problemas. Una vez se ha obtenido el precio del billete (con el in
 cremento de 10 c�ntimos por km recorrido, en su caso), se quieren aplicar varios
 descuentos acumulativos.
 Un primer descuento vendr� determinado por el n�mero de kil�metros del trayecto. El
 segundo descuento depender� del n�mero de puntos de la tarjeta de fidelizaci�n del
 cliente que ha comprado el billete. En concreto:
 
 a) Si el n�mero de puntos es mayor de 100, se aplica un descuento del 3% y si es
 mayor de 200, se aplica un descuento del 4%.
 
 b) Si el trayecto es mayor de 700 km, se aplica un descuento del 2%
 
Los dos descuentos anteriores (por longitud del trayecto y el correspondiente al n�
mero de puntos), son independientes y acumulables. 
*/

#include <iostream>
using namespace std;

int main(){

   const int TARIFABASE = 150,LIMITE = 300;
   const double des1_1=0.03,des1_2=0.04,des2=0.02;
   double tarifaFinal,kilometros,kilometros2,descuento1,descuento2,puntos;
   
   /*Entrada de datos*/
   cout << "Bienvenido/a a aerolineas Manoli, digame la distancia de su vuelo: ";
   cin >> kilometros;
   cout << "Cuantos puntos tiene usted: ";
   cin >> puntos;
   
   if (kilometros >= LIMITE){
      
      kilometros2 = kilometros - LIMITE;
      tarifaFinal = TARIFABASE + (kilometros2*0.1);
      
   } else {
      tarifaFinal = TARIFABASE;
      
   }
   
   if(puntos >= 100 && puntos <200){
      descuento1 = des1_1;
   } else if (puntos >= 200){
      descuento1 = des1_2;
   } else {
      descuento1 = 0;
   }
   
   if(kilometros >= 700){
      descuento2 = des2;
   } 
   
   tarifaFinal = tarifaFinal - (tarifaFinal*(descuento1+descuento2)); 
   
   cout << "El precio que debera pagar es de: " << tarifaFinal;

   return 0;
}







