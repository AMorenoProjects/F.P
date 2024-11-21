////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Dado un vector de caracteres, queremos sustituir todas las apariciones de un carácter y poner en su lugar el contenido
de otro vector.
Por ejemplo, si tenemos el vector [u n o a d o s a a], el resultado de
sustituir las apariciones del carácter 'a' por el nuevo vector [T T U] sería
[u n o T T U d o s T T U T T U]
Resolveremos este problema de varias formas a lo largo de esta Relación de Problemas. 
En este ejercicio, se construirá un tercer vector sustituido con el resultado
pedido.
Construya un programa que lea caracteres hasta que se introduzca # lo que formará
el primer vector (v). A continuación lea el carácter a_borrar que se va a eliminar de
v. Finalmente, el programa leerá los caracteres que formarán el vector a_insertar
que sustituirán cada aparición de a_borrar. El terminador de entrada de caracteres
para el vector a_insertar es también el carácter #
Para leer los caracteres (incluído el espacio en blanco), haga uso de la instrucción
caracter = cin.get() (en vez de cin >> caracter) tal y como se indica en
la página Problemas-68.
El programa construirá e imprimirá en pantalla un tercer vector sustituido que
contendrá los caracteres de v pero reemplazando todas las apariciones de a_borrar
por los caracteres del vector a_insertar. Si el vector a_insertar contuviese el
carácter a_borrar, dichas apariciones no se eliminan, tal y como puede apreciarse
en el último ejemplo que aparece al final de este enunciado.
*/

#include <iostream>
using namespace std;

int main(){
   const int MAX_SIZE = 1000; 
   char vectorPrincipal[MAX_SIZE];     
   char vectorReemplazar[MAX_SIZE];
   char vectorFinal[MAX_SIZE];
   char caracter;                      // Variable para leer los caracteres
   char a_borrar;                      // Caracter a eliminar
   int contador1 = 0;                  // Para saber cuantos elementos hay en el vector Principal
   int contador2 = 0;
   int contador3 = 0;
   
   cout << "Introduzca una serie de caracteres. ";
   cout << "Usando '#' finaliza" << endl;
   
   while(cin.get(caracter) && caracter != '#'){
      vectorPrincipal[contador1] = caracter;
      contador1++;   
   }
   
   cout << "Introduce el carácter a eliminar: ";
   cin >> a_borrar;
   cin.ignore();                        // Ignora el salto de línea hasta que un caracter delimitador es encontrado
   
   cout << "Introduce caracteres para el vector Reemplazar (finaliza con #): ";
   
   while (cin.get(caracter) && caracter != '#') {
      vectorReemplazar[contador2] = caracter;
      contador2++;
   }
   
   for (int i = 0; i <= contador1; i++) {
      if (vectorPrincipal[i] == a_borrar){                     // Comparamos con el caracter a reemplazar
         for(int j = 0; j <= contador2;j++){
            vectorFinal[contador3] = vectorReemplazar[j];
            contador3++;
         }
      }else {
         vectorFinal[contador3] = vectorPrincipal[i];
         contador3++;
      }
   }  
   
   cout << "La serie final es: ";
   
   for(int i=0;i<=contador3;i++){
      cout << vectorFinal[i];
   }
   
   return 0;
}
