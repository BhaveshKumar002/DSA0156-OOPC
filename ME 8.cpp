#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Enter a number"<<endl;
	cin>>a;
	b = a%10;
	d = a/10;
	c = d%10;
	cout<<"The Least significance digit "<<b<<endl;
	cout<<"The Next Least significance digit "<<c;
}
