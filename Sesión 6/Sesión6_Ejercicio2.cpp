////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Construya un programa que declare un vector de caracteres de
tama�o 100. Lea caracteres desde la entrada por defecto hasta que se introduzca el
car�cter # y almac�nelos en el vector anterior (el car�cter terminador # no se a�ade
al vector). En la lectura de los caracteres, debe tener en cuenta que no se deben
introducir m�s caracteres que el tama�o del vector (100 en este ejemplo)
Para leer los caracteres (inclu�do el espacio en blanco), haga uso de la instrucci�n
caracter = cin.get() (en vez de cin >> caracter)

Implemente algoritmos para realizar las siguientes tareas:
a) Comprobar si el vector es un pal�ndromo, es decir, que se lee igual de izquierda a
derecha que de derecha a izquierda. Por ejemplo, {'a','b','b','a'} ser�a
un pal�ndromo, pero {'a','c','b','a'} no lo ser�a. Si la secuencia tiene un
n�mero impar de componentes, la que ocupa la posici�n central no influye en el
resultado, por lo que {'a','b','j','b','a'} ser�a un pal�ndromo.
b) Invertir el vector. Si �ste conten�a, por ejemplo, los caracteres
{'m','u','n','d','o'}, despu�s de llamar al m�todo se quedar� con
{'o','d','n','u','m'}.
Una vez le�dos los caracteres y almacenados en el vector, el programa debe determinar 
si es un pal�ndromo. En caso negativo, debe invertirlo (colocar sus componentes
en orden inverso) y mostrar el resultado en pantalla.
*/

#include <iostream>
using namespace std;

// Funci�n para convertir un car�cter a min�scula manualmente
char toLowerManual(char c) {
   if (c >= 'A' && c <= 'Z') {
      return c + ('a' - 'A');       // Convertir a min�scula
   }
   return c;
}

bool esPalindromo(const char v[], int size){
    if(size <= 0) return true;      // Un arreglo vac�o es considerado pal�ndromo

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
      cout << "\nEl vector est� completo antes de ingresar '#'.\n";
   }
    
   // Funci�n que verifica si es Pal�ndromo 
   
   if(esPalindromo(vector, contador)){
      cout << "Es pal�ndromo.\n";
   } else {
      cout << "No es pal�ndromo.\n";
   }
   
   // Funci�n que genera el inverso
   
   char invertido[contador - 1];
   
   esInvertir(vector,invertido,contador);
    
   cout << "Vector invertido: ";
   for(int i = 0; i < contador; i++){
      cout << invertido[i];
   }
   
    
   return 0;
}




