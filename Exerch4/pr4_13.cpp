#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int kus;//kilometros usados
    int totalkus=0;//almacena los kilometros utilizados de cada estacion
    int l;//litrosgastados
    int totalL=0;//almacena los litros utilizados de cada estacion
    double kplu;//Kilometros/litro en la estacion actual
    double totalklu = 0;//kilometros/litro hasta ahora considerando todas las estaciones

    cout <<"Escriba los kilometros usados (-1 para salir): ";
        cin >> kus;       
    
    while (kus!=-1)
    {
        cout << endl;
        cout << "Escriba los litros: ";
        cin >> l;

        kplu = static_cast<double>(kus) / l;

        cout << endl;
        cout << "KPL en este reabastecimiento: " << kplu << endl;
        
        totalkus+=kus;
        totalL+=l;
        totalklu = static_cast<double>(totalkus) / totalL;

        cout << "Total KPL: " << totalklu << endl;

        cout <<"Escriba los kilometros usados (-1 para salir): ";
        cin >> kus;
    }
        return 0;
}