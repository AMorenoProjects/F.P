////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Construya un programa que declare un vector de caracteres de
tamaño 100. Lea caracteres desde la entrada por defecto hasta que se introduzca el
carácter # y almacénelos en el vector anterior (el carácter terminador # no se añade
al vector). En la lectura de los caracteres, debe tener en cuenta que no se deben
introducir más caracteres que el tamaño del vector (100 en este ejemplo)
Para leer los caracteres (incluído el espacio en blanco), haga uso de la instrucción
caracter = cin.get() (en vez de cin >> caracter)

Implemente algoritmos para realizar las siguientes tareas:
a) Comprobar si el vector es un palíndromo, es decir, que se lee igual de izquierda a
derecha que de derecha a izquierda. Por ejemplo, {'a','b','b','a'} sería
un palíndromo, pero {'a','c','b','a'} no lo sería. Si la secuencia tiene un
número impar de componentes, la que ocupa la posición central no influye en el
resultado, por lo que {'a','b','j','b','a'} sería un palíndromo.
b) Invertir el vector. Si éste contenía, por ejemplo, los caracteres
{'m','u','n','d','o'}, después de llamar al método se quedará con
{'o','d','n','u','m'}.
Una vez leídos los caracteres y almacenados en el vector, el programa debe determinar 
si es un palíndromo. En caso negativo, debe invertirlo (colocar sus componentes
en orden inverso) y mostrar el resultado en pantalla.
*/

#include <iostream>
using namespace std;

// Función para convertir un carácter a minúscula manualmente
char toLowerManual(char c) {
   if (c >= 'A' && c <= 'Z') {
      return c + ('a' - 'A');       // Convertir a minúscula
   }
   return c;
}

bool esPalindromo(const char v[], int size){
    if(size <= 0) return true;      // Un arreglo vacío es considerado palíndromo

    int espacio = size / 2;
    for(int i = 0; i < espacio; i++){
        char izquierda = toLowerManual(v[i]);
        char derecha = toLowerManual(v[size - 1 - i]);
        if(izquierda != derecha){
            return false;
        }
    }
    return true;
}

void esInvertir(const char v[], char invertido[], int size){
   for (int i = 0; i < size; i++){
      invertido[i] = v[size - 1 - i];
   }
}

int main(){
   const int SIZE = 100;
   char vector[SIZE];
   char caracter;
   int contador = 0;
    
   cout << "Introduzca los caracteres (finalice con '#'): ";
    
   caracter = cin.get();
    
   while(caracter != '#' && contador < SIZE){
      vector[contador] = caracter;
      caracter = cin.get();
      contador = contador + 1;
   }
    
   contador = contador - 1;
    
   if(contador == SIZE && caracter != '#'){
      cout << "\nEl vector está completo antes de ingresar '#'.\n";
   }
    
   // Función que verifica si es Palíndromo 
   
   if(esPalindromo(vector, contador)){
      cout << "Es palíndromo.\n";
   } else {
      cout << "No es palíndromo.\n";
   }
   
   // Función que genera el inverso
   
   char invertido[contador - 1];
   
   esInvertir(vector,invertido,contador);
    
   cout << "Vector invertido: ";
   for(int i = 0; i < contador; i++){
      cout << invertido[i];
   }
   
    
   return 0;
}




