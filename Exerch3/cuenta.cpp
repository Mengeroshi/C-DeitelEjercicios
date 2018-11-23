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
    
    cout << "El saldo de tu cuenta es " << mysaldo1.getBalance() << endl;
    
    int montoAbono;

    cout << "Ingrese el monto que quiere abonar: $" << endl;
    cin >> montoAbono;
    cout << "Esta seguro que quiere abonar $" << montoAbono << endl;

    mysaldo1.credit( montoAbono);

    cout << "Su saldo es de $" << mysaldo1.getBalance() << endl;
        
        return 0;
}