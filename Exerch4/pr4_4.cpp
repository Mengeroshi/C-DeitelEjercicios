#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int x;
int suma;

int main()
{
    x=1;
    suma = 0;
   
    cout << "suma es: " << suma;
    while(x<=10)
    {
         suma = suma+x;
         ++x;

    }
        cout << suma << endl;

        return 0;
}