////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Encuentre los errores, si los hubiese, en las siguientes
funciones void:
*/

void Imprime(double valor){
double valor;                  // Se produce un error porque no se puede declarar 2 veces una variable con el mismo nombre
cout << valor;
}

void Cuadrado(int entero){     // No tiene sentido usar una función void si se quiere regresar un valor
return entero*entero;          // Se soluciona cambiando void -> int
}

int Cuadrado(int entero){      // Falta un return
entero = entero*entero;
}

