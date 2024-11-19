////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
 En este ejercicio no hace falta construir ning�n programa. Debe
 crear un fichero de texto (con extensi�n cpp o txt)explicando qu� problemas observa
 en los siguientes condicionales:
*/

a)

 char tipo_radar;
 cin >> tipo_radar;
 if (tipo_radar == 'F' && tipo_radar == 'f')

/* 
El problema es que el valor de tipo_radar no puede ser 'F' y 'f' a la vez.
El operador && deber�a cambiarse a || en todo caso.
*/

b)

 double velocidad;
 cin >> velocidad;
 if (velocidad > 100 && velocidad < 70)
 cout << "\nVelocidad fuera del rango";

/*
Igual que antes la velocidad no podr� tener un valor superior a 100 y al mismo
tiempo ser inferior a 70.
*/

c)

 double velocidad;
 cin >> velocidad;
 if (velocidad > 100 || velocidad > 110)
 cout << "Velocidad excesiva";
 
/*
El problema en esta ocasi�n es que trata de una condici�n redundante,
si la velocidad est� por encima de 110 implicitamente lo estar� por
encima de 100.
*/
  




