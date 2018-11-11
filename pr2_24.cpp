#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int number;
    cout << "Introduzca un nombre y el programa indicara si es par o impar \n";
    cin >> number; 
    
    if(number%2 == 0 )
    cout << "par";
    
    if(number%2 != 0 )
    cout << "impar";
        
        return 0;
} 