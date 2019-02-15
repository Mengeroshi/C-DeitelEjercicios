#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int HT;
double Salario;
double Tarifa;
double HX;

int main()
{
    cout << "Introduzca las horas trabajadas (-1 para salir): " << endl;
    cin >> HT;
    cout << endl;

        while(HT!=-1)
        {
            cout << "Introduzca la tarifa por horas del empleado ($00.00): ";
            cin >> Tarifa;
            cout << endl;
                if(HT<=40)
                {
                    Salario = HT*Tarifa;
                    cout << "El salario es $" << Salario <<endl;
                }

                else
                {
                    HX=HT-40;
                    HT-=HX;
                    HX*=Tarifa*1.5;
                    Salario = (HT*Tarifa)+HX;
                    cout << "El salario es $" << Salario <<endl;
                }
            cout << "Introduzca las horas trabajadas (-1 para salir): " << endl;
            cin >> HT;
            cout << endl;
        }
            return 0;

}