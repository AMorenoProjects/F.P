////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
Queremos mostrar al inicio de nuestros programas un mensaje inicial
(de tipo string) enmarcado en sendas l�neas de caracteres, como por ejemplo:
------------------
Elimina Caracteres
------------------
o bien:
***************
C�lculo del IVA
***************
Observe que queremos poder usar cualquier car�cter para enmarcar. 
Adem�s, el n�mero de caracteres usado para enmarcar se ha de ajustar autom�ticamente al tama�o
del texto del mensaje.
Se pide dise�ar las funciones que estime oportuno para realizar esta tarea. No se
le pide que implemente dichas funciones, sino que �nicamente escriba sus 
cabeceras (nombre, tipo de vuelto y par�metros) Est� claro que al menos debe definir una
cabecera para una funci�n que imprima el mensaje. Pero se le pide que piense las tareas 
que deber�a ejecutar dicha funci�n y si ve conveniente definir funciones auxiliares
para realizar esas tareas, incluya tambi�n sus cabeceras (pero no debe implementar
ninguna de ellas)

*/

//const string&
// No permite modificar el contenido del objeto original.
// Se usa cuando solo necesitas leer el valor del 'string', sin alterarlo.
void ImprimeMensajeEnmarcado(const string& mensaje, char caracterEnmarcado);

string GeneraLinea(char caracter, int longitud);

int LongitudMarco(const string& mensaje);
















