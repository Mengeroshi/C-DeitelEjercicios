#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int fila = 20;
	int columna;

	while (fila >= 1)
	{
		columna = 1;

		while (columna <= 10)
		{
			cout << (fila % 2 ? "<" : ">"); //si fila es impar(hay residuo)"<" else(es par)">"
			++columna;
		}
		--fila;
		cout << endl;
	}

	return 0;
}
