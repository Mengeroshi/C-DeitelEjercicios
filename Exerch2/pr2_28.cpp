#include <iostream>

using std::cout;
using std::cin;
using std::endl;
int main()
{
	int number0;
	cout << "Ingrese un numero de 5 digitos"<<endl;
	cin >> number0;

int number1 = number0/10000;
int number2 = (number0-(number1*10000))/1000;
int number3 = (number0 -((number1*10000)+(number2*1000)))/100;
int number4 = (number0 -((number1*10000)+(number2*1000)+(number3*100)))/10;
int number5 = (number0 -((number1*10000)+(number2*1000)+(number3*100)+(number4*10)))/1;

cout <<number1<<" "<<number2<<" "<<number3<<" "<<number4<<" "<<number5<<endl;

return 0;
}