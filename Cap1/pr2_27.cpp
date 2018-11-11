#include <iostream>

using std::cout;
using std::cin;
using std::endl;
int main()
{
char letter;
    cout << "Introduzca una letra y el programa le mostrara su valor en el codigo ASCII\n";
    cin >> letter;

    cout <<  static_cast< int >( letter ); 

        return 0;
}