#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
   int aprobados = 0; // n�mero de aprobados       
   int reprobados = 0; // n�mero de reprobados   
   int contadorEstudiantes = 1; // contador de estudiantes
   int resultado; // resultado de un examen (1 = aprobado, 2 = reprobado)

   // proces a 10 estudiantes usando el ciclo controlado por contador
   while ( contadorEstudiantes <= 10 ) 
   {
      // pide datos de entrada y obtiene el valor el usuario
      cout << "Escriba el resultado (1 = aprobado, 2 = reprobado): ";
      cin >> resultado; // recibe como entrada el resultado
      
      while (resultado != 1 && resultado != 2)
      {
          cout << "Ha introducido un codigo erroneo. Intente de nuevo\n";
          cout << "Escriba el resultado (1 = aprobado, 2 = reprobado): ";
          cin >> resultado; // recibe como entrada el resultado
      }

      // if...else anidado en la instrucci�n while                           
      if ( resultado == 1 )          // si resultado es 1,         
         aprobados++;     // incrementa aprobados;       
      else                        // else resultado no es 1, por lo que
         if( resultado ==2 )
             reprobados++; // incrementa reprobados      

      // incrementa contadorEstudiantes para que el ciclo termine en cierto momento
      contadorEstudiantes = contadorEstudiantes + 1; 
   } // fin de while 

   // fase de terminaci�n; muestra el n�mero de aprobados y reprobados
   cout << "Aprobados " << aprobados << "\nReprobados " << reprobados << endl;

   // determina si aprobaron m�s de ocho estudiantes
   if ( aprobados > 8 )
      cout << "Aumentar colegiatura " << endl; 
    return 0;
}