#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int number1;
    int number2;
    int max;

    cout << "ingrese dos numeros enteros, el progrma los comparara y le dira cual es el mayor o si estos son iguales\n";
    cin >> number1 >> number2;
     
    if (number1>number2)
    {
    max = number1;
      cout << "El mayor es: " << max << endl;
    }

    if (number1<number2)
    {
    max = number2;
    cout << "El mayor es: " << max << endl;
    }

    if(number1==number2)
    {
    cout << "Son Iguales";
    }
        return 0;

}