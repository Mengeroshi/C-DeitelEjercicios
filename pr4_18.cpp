#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int N;

int main()
{
    N = 1;
    cout << "N\tN*10\tN*100\tN*1000"<< endl;
    
    while(N <=5)
    { 
        cout << N <<"\t"<< N*10 <<"\t" << N*100 <<"\t"<<N*1000 << endl;
        N++;
    }
    return 0;
}