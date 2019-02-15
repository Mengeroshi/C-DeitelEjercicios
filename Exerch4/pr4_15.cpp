#include <iostream>
using std::cout;
using std::cin;
using std::endl;

double Venta;
double Salario=200;


int main()
{
    cout <<"Introduzca las ventas en dolares (-1 para salir): ";
    cin >> Venta;
    cout << endl;

        while(Venta!=-1)
        {
           Salario+=(Venta*.09);

           cout << "El salario es: " << Salario <<endl;
           cout << endl;
           
           Salario=200;
            cout <<"Introduzca las ventas en dolares (-1 para salir): ";
            cin >> Venta;
            cout << endl;
        }
                return 0;
}