////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
 En este ejercicio no hace falta construir ningún programa. Debe
 crear un fichero de texto (con extensión cpp o txt)explicando qué problemas observa
 en los siguientes condicionales:
*/

a)

 char tipo_radar;
 cin >> tipo_radar;
 if (tipo_radar == 'F' && tipo_radar == 'f')

/* 
El problema es que el valor de tipo_radar no puede ser 'F' y 'f' a la vez.
El operador && debería cambiarse a || en todo caso.
*/

b)

 double velocidad;
 cin >> velocidad;
 if (velocidad > 100 && velocidad < 70)
 cout << "\nVelocidad fuera del rango";

/*
Igual que antes la velocidad no podrá tener un valor superior a 100 y al mismo
tiempo ser inferior a 70.
*/

c)

 double velocidad;
 cin >> velocidad;
 if (velocidad > 100 || velocidad > 110)
 cout << "Velocidad excesiva";
 
/*
El problema en esta ocasión es que trata de una condición redundante,
si la velocidad está por encima de 110 implicitamente lo estará por
encima de 100.
*/
  




