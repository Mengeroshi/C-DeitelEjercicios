#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int number1;
    int number2;
    int diferencia = 0;
    int cociente = 0;

    cout << "Ingrese dos numeros para obtener su suma, producto, diferencia y cociente\n ";
    cin >> number1 >> number2;
    int suma = number1 + number2;
    cout << "Suma: " << suma << endl;
    
    int producto = (number1*number2);
    cout << "Producto: " << producto << endl;

    if(number1>number2)
    {
        diferencia = number1 - number2;
        cociente = number1/number2;
    }
    if (number1<number2)
    {
        diferencia = number2 - number1;
        cociente = number2/number1;
    }

    cout << "Diferencia: " << diferencia << endl;
    cout << "Cociente: " << cociente << endl;

    return 0;
}