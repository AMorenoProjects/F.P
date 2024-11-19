////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
 Se pide que cree un fichero de texto (con extensi�n txt o bien cpp) que contenga:
 
 1- Una expresi�n l�gica que sea verdadera si una variable de tipo car�cter llamada
 letra es una letra min�scula y falso en otro caso.
 
 2- Una expresi�n l�gica que sea verdadera si una variable de tipo entero llamada
 edad es mayor o igual que 18 o menor o igual de 65 y falso en otro caso.
 
 3- Una expresi�n l�gica que sea verdadera si una variable de tipo entero llamada
 adivine est� entre 1 y 100 y falso en otro caso.
 
 4- Unaexpresi�n l�gica que sea verdadera si un a�o es bisiesto y falso en otro caso.
 Los a�os bisiestos son aquellos que o bien son divisibles por 4 pero no por 100,
 o bien son divisibles por 400. Por ejemplo, son bisiestos: 1600,1996, 2000, 2004.
 No son bisiestos: 1700, 1800, 1900, 1998, 2002.
 
 5- Unaexpresi�n l�gica que sea verdadera si un dato de velocidad es mayor o igual
 que 100 kil�metros por hora y falso en otro caso
 
 6- Una expresi�n l�gica que sea verdadera si un car�cter es una vocal (s�lo se
 consideran vocales las min�sculas sin acentos) y falso en otro caso.
 
 7- Unaexpresi�n l�gica que sea verdadera si una recta est� inclinada, es decir, que
 no sea ni horizontal ni vertical. Suponemos que una recta viene dada por tres
 coeficientes A,B,C (Ax + By +C = 0). Es horizontal si A = 0 y es vertical
 si B = 0. A�ada tambi�n una expresi�n l�gica que sea verdadera si la recta
 est� correctamente especificada, es decir, que no sean simult�neamente cero
 los coeficientes A y B
*/

#include <iostream>
using namespace std;

int main(){
   
   char letra;
   int numero;
   int edad;
   int adivine;
   int bisiesto;
   double velocidad;
   char vocal;
   double x,y,c;
   
   cout << "Elija un numero del 1 al 7: ";
   cin >> numero;
   
   switch(numero){
      case 1:
         /* Primera expresi�n l�gica */
         cout << "Elige un caracter: ";
         cin >> letra;
   
         if(letra >= 'a' && letra <= 'z'){
            cout << "La letra que ha introducido ES minuscula";
         } else {
            cout << "La letra que ha introducido NO ES minuscula";
         }
         break;
         
      case 2:
         /* Segunda expresi�n l�gica*/
         cout << "Que edad tiene usted?: ";
         cin >> edad;
         
         if(edad >= 18 && edad <=65 ){
            cout << "Usted tiene entre 18 y 65 a�os";
         } else {
            cout << "Usted tiene o menos de 18 a�os o mas de 65 a�os";
         }
         break;
         
      case 3:
         /* Tercera expresi�n l�gica */
         cout << "Introduca un numero entero: ";
         cin >> adivine;
         
         if(adivine >=1 || adivine >=100){
            cout << "Usted ha pensado en un numero entre el 1 y el 100";
         } else {
            cout << "Usted no ha elegido un numero entre el 1 y el 100";
         }
         break;
         
      case 4:
         /* Cuarta expresi�n l�gica */
         cout << "Introduzca un a�o: ";
         cin >> bisiesto;
         
         if((bisiesto%4 == 0 && bisiesto%100 !=0) || bisiesto%400 == 0 ){
            cout << "El a�o que eligio ES bisiesto";
         } else {
            cout << "El a�o que eligio NO ES bisiesto";
         }
         break;
         
      case 5:
         /* Quinta expresi�n l�gica*/
         cout << "Ponga una velocidad(Kilometros/Hora): ";
         cin >> velocidad;
         
         if(velocidad >= 100){
            cout << "La velocidad que usted ha elegido es mayor o igual a 100k/h";       
         } else {
            cout << "La velocidad que usted ha elegido es menor a 100k/h"; 
         }
         break;
         
      case 6:
         /* Sexta expresi�n l�gica */
         cout << "Introduzca una vocal: ";
         cin >> vocal;
         
         if(vocal == 'a' || vocal == 'e' || vocal == 'i' || vocal == 'o' || vocal == 'u'){
            cout << "Usted eligica la vocal: " << vocal;
         } else {
            cout << "Se detecto un fallo, por favor introduzca una vocal";
         }
         break;
      case 7:
         /* Septima expresi�n l�gica */
         cout << "Se desea establecer una recta inclinada";
         cout << "\nQue viene dada por la expresion: (Ax + By +C = 0)";
         
         cout << "\nIntroduzca el valor de 'x': ";
         cin >> x;
         cout << "\nIntroduzca el valor de 'y': ";
         cin >> y;
         cout << "\nIntroduzca el valor de 'c': ";
         cin >> c;
         
         if ((x!=0 && y!=0)){
            cout << "La recta es inclinada";
         } else if((x==0 || y !=0)){
            cout << "La recta es horizontal";
         } else if((x==0 || y ==0)){
            cout << "Como 'x' o 'y' vale cero, la recta NO sera inclinada"; 
         }
         break;
   }
   
   
   return 0;
}
