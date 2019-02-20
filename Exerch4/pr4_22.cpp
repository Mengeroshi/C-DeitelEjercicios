#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()  
{
	 int fila = 10;
	 int columna;

	 while(fila>=1)
	 {
		columna =1;
		 	
			 while(columna<=10)
			 {
				 cout <<(fila%2 ? "<":">");//si fila es impar(hay residuo)"<" else(es par)">"
				 ++columna;
			 }
		--fila;
		cout << endl;
	 }
	
	return 0;
}
