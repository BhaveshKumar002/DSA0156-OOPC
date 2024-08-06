#include<iostream>
#include<iomanip>
#include<string>
#include<sstream>
#include<bitset>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a number"<<endl;
	cin>>a;
	bitset<8> b(a);
	cout<<b<<endl;
	cout<<oct<<a<<endl;
	cout<<uppercase<<hex<<a<<endl;
	
	cout<<dec;
	stringstream s;
	string c;
	int d;
	cout<<"Enter a string hex to decimal"<<endl;
	cin>>c;	
	s<<hex<<c;
	s>>d;
	cout<<d<<endl;
	
	stringstream s2;
	string f;
	int e;
	cout<<"Enter a string oct to decimal"<<endl;
	cin>>f;
	s2<<oct<<f;
	s2>>e;
	cout<<e<<endl;
}  
