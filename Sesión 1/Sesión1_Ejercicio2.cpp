////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

 
 int salario_base;
 int salario_final;
 int incremento;
 salario_base = 1000;
 incremento = 200;
 salario_final = salario_base;
 salario_final = salario_final + incremento;
 salario_base = 3500;
 cout << "\nSalario base: " << salario_base;
 cout << "\nSalario final: " << salario_final;


/*
Pregunta 1:
Indique cuál sería el resultado de las siguientes operaciones:

Respuesta 1: 
El resultado sería, Salario base: 3500, Salario final: 1200
*/

/*
Pregunta 2:
¿El hecho de realizar la asignación salario_final = salario_base; hace que 
ambas variables estén ligadas durante todo el programa y que cualquier 
modificación posterior de salario_base afecte a salario_final?

Respuesta 2: 
No, el programa sigue un orden secuencial, por lo tanto cuando 
'salario_final = salario_base;', el valor de 'salario_final'
se determina en ese momento y no se verá alterado si se modifica 
el 'salario_base' más adelante.
*/
