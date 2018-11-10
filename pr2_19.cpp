#include <iostream>

using std::cout;
using std::cin;
using std::endl;
int main()
{ 
    int number1;
    int number2;
    int number3;
    int max;
    int min;

    cout << "Ingrese tres numeros para obtener su suma, promedio, multiplicacion, el menor y el mayor\n ";
     cin >> number1 >> number2 >> number3;
     int suma = number1+number2+number3;
     cout << "suma: " << suma << endl;
     int promedio = suma/3;
     cout << "promedio: " << promedio << endl;

     max = number1;
     if(number1 < number2)
     max = number2;
     if (number2 < number3)
     max =number3;
     cout << "Mayor: " << max << endl;

     min = number1;
     if(number1 > number2)
     min = number2;
     if (number2 > number3)
     min =number3;
     cout << "Menor: " << min << endl;
     
     return 0;
}