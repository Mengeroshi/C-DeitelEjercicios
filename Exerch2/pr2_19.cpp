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
     int producto = number1*number2*number3;
     cout << "producto: "<< producto << endl;

        
        if(number1 > number2 & number1 > number3)
        {
        max = number1;
        cout << "Mayor: " << max << endl;
        }
     
        if (number2 > number1 & number2 > number3)
        {
        max =number2;
        cout << "Mayor: " << max << endl;
        }

         if (number3 > number1 & number3 > number2)
        {
        max =number3;
        cout << "Mayor: " << max << endl;
        }
        //lel
          if (number1 < number2 & number1 < number3)
        {
        min =number1;
        cout << "Menor: " << min << endl;
        }
           
           if (number2 < number1 & number2 < number3)
        {
        min =number2;
        cout << "Menor: " << min << endl;
        }
        
        if (number3 < number1 & number3 < number2)
        {
        min =number3;
        cout << "Menor: " << min << endl;
        }
     
     return 0;
}