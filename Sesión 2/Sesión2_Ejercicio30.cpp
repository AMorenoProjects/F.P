////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
 Indique si se produce un problema de precisión o de
 desbordamiento en los siguientes ejemplos y diga cuál sería el 
 resultado final de las operaciones
*/



a) 
int chico, chico1, chico2;
chico1 = 1234567;
chico2 = 1234567;
chico = chico1 * chico2;

/* Se produce un problema de precisión, pues las variables enteras abarcan 
desde el -32768 hasta el 32767 */
 
b)
long grande;
int chico1, chico2;
chico1 = 1234567;
chico2 = 1234567;
grande = chico1 * chico2;

/* Se produce un problema de precisión, pues las variables enteras abarcan 
desde el -32768 hasta el 32767 por lo que se perderia información */
 
c)
double resultado, real1, real2;
real1 = 123.1;
real2 = 124.2;
resultado = real1 * real2;

/* No se produce un problema de precisión*/
 
d)
double resultado, real1, real2;
real1 = 123456789.1;
real2 = 123456789.2;
resultado = real1 * real2;

/* Los números de tipo double tienen una precisión de aproximadamente 15-17 dígitos decimales.
Aunque los valores caben dentro del rango de 'double', se pueden producir
problemas de precisión en la parte decimal. */
 
e)
double real, otro_real;
real = 2e34;
otro_real = real + 1;
otro_real = otro_real- real;
 
/* No existirá problemas de precisión pues al final el resultado será 1*/ 
 
f)
double real, otro_real;
real = 1e+300;
otro_real = 1e+200;
otro_real = otro_real * real;
 
/* Existirá un problema de precisión, pues el tipo de datos 'double' 
no es capaz de almacenar tantos dígitos*/
  
 
g)
float chico;
double grande;
grande = 2e+150;
chico = grande;
/* Se producira un problema de precision pues el tipo de dato float 
tiene menor precision que el tipo de dato double*/
