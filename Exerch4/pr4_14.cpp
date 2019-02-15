#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int NumeroCuenta;
double SaldoInicio;
double TotalArCar;
double CredApl;
double LimitCredito;
double NuevoSaldo;

int main()
{
    cout << "Introduzca el numero de cuenta (o -1 para salir): ";
    cin >> NumeroCuenta;
    cout << endl;

        while(NumeroCuenta!=-1)
        {
            cout << "Introduzca el saldo inicial: ";
            cin >> SaldoInicio;
            cout << endl;

            cout <<"Introduzca los cargos totales: ";
            cin >> TotalArCar;
            cout << endl;

            cout << "Introduzca los creditos totales: ";
            cin >> CredApl;
            cout << endl;
            
            cout << "Introduzca el limite de credito: ";
            cin >> LimitCredito;
            cout << endl;

            NuevoSaldo = SaldoInicio+TotalArCar-CredApl;
            
            cout << "El nuevo saldo es: " <<NuevoSaldo << endl;

            cout << "Cuenta: " << NumeroCuenta << endl;
            cout << "Limite de Credito: " << LimitCredito << endl;
            cout  << "Saldo: " << NuevoSaldo << endl;
                if(NuevoSaldo>LimitCredito)
                {
                    cout << "Se excedio el limite de su credito";
                }
            cout << endl;
            cout << "Introduzca el numero de cuenta (o -1 para salir): ";
    cin >> NumeroCuenta;
    cout << endl;
        }
                return 0;
}