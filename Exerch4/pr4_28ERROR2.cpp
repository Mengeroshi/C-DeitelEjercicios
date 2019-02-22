#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int lol =10;

	while(lol>=1)
	{
		if((lol%2)==0)
		{
			cout<<"*";
		}
		else
		{
			cout<<"@";
		}
	lol--;
	}
	return 0;
}