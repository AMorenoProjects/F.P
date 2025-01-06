////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Moreno Millán
////////////////////////////////////////////////////////////////////////////

/*
En este ejercicio se pide que defina las
cabeceras de varios métodos. No debe implementar ninguno de los métodos. Sólo se
pide que escriba las cabeceras y cómo sería la llamada a dichos métodos desde otro
sitio (por ejemplo, desde el main) pero no tiene que construir un programa completo
que compile.

Se quiere definir una clase Instante para representar un instante de tiempo dentro
de un día. Por lo tanto, la clase debe representar un número de horas, minutos y
segundos.

¿Qué datos miembro debería tener? Defina las cabeceras de métodos para realizar
las siguientes tareas:

• Obtener el número de segundos y minutos transcurridos desde las
   0h 0min 0seg. Por ejemplo, si el instante es 1h 2min 5seg, 
   el número total de segundos transcurridos es de 3725 y el de minutos 62.
   
• Establecer el instante a partir del número de segundos transcurridos. Por ejemplo,
   si se establece a 3725, el instante debe contener 1h 2min 5seg.

• Puede especificar las cabeceras de todos los métodos adicionales que estime
   oportuno

*/

class Instante {
private:
    int horas;   // Número de horas (0-23)
    int minutos; // Número de minutos (0-59)
    int segundos; // Número de segundos (0-59)

public:
   // Constructor por defecto (instante en 0h 0min 0seg)
   Instante(){
      
   }

   // Constructor que recibe un número de segundos transcurridos 
   Instante(int segundosTranscurridos){
      
   }

   // Método para establecer el instante a partir de un número de segundos transcurridos
   void EstablecerDesdeSegundos(int segundosTranscurridos){
      
   }

   // Método para obtener el número total de segundos transcurridos desde 0h 0min 0seg
   int ObtenerSegundosTranscurridos(){
      
   }
   
   // Método para obtener el número total de minutos transcurridos desde 0h 0min 0seg
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

   // Método para mostrar el instante 
   void MostrarInstante(){
      
   }
};

