#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int contador;
int numero;
int mayor;

int main()
{
    contador = 1;
     mayor = 0;

    while (contador<=10)
    {
        cout << "Introduzca un numero: ";
        cin >> numero;

        if(numero>mayor)
        {
            mayor = numero;
        }
        
        contador++;
    }
    cout << endl;
    cout << "El numero mayor es: " << mayor;
            return 0;
}