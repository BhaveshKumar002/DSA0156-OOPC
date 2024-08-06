#include <iostream>
using namespace std;
string oe(int a) 
{
	if(a%2==0)
	{
		return "Even";
	}
	else
	{
		return "Odd";
	}
}
int main() 
{
    int r;
    string z;
    cin>>r;
    cout << "Result of addition: " <<oe(r)<< endl;
    return 0;
}

