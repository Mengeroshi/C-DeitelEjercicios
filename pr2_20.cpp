#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int pi = 3.1416;
    int radio;
    cout << "Inserte el valor del radio de la circulo para calcular su diametro, circunferencia y area\n";
    cin >> radio;

    int diametro = radio*2;
    cout << "Diametro: "<< diametro << endl;

    int circuferencia = diametro*pi;
    cout << "Circunferencia: " << circuferencia << endl;

    int area =pi*(radio*radio);
    cout << "Area: " << area << endl;
        return 0;


}