////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Moreno Mill�n
////////////////////////////////////////////////////////////////////////////

/*
En este ejercicio se pide que defina las
cabeceras de varios m�todos. No debe implementar ninguno de los m�todos. S�lo se
pide que escriba las cabeceras y c�mo ser�a la llamada a dichos m�todos desde otro
sitio (por ejemplo, desde el main) pero no tiene que construir un programa completo
que compile.

Se quiere definir una clase Instante para representar un instante de tiempo dentro
de un d�a. Por lo tanto, la clase debe representar un n�mero de horas, minutos y
segundos.

�Qu� datos miembro deber�a tener? Defina las cabeceras de m�todos para realizar
las siguientes tareas:

� Obtener el n�mero de segundos y minutos transcurridos desde las
   0h 0min 0seg. Por ejemplo, si el instante es 1h 2min 5seg, 
   el n�mero total de segundos transcurridos es de 3725 y el de minutos 62.
   
� Establecer el instante a partir del n�mero de segundos transcurridos. Por ejemplo,
   si se establece a 3725, el instante debe contener 1h 2min 5seg.

� Puede especificar las cabeceras de todos los m�todos adicionales que estime
   oportuno

*/

class Instante {
private:
    int horas;   // N�mero de horas (0-23)
    int minutos; // N�mero de minutos (0-59)
    int segundos; // N�mero de segundos (0-59)

public:
   // Constructor por defecto (instante en 0h 0min 0seg)
   Instante(){
      
   }

   // Constructor que recibe un n�mero de segundos transcurridos 
   Instante(int segundosTranscurridos){
      
   }

   // M�todo para establecer el instante a partir de un n�mero de segundos transcurridos
   void EstablecerDesdeSegundos(int segundosTranscurridos){
      
   }

   // M�todo para obtener el n�mero total de segundos transcurridos desde 0h 0min 0seg
   int ObtenerSegundosTranscurridos(){
      
   }
   
   // M�todo para obtener el n�mero total de minutos transcurridos desde 0h 0min 0seg
   int ObtenerMinutosTranscurridos(){
      
   }
    
   // Obtener las horas en un intante
   int ObtenerHoras(){
      
   }

   // Obtener los minutos en un intante
   int ObtenerMinutos(){
      
   }

   // Obtiene los segunfos en un intante
   int ObtenerSegundos(){
      
   }

   // M�todo para mostrar el instante 
   void MostrarInstante(){
      
   }
};

