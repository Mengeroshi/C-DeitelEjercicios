#include <iostream>

using std::cout;
using std::cin;
using std::endl;
int main()
{
    int number1;
    int number2;

    cout<< "Ingrese dos numeros y el programa determinara si el primero es multiplo del segundo\n";
    cin >> number1 >> number2;

    if(number1 % number2 == 0)
    cout << number1<<" es divisor de "<<number2<< ". El resultado es: " << number1/number2;
    

    if(number1 % number2 != 0)
    cout << number1<<" no es divisor de "<<number2;
        
        return 0;
}    