   ////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Modifíquelo para obligar al usuario a introducir valores correctos. Por lo tanto, debe
usar un filtro de entrada de datos para que el número de kilómetros sea mayor o igual
que cero y el número de puntos sea un valor entre 0 y 400 (máximo número posible
de puntos).
En el siguiente ejemplo, observe que los filtros de entrada de datos rechazan los datos
-2 -5 (el número de kms debe ser positivo) y 1300 -450 (el número de puntos ha
de estar entre 0 y 400).

*/

#include <iostream>
using namespace std;

int main(){
   const int    LIM_KMS_RECARGO = 300;
   const double RECARGO_KM = 0.1, MIN_KMS_DSCTO = 700.0, TRF_BASE = 150.0;
   const int    MIN_PTOS_DSCTO_BAJO = 100, MIN_PTOS_DSCTO_ALTO = 200;  
   const int    DSCTO_KMS = 2, DSCTO_BAJO_PTOS = 3, DSCTO_ALTO_PTOS = 4;
   double dscto_ptos, dscto_dist, dscto;
   double trf, recargo_dist;
   int dist;
   int ptos_fidel;   

   do{
      cout << "Introduzca la distancia del recorrido del viaje: ";
      cin >> dist;
      
         if(dist <= 0){
            cout << "INTRODUZCA UN VALOR VALIDO" << endl;
         }
   } while (dist <= 0);
   
   do{
      cout << "Introduzca el numero de puntos de la tarjeta de fidelización: ";
      cin >> ptos_fidel;
      
      if (ptos_fidel < 0 || ptos_fidel > 400){
         cout << "INTRODUZCA UN VALOR VALIDO" << endl;
      } 
   } while (ptos_fidel < 0 || ptos_fidel > 400);
      


   trf = TRF_BASE;
   recargo_dist = 0;

   if (dist > LIM_KMS_RECARGO)
      recargo_dist = RECARGO_KM * (dist - LIM_KMS_RECARGO) ;
   
   trf = trf + recargo_dist;
   
   ///////////////////////////////
      
   if (ptos_fidel > MIN_PTOS_DSCTO_ALTO)   
      dscto_ptos =  DSCTO_ALTO_PTOS;
   else if (ptos_fidel > MIN_PTOS_DSCTO_BAJO)   
      dscto_ptos =  DSCTO_BAJO_PTOS;
   else
      dscto_ptos = 0;
         
   if (dist > MIN_KMS_DSCTO)
      dscto_dist = DSCTO_KMS;   
   else
      dscto_dist = 0;
   
   dscto = dscto_ptos + dscto_dist;
   
   ///////////////////////////////
   
   trf = trf * (1 - dscto / 100.0);

   cout << "\n\nTarifa final aplicando los descuentos: ";
   cout << trf;
}


