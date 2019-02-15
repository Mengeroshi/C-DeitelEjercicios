#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Account
{
    public:
        Account( int status )
            { 
                if (status>= 0)
                    balance = status;
                else
                cout << "Invalid Intial Balance" <<endl;
            }
        int getBalance()
            {
                return balance; 
            }
        void credit(int money)
            {
            balance = balance + money;
            }

        void debit(int money)
            {
                if(money<= balance)
                balance = balance - money;

                else
                cout<<"El monto a cargar excede el saldo de la cuenta."<<endl;
            }
    
    private:
        int balance = 0;

};

int main()
{
    Account mysaldo1(500);
    Account mysaldo2(1000);
    
    cout << "El saldo de tu cuenta es " << mysaldo1.getBalance() << endl;
    cout << "El saldo de tu cuenta es " << mysaldo2.getBalance() << endl;
    
    int montoAbono;
    int montoRetiro;

    cout << "Ingrese el monto que quiere abonar en la cuenta 1 y retirar en la cuenta2: $" << endl;
    cin >> montoAbono >> montoRetiro;
    cout << "Esta seguro que quiere abonar $" << montoAbono <<" y retirar $"<<montoRetiro<< endl;

    mysaldo1.credit( montoAbono);
    mysaldo2.debit(montoRetiro);

    cout << "Su saldo en la cuenta 1 es de $" << mysaldo1.getBalance() << endl;
    cout << "Su saldo en la cuenta 2 es de $" << mysaldo2.getBalance() << endl;
        
        return 0;
}