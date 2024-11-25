////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
Queremos mostrar al inicio de nuestros programas un mensaje inicial
(de tipo string) enmarcado en sendas líneas de caracteres, como por ejemplo:
------------------
Elimina Caracteres
------------------
o bien:
***************
Cálculo del IVA
***************
Observe que queremos poder usar cualquier carácter para enmarcar. 
Además, el número de caracteres usado para enmarcar se ha de ajustar automáticamente al tamaño
del texto del mensaje.
Se pide diseñar las funciones que estime oportuno para realizar esta tarea. No se
le pide que implemente dichas funciones, sino que únicamente escriba sus 
cabeceras (nombre, tipo de vuelto y parámetros) Está claro que al menos debe definir una
cabecera para una función que imprima el mensaje. Pero se le pide que piense las tareas 
que debería ejecutar dicha función y si ve conveniente definir funciones auxiliares
para realizar esas tareas, incluya también sus cabeceras (pero no debe implementar
ninguna de ellas)

*/

//const string&
// No permite modificar el contenido del objeto original.
// Se usa cuando solo necesitas leer el valor del 'string', sin alterarlo.
void ImprimeMensajeEnmarcado(const string& mensaje, char caracterEnmarcado);

string GeneraLinea(char caracter, int longitud);

int LongitudMarco(const string& mensaje);
















