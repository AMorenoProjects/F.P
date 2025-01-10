////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

//  (Examen Ordinario 2023)

/*
Se quiere ordenar un vector de enteros atendiendo al siguiente criterio que compara
dos enteros cualesquiera n y m. Diremos que n es menor que m si se verifica alguno
de los siguientes casos (en caso contrario n no es menor que m):

a) Si la suma de los dígitos de n es menor que la suma de los dígitos de m.

b) Si la suma de los dígitos de n es igual a la suma de los dígitos de m pero n tiene
menos dígitos que m.

Por ejemplo, n = 34 es menor que m = 8 ya que la suma de los dígitos de n es 7
y la suma de los dígitos de m es 8. Por otra parte, n = 34 es menor que m = 520
ya que la suma de sus dígitos es la misma (7) pero n tiene dos dígitos y m tiene tres
dígitos. Finalmente, ninguno de los siguientes enteros es menor que otro ya que todos
tienen el mismo número de dígitos y la misma suma: 45, 63, 54

Se pide que construya la función EsMenor que compara dos enteros teniendo en
cuenta el criterio anterior y un programa principal que lea un entero n y a continuación
un total de n enteros. Almacénelos en un vector y ordénelo de menor a mayor según
el criterio anterior.

Puede definir las funciones adicionales que estime oportuno y puede utilizar el método
de ordenación que desee.
*/

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <cstdlib> // Para abs()

using namespace std;

// Función que suma los dígitos de un número entero
int sumarDigitos(int n) {
   n = abs(n); 
   int suma = 0;
    
   if (n == 0) {
      return 0;
   }
    
   while (n > 0) {
      int digito = n % 10;       // Obtener el último dígito
      suma += digito;            // Sumar el dígito a la suma total
      n /= 10;                   // Eliminar el último dígito
   }
    
   return suma;
}

// Función que calcula la cantidad de dígitos de un número
int numeroDigitos(int n){
   if(n == 0) return 1; // Manejar el caso de n=0
   int digitos = 0;
   n = abs(n); // Asegurarse de que n sea positivo
    
   while(n > 0){
      n = n / 10;
      digitos++;
   }   
    
   return digitos;
}

// Criterio 1: Comparar sumas de dígitos
bool criterioSuma(int a, int b){
   return sumarDigitos(a) < sumarDigitos(b);
}

// Criterio 2: Si las sumas son iguales, comparar la cantidad de dígitos
bool criterioDigitos(int a, int b){
   if(sumarDigitos(a) == sumarDigitos(b)){
      return numeroDigitos(a) < numeroDigitos(b);
   }
   return false;
}

// Función completa que implementa el criterio de ordenación
bool EsMenor(int a, int b){
   if(criterioSuma(a, b)){
      return true;
   }
   if(criterioDigitos(a, b)){
      return true;
   }
   return false;
}

int main(){
   const int SIZE = 20;
   int v1[SIZE] = {0};
   int numero, maximo;
    
   // Solicitar al usuario el número de elementos (máximo 20)
   do{
      cout << "Ponga el numero de elementos que desea introducir (Máximo 20): ";
      cin >> maximo;
      if(maximo < 1 || maximo > SIZE){
         cout << "Numero invalido. Por favor, introduzca un numero entre 1 y 20.\n";
      }
   }while (maximo < 1 || maximo > SIZE);
    
   // Lectura de los valores
   cout << "Introduzca los valores:\n";
   for (int i = 0; i < maximo; i++){
      cout << "Elemento " << i+1 << ": ";
      cin >> numero;
      v1[i] = numero;
   }
    
    // Ordenar el vector usando el criterio personalizado (Seleccion)
   for(int i = 0; i < maximo - 1; i++){
      int k = i;
        
      for(int j = i + 1; j < maximo; j++){
         if(EsMenor(v1[j], v1[k])){
             k = j;
         }
      }
    
      // Intercambiar v1[i] con v1[k] si es necesario
      if(k != i){
         int aux = v1[i];
         v1[i] = v1[k];
         v1[k] = aux;
      }
   }
    
   // Mostrar el vector ordenado
   cout << "\nVector ordenado:\n";
   for(int i = 0; i < maximo; i++){
      cout << v1[i] << " ";
   }
   cout << endl;
   
   return 0;
}




