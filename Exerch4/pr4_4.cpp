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
    int enteros =0;
   
    cout << "suma es: " << suma;
   
    while(x<=10)
    {
         suma += x;
         /*cout << suma << endl;*/;
         x++;

    }
       cout << suma << endl;

        return 0;
}