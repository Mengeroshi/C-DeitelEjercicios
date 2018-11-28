#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int contador;
int numero;
int mayor;
int mayor2;
int puente;

int main()
{
    contador = 1;
     mayor = 0;
     mayor2 = 0;
     puente = 0;

    while (contador<=10)
    {
        cout << "Introduzca un numero: ";
        cin >> numero;

        if(numero>mayor)
        {
            mayor = numero;
               
        }
        else
        {
            puente = numero;
            
            if(puente>mayor2)
            {
                mayor2 = numero;
            }
        }    
        contador++;
    }
    cout << endl;
    cout << "El numero mayor es: " << mayor << "\nEl segundo numero mayor es: " << mayor2;
            return 0;
}