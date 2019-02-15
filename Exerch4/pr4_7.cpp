#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int x;
int y;
int i;
int potencia;

int main()
{
    i=1;
    potencia = 1;

    cout << "Escriba el numero que quiera elevar a cierta potencia: ";
    cin>> x;
    cout << "Escriba el exponente: ";
    cin>> y;

    while(i<=y)
    {
    potencia*=x;
    ++i;
    }
    cout <<endl;
    cout << potencia;
        
        return 0;
}