#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()  
{
    int cuenta = 1; // inicializa cuenta
    while ( cuenta <= 10 ) // itera 10 veces
      {  // imprime una línea de texto   
       cout << cuenta << endl; 
      cout << ( cuenta % 2 ? "****" : "++++++++" ) << endl;   
      ++cuenta; // incrementa cuenta 16  
      } // fin de while
      return 0; // indica que terminó correctamente 
} // fin de main
 