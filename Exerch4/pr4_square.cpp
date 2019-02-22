#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
	int fila;
	int columna;
	cout<< "Escribe el numero del lado del cuadrado";
	cin>>fila;
		int neww = fila;

	 while(fila>=1)
	 {
		 	columna =1;
			 while(columna<=neww)
			 {
				 cout<<"*";
				 columna++;
			 }
		--fila;
		cout << endl;
	 }
	
	
	
	
	return 0;
}