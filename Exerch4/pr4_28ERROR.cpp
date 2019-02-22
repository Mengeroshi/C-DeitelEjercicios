#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int fila;

	cout<<"ingrese el area del cuadro"<<endl;
	cin>>fila;
	int neww = fila;
	
	while(fila>=1)
	{
		int columna=1;
		while(columna<=neww)
		{
			if((columna%2)==0)
			{
			cout<<"*";
			}
			else
			{
			cout<<"@";
			}

			columna++;
		}
		
		--fila;
		cout << endl;
	}








	return 0;
}