#include <iostream>

using std::cout;
using std::cin;
using std::endl;
int main()
{
    int number1;
    int number2;
    int number3;
    int number4;
    int number5;
    cout << "Escribe 5 interos y el programa los ordenara de mayor a menor";
    cin >> number1 >> number2 >> number3 >> number4 >> number5;
    int first = 0;
    int second = 0;
    int third = 0;
    int forth = 0;
    int fifth = 0;
    if(number1>=number2 && number2>=number3&& number3>=number4 && number5<=number4 )
    {
        first = number1;
        second= number2;
        third = number3;
        forth = number4;
        fifth = number5;
    }
    

    cout <<"1°: " << first << endl; 
    cout <<"2°: " << second << endl;
    cout <<"3°: " << third << endl;
    cout <<"4°: " << forth << endl; 
    cout <<"5°: " << fifth << endl; 
            
            
            return 0;
}